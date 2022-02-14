
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_scan_result {int capinfo; int bintval; int noise; int frequency; int rssi; int opchannel; } ;
struct wlan_iface {int dummy; } ;
struct ieee80211req_scan_result {int isr_capinfo; int isr_intval; int isr_noise; int isr_freq; int isr_rssi; int isr_flags; int isr_bssid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct wlan_iface*,struct wlan_scan_result*) ;
 int FUNC_3 (struct wlan_scan_result*) ;
 struct wlan_scan_result* FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct wlan_iface *VAR_0,
    const struct ieee80211req_scan_result *VAR_1, uint8_t *VAR_2)
{
 struct wlan_scan_result *VAR_3;

 if ((VAR_3 = FUNC_4(VAR_2, VAR_1->isr_bssid)) == ((void*)0))
  return (-1);

 VAR_3->opchannel = FUNC_0(VAR_1->isr_flags);
 VAR_3->rssi = VAR_1->isr_rssi;
 VAR_3->frequency = VAR_1->isr_freq;
 VAR_3->noise = VAR_1->isr_noise;
 VAR_3->bintval = VAR_1->isr_intval;
 VAR_3->capinfo = FUNC_1(VAR_1->isr_capinfo);

 if (FUNC_2(VAR_0, VAR_3) < 0) {
  FUNC_3(VAR_3);
  return (-1);
 }

 return (0);
}
