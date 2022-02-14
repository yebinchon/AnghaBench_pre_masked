
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_peer {int vlan; int pmac; } ;
struct wlan_iface {int wname; } ;
struct ieee80211req_sta_vlan {int sv_vlan; int sv_macaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*,struct ieee80211req_sta_vlan*,size_t*,int) ;

int
FUNC_2(struct wlan_iface *VAR_2, struct wlan_peer *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 size_t VAR_6;
 struct ieee80211req_sta_vlan VAR_7;

 FUNC_0(VAR_7.sv_macaddr, VAR_3->pmac, VAR_0);
 VAR_7.sv_vlan = VAR_4;
 VAR_6 = sizeof(struct ieee80211req_sta_vlan);

 if (FUNC_1(VAR_2->wname, VAR_1,
     &VAR_5, &VAR_7, &VAR_6, 1) < 0)
  return (-1);

 VAR_3->vlan = VAR_4;

 return (0);
}
