
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_mac_mac {int mac_status; } ;
struct wlan_iface {int dummy; } ;
struct ieee80211req_maclist {int ml_macaddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wlan_iface*,struct wlan_mac_mac*) ;
 int FUNC_1 (struct wlan_mac_mac*) ;
 struct wlan_mac_mac* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_1,
    const struct ieee80211req_maclist *VAR_2)
{
 struct wlan_mac_mac *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_2->ml_macaddr)) == ((void*)0))
  return (-1);

 VAR_3->mac_status = VAR_0;
 if (FUNC_0(VAR_1, VAR_3) < 0) {
  FUNC_1(VAR_3);
  return (-1);
 }

 return (0);
}
