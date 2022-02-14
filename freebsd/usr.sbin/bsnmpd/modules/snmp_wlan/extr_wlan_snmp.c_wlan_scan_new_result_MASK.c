
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct wlan_scan_result {int bssid; int ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (struct wlan_scan_result*,int ,int) ;
 int FUNC_3 (int ,char const*,scalar_t__) ;

struct wlan_scan_result *
FUNC_4(const uint8_t *VAR_2, const uint8_t *VAR_3)
{
 struct wlan_scan_result *VAR_4;

 VAR_4 = (struct wlan_scan_result *)FUNC_0(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 if (VAR_2[0] != '\0')
  FUNC_3(VAR_4->ssid, VAR_2, VAR_1 + 1);
 FUNC_1(VAR_4->bssid, VAR_3, VAR_0);

 return (VAR_4);
}
