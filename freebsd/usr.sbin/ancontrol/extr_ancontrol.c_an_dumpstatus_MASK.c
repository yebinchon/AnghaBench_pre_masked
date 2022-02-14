
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct an_req {int an_len; int an_type; } ;
struct an_ltv_status {int an_opmode; size_t an_normalized_strength; int an_avg_noise_prev_min_pc; size_t an_cur_signal_quality; int an_max_noise_prev_min_pc; int an_current_tx_rate; int an_ssidlen; int an_accumulated_arl; int an_our_generated_load; int an_ap_total_load; int an_hops_to_backbone; int an_cur_channel; int an_channel_set; int an_hop_period; int an_atim_duration; int an_dtim_period; int an_beacon_period; int an_cur_bssid; int an_ap_name; int an_ssid; int an_errcode; int an_macaddr; } ;
struct an_ltv_rssi_map {int an_len; TYPE_1__* an_entries; int an_type; } ;
typedef int areq ;
typedef int an_rssimap ;
struct TYPE_2__ {int an_rss_pct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_10)
{
 struct an_ltv_status *VAR_11;
 struct an_req VAR_12;
 struct an_ltv_rssi_map VAR_13;
 int VAR_14 = 0;





 VAR_13.an_len = sizeof(VAR_13);
 VAR_13.an_type = VAR_0;
 VAR_14 = FUNC_0(VAR_10, (struct an_req*)&VAR_13);

 if (VAR_14)
  FUNC_4("RSSI table:\t\t[ present ]\n");
 else
  FUNC_4("RSSI table:\t\t[ not available ]\n");

 VAR_12.an_len = sizeof(VAR_12);
 VAR_12.an_type = VAR_1;

 FUNC_0(VAR_10, &VAR_12);

 VAR_11 = (struct an_ltv_status *)&VAR_12;

 FUNC_4("MAC address:\t\t");
 FUNC_1((char *)&VAR_11->an_macaddr, VAR_9);
 FUNC_4("\nOperating mode:\t\t[ ");
 if (VAR_11->an_opmode & VAR_3)
  FUNC_4("configured ");
 if (VAR_11->an_opmode & VAR_7)
  FUNC_4("MAC ON ");
 if (VAR_11->an_opmode & VAR_8)
  FUNC_4("RX ON ");
 if (VAR_11->an_opmode & VAR_5)
  FUNC_4("synced ");
 if (VAR_11->an_opmode & VAR_2)
  FUNC_4("associated ");
 if (VAR_11->an_opmode & VAR_6)
  FUNC_4("LEAP ");
 if (VAR_11->an_opmode & VAR_4)
  FUNC_4("error ");
 FUNC_4("]\n");
 FUNC_4("Error code:\t\t");
 FUNC_1((char *)&VAR_11->an_errcode, 1);
 if (VAR_14)
  FUNC_4("\nSignal strength:\t[ %u%% ]",
      VAR_13.an_entries[
   VAR_11->an_normalized_strength].an_rss_pct);
 else
  FUNC_4("\nSignal strength:\t[ %u%% ]",
      VAR_11->an_normalized_strength);
 FUNC_4("\nAverage Noise:\t\t[ %u%% ]", VAR_11->an_avg_noise_prev_min_pc);
 if (VAR_14)
  FUNC_4("\nSignal quality:\t\t[ %u%% ]",
      VAR_13.an_entries[
   VAR_11->an_cur_signal_quality].an_rss_pct);
 else
  FUNC_4("\nSignal quality:\t\t[ %u ]",
      VAR_11->an_cur_signal_quality);
 FUNC_4("\nMax Noise:\t\t[ %u%% ]", VAR_11->an_max_noise_prev_min_pc);
 FUNC_4("\nCurrent TX rate:\t[ %u%s ]", VAR_11->an_current_tx_rate / 2,
     (VAR_11->an_current_tx_rate % 2) ? ".5" : "");
 FUNC_4("\nCurrent SSID:\t\t");
 FUNC_2((char *)&VAR_11->an_ssid, VAR_11->an_ssidlen);
 FUNC_4("\nCurrent AP name:\t");
 FUNC_2((char *)&VAR_11->an_ap_name, 16);
 FUNC_4("\nCurrent BSSID:\t\t");
 FUNC_1((char *)&VAR_11->an_cur_bssid, VAR_9);
 FUNC_4("\nBeacon period:\t\t");
 FUNC_3(&VAR_11->an_beacon_period, 1);
 FUNC_4("\nDTIM period:\t\t");
 FUNC_3(&VAR_11->an_dtim_period, 1);
 FUNC_4("\nATIM duration:\t\t");
 FUNC_3(&VAR_11->an_atim_duration, 1);
 FUNC_4("\nHOP period:\t\t");
 FUNC_3(&VAR_11->an_hop_period, 1);
 FUNC_4("\nChannel set:\t\t");
 FUNC_3(&VAR_11->an_channel_set, 1);
 FUNC_4("\nCurrent channel:\t");
 FUNC_3(&VAR_11->an_cur_channel, 1);
 FUNC_4("\nHops to backbone:\t");
 FUNC_3(&VAR_11->an_hops_to_backbone, 1);
 FUNC_4("\nTotal AP load:\t\t");
 FUNC_3(&VAR_11->an_ap_total_load, 1);
 FUNC_4("\nOur generated load:\t");
 FUNC_3(&VAR_11->an_our_generated_load, 1);
 FUNC_4("\nAccumulated ARL:\t");
 FUNC_3(&VAR_11->an_accumulated_arl, 1);
 FUNC_4("\n");
 return;
}
