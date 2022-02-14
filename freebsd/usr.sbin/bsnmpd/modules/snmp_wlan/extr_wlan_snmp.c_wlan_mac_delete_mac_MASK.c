
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_mac_mac {scalar_t__ mac_status; } ;
struct wlan_iface {int mac_maclist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct wlan_mac_mac*,int ,int ) ;
 int FUNC_1 (struct wlan_mac_mac*) ;
 scalar_t__ FUNC_2 (struct wlan_iface*,struct wlan_mac_mac*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_3, struct wlan_mac_mac *VAR_4)
{
 if (VAR_4->mac_status == VAR_0 &&
     FUNC_2(VAR_3, VAR_4) < 0)
  return (-1);

 FUNC_0(&VAR_3->mac_maclist, VAR_4, VAR_1, VAR_2);
 FUNC_1(VAR_4);

 return (0);
}
