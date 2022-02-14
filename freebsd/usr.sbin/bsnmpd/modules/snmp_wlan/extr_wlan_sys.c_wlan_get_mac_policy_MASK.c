
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int macsupported; size_t mac_nacls; int wname; void* mac_policy; } ;
struct ieee80211req_maclist {int dummy; } ;
struct ieee80211req {int i_type; void* i_val; int i_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_5 (int ,int ,int*,int *,size_t*,int ) ;

int
FUNC_6(struct wlan_iface *VAR_13)
{
 int VAR_14 = VAR_3;
 size_t VAR_15 = 0;
 struct ieee80211req VAR_16;

 FUNC_1(&VAR_16, 0, sizeof(struct ieee80211req));
 FUNC_3(VAR_16.i_name, VAR_13->wname, VAR_4);
 VAR_16.i_type = VAR_1;
 VAR_16.i_val = VAR_3;

 if (FUNC_0(VAR_8, VAR_6, &VAR_16) < 0) {
  if (VAR_7 != VAR_0) {
   FUNC_4(VAR_5, "iface %s - get param: ioctl(%d) "
       "failed: %s", VAR_13->wname, VAR_16.i_type,
       FUNC_2(VAR_7));
   VAR_13->macsupported = 0;
   return (-1);
  } else {
   VAR_13->macsupported = 1;
   VAR_13->mac_policy = VAR_11;
   return (0);
  }

 }

 VAR_13->macsupported = 1;

 switch (VAR_14) {
 case 131:
  VAR_13->mac_policy = VAR_9;
  break;
 case 130:
  VAR_13->mac_policy = VAR_10;
  break;
 case 128:
  VAR_13->mac_policy = VAR_12;
  break;
 case 129:

 default:
  VAR_13->mac_policy = VAR_11;
  break;
 }

 VAR_15 = 0;
 VAR_14 = VAR_2;
 if (FUNC_5(VAR_13->wname, VAR_1, &VAR_14, ((void*)0),
     &VAR_15, 0) < 0)
  return (-1);

 VAR_13->mac_nacls = VAR_15 / sizeof(struct ieee80211req_maclist *);
 return (0);
}
