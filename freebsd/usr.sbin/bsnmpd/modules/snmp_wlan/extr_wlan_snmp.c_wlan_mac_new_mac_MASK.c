
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_mac_mac {int mac_status; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct wlan_mac_mac*,int ,int) ;

struct wlan_mac_mac *
FUNC_3(const uint8_t *VAR_2)
{
 struct wlan_mac_mac *VAR_3;

 if ((VAR_3 = (struct wlan_mac_mac *)FUNC_0(sizeof(*VAR_3))) == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_1(VAR_3->mac, VAR_2, VAR_0);
 VAR_3->mac_status = VAR_1;

 return (VAR_3);
}
