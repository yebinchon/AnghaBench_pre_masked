
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int scan_status; int wname; int scan_maxdwell; int scan_mindwell; int scan_duration; int scan_flags; } ;
struct ieee80211_scan_req {scalar_t__ sr_nssid; int sr_maxdwell; int sr_mindwell; int sr_duration; int sr_flags; } ;
typedef int sr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_scan_req*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int*,struct ieee80211_scan_req*,size_t*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct wlan_iface *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5;
 struct ieee80211_scan_req VAR_6;


 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_5 = sizeof(struct ieee80211_scan_req);
 VAR_6.sr_flags = FUNC_2(VAR_3->scan_flags);
 VAR_6.sr_flags |= VAR_0;
 VAR_6.sr_duration = VAR_3->scan_duration;
 VAR_6.sr_mindwell = VAR_3->scan_mindwell;
 VAR_6.sr_maxdwell = VAR_3->scan_maxdwell;
 VAR_6.sr_nssid = 0;

 if (FUNC_1(VAR_3->wname, VAR_1,
     &VAR_4, &VAR_6, &VAR_5, 1) < 0)
  return (-1);

 VAR_3->scan_status = VAR_2;
 return (0);
}
