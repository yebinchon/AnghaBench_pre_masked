
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_mac_mac {struct ieee80211req_mlme* mac; int mac_status; } ;
struct wlan_iface {scalar_t__ mac_policy; int wname; } ;
struct ieee80211req_mlme {int im_macaddr; int im_reason; int im_op; } ;
typedef int mlme ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct ieee80211req_mlme*,size_t) ;
 int FUNC_1 (struct ieee80211req_mlme*,int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int*,struct ieee80211req_mlme*,size_t*,int) ;

int
FUNC_3(struct wlan_iface *VAR_9, struct wlan_mac_mac *VAR_10)
{
 int VAR_11 = 0;
 size_t VAR_12 = VAR_1;
 struct ieee80211req_mlme VAR_13;

 if (FUNC_2(VAR_9->wname, VAR_2, &VAR_11,
     VAR_10->mac, &VAR_12, 1) < 0)
  return (-1);

 VAR_10->mac_status = VAR_6;


 if (VAR_9->mac_policy != VAR_8)
  return (0);

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.im_op = VAR_4;
 VAR_13.im_reason = VAR_5;
 FUNC_0(VAR_13.im_macaddr, VAR_10->mac, VAR_1);
 VAR_12 = sizeof(struct ieee80211req_mlme);

 if (FUNC_2(VAR_9->wname, VAR_3, &VAR_11, &VAR_13,
     &VAR_12, 1) < 0 && VAR_7 != VAR_0)
  return (-1);

 return (0);
}
