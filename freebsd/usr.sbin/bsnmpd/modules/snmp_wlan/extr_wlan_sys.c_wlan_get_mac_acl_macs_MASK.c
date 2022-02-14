
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_iface {scalar_t__ mac_policy; int mac_nacls; int wname; scalar_t__ macsupported; } ;
struct ieee80211req_maclist {int dummy; } ;
struct ieee80211req {int i_type; void* i_val; int i_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211req*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (struct ieee80211req*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct wlan_iface*,struct ieee80211req_maclist const*) ;
 scalar_t__ FUNC_7 (int ,int ,int*,int *,size_t*,int ) ;

int
FUNC_8(struct wlan_iface *VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = VAR_2;
 size_t VAR_13 = 0;
 uint8_t *VAR_14;
 struct ieee80211req VAR_15;
 const struct ieee80211req_maclist *VAR_16;

 if (VAR_9->mac_policy == VAR_8) {
  VAR_9->mac_nacls = 0;
  return (0);
 }

 FUNC_2(&VAR_15, 0, sizeof(struct ieee80211req));
 FUNC_4(VAR_15.i_name, VAR_9->wname, VAR_3);
 VAR_15.i_type = VAR_1;
 VAR_15.i_val = VAR_2;


 if (FUNC_0(VAR_7, VAR_5, &VAR_15) < 0) {
  if (VAR_6 != VAR_0) {
   FUNC_5(VAR_4, "iface %s - get param: ioctl(%d) "
       "failed: %s", VAR_9->wname, VAR_15.i_type,
       FUNC_3(VAR_6));
   VAR_9->macsupported = 0;
   return (-1);
  }
 }

 if (VAR_13 == 0) {
  VAR_9->mac_nacls = 0;
  return (0);
 }

 if ((VAR_14 = (uint8_t *)FUNC_1(VAR_13)) == ((void*)0))
  return (-1);

 if (FUNC_7(VAR_9->wname, VAR_1, &VAR_12, VAR_14,
     &VAR_13, 0) < 0)
  return (-1);

 VAR_11 = VAR_13 / sizeof(*VAR_16);
 VAR_16 = (struct ieee80211req_maclist *) VAR_14;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  (void)FUNC_6(VAR_9, VAR_16 + VAR_10);

 VAR_9->mac_nacls = VAR_11;
 return (0);
}
