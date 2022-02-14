
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct wlan_scan_result {scalar_t__* ssid; scalar_t__* bssid; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct wlan_scan_result *VAR_1,
    struct wlan_scan_result *VAR_2)
{
 uint32_t VAR_3;

 if (FUNC_0(VAR_1->ssid) < FUNC_0(VAR_2->ssid))
  return (-1);
 if (FUNC_0(VAR_1->ssid) > FUNC_0(VAR_2->ssid))
  return (1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->ssid) && VAR_3 < FUNC_0(VAR_2->ssid); VAR_3++) {
  if (VAR_1->ssid[VAR_3] < VAR_2->ssid[VAR_3])
   return (-1);
  if (VAR_1->ssid[VAR_3] > VAR_2->ssid[VAR_3])
   return (1);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->bssid[VAR_3] < VAR_2->bssid[VAR_3])
   return (-1);
  if (VAR_1->bssid[VAR_3] > VAR_2->bssid[VAR_3])
   return (1);
 }

 return (0);
}
