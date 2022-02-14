
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_req {int an_len; int an_type; } ;
struct an_ltv_genconfig {int an_opmode; int an_rxmode; scalar_t__ an_devtype; scalar_t__ an_scanmode; int an_authtype; scalar_t__ an_psave_mode; int an_radiotype; int an_diversity; int an_home_product; int an_arl_delay; int an_arl_decay; int an_arl_thresh; int an_nodename; int an_rss_thresh; int an_tx_power; int an_dtim_period; int an_ds_channel; int an_atim_duration; int an_beacon_period; int an_fast_listen_decay; int an_listen_decay; int an_fast_listen_interval; int an_listen_interval; int an_sleep_for_dtims; int an_refresh_interval; int an_max_beacon_lost_time; int an_link_loss_delay; int an_offline_scan_duration; int an_offline_scan_interval; int an_specified_ap_timeout; int an_assoc_timeout; int an_auth_timeout; int an_ibss_join_net_timeout; int an_beacon_listen_timeout; int an_probe_response_timeout; int an_probe_energy_timeout; int an_probedelay; int an_ordering; int an_stationary; int an_rx_msdu_lifetime; int an_tx_msdu_lifetime; int an_longretry_limit; int an_shortretry_limit; int an_rates; int an_macaddr; int an_rtsthresh; int an_fragthresh; } ;
typedef int areq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_36)
{
 struct an_ltv_genconfig *VAR_37;
 struct an_req VAR_38;
 unsigned char VAR_39;

 VAR_38.an_len = sizeof(VAR_38);
 VAR_38.an_type = VAR_25;

 FUNC_0(VAR_36, &VAR_38);

 VAR_37 = (struct an_ltv_genconfig *)&VAR_38;

 FUNC_7("Operating mode:\t\t\t\t[ ");
 if ((VAR_37->an_opmode & 0x7) == VAR_16)
  FUNC_7("ad-hoc");
 if ((VAR_37->an_opmode & 0x7) == VAR_17)
  FUNC_7("infrastructure");
 if ((VAR_37->an_opmode & 0x7) == VAR_14)
  FUNC_7("access point");
 if ((VAR_37->an_opmode & 0x7) == VAR_15)
  FUNC_7("access point repeater");
 FUNC_7(" ]");
 FUNC_7("\nReceive mode:\t\t\t\t[ ");
 if ((VAR_37->an_rxmode & 0x7) == VAR_30)
  FUNC_7("broadcast/multicast/unicast");
 if ((VAR_37->an_rxmode & 0x7) == VAR_29)
  FUNC_7("broadcast/unicast");
 if ((VAR_37->an_rxmode & 0x7) == VAR_28)
  FUNC_7("unicast");
 if ((VAR_37->an_rxmode & 0x7) == VAR_27)
  FUNC_7("802.11 monitor, current BSSID");
 if ((VAR_37->an_rxmode & 0x7) == VAR_26)
  FUNC_7("802.11 monitor, any BSSID");
 if ((VAR_37->an_rxmode & 0x7) == VAR_31)
  FUNC_7("LAN monitor, current BSSID");
 FUNC_7(" ]");
 FUNC_7("\nFragment threshold:\t\t\t");
 FUNC_5(&VAR_37->an_fragthresh, 1);
 FUNC_7("\nRTS threshold:\t\t\t\t");
 FUNC_5(&VAR_37->an_rtsthresh, 1);
 FUNC_7("\nMAC address:\t\t\t\t");
 FUNC_2((char *)&VAR_37->an_macaddr, VAR_35);
 FUNC_7("\nSupported rates:\t\t\t");
 FUNC_3(VAR_37->an_rates, 8);
 FUNC_7("\nShort retry limit:\t\t\t");
 FUNC_5(&VAR_37->an_shortretry_limit, 1);
 FUNC_7("\nLong retry limit:\t\t\t");
 FUNC_5(&VAR_37->an_longretry_limit, 1);
 FUNC_7("\nTX MSDU lifetime:\t\t\t");
 FUNC_5(&VAR_37->an_tx_msdu_lifetime, 1);
 FUNC_7("\nRX MSDU lifetime:\t\t\t");
 FUNC_5(&VAR_37->an_rx_msdu_lifetime, 1);
 FUNC_7("\nStationary:\t\t\t\t");
 FUNC_1(VAR_37->an_stationary);
 FUNC_7("\nOrdering:\t\t\t\t");
 FUNC_1(VAR_37->an_ordering);
 FUNC_7("\nDevice type:\t\t\t\t[ ");
 if (VAR_37->an_devtype == VAR_7)
  FUNC_7("PC4500");
 else if (VAR_37->an_devtype == VAR_8)
  FUNC_7("PC4800");
 else
  FUNC_7("unknown (%x)", VAR_37->an_devtype);
 FUNC_7(" ]");
 FUNC_7("\nScanning mode:\t\t\t\t[ ");
 if (VAR_37->an_scanmode == VAR_32)
  FUNC_7("active");
 if (VAR_37->an_scanmode == VAR_34)
  FUNC_7("passive");
 if (VAR_37->an_scanmode == VAR_33)
  FUNC_7("Aironet active");
 FUNC_7(" ]");
 FUNC_7("\nProbe delay:\t\t\t\t");
 FUNC_5(&VAR_37->an_probedelay, 1);
 FUNC_7("\nProbe energy timeout:\t\t\t");
 FUNC_5(&VAR_37->an_probe_energy_timeout, 1);
 FUNC_7("\nProbe response timeout:\t\t\t");
 FUNC_5(&VAR_37->an_probe_response_timeout, 1);
 FUNC_7("\nBeacon listen timeout:\t\t\t");
 FUNC_5(&VAR_37->an_beacon_listen_timeout, 1);
 FUNC_7("\nIBSS join network timeout:\t\t");
 FUNC_5(&VAR_37->an_ibss_join_net_timeout, 1);
 FUNC_7("\nAuthentication timeout:\t\t\t");
 FUNC_5(&VAR_37->an_auth_timeout, 1);
 FUNC_7("\nWEP enabled:\t\t\t\t[ ");
 if (VAR_37->an_authtype & VAR_5)
 {
  if (VAR_37->an_authtype & VAR_1)
    FUNC_7("LEAP");
  else if (VAR_37->an_authtype & VAR_0)
    FUNC_7("mixed cell");
  else
    FUNC_7("full");
 }
 else
  FUNC_7("no");
 FUNC_7(" ]");
 FUNC_7("\nAuthentication type:\t\t\t[ ");
 if ((VAR_37->an_authtype & VAR_2) == VAR_3)
  FUNC_7("none");
 if ((VAR_37->an_authtype & VAR_2) == VAR_4)
  FUNC_7("open");
 if ((VAR_37->an_authtype & VAR_2) == VAR_6)
  FUNC_7("shared key");
 FUNC_7(" ]");
 FUNC_7("\nAssociation timeout:\t\t\t");
 FUNC_5(&VAR_37->an_assoc_timeout, 1);
 FUNC_7("\nSpecified AP association timeout:\t");
 FUNC_5(&VAR_37->an_specified_ap_timeout, 1);
 FUNC_7("\nOffline scan interval:\t\t\t");
 FUNC_5(&VAR_37->an_offline_scan_interval, 1);
 FUNC_7("\nOffline scan duration:\t\t\t");
 FUNC_5(&VAR_37->an_offline_scan_duration, 1);
 FUNC_7("\nLink loss delay:\t\t\t");
 FUNC_5(&VAR_37->an_link_loss_delay, 1);
 FUNC_7("\nMax beacon loss time:\t\t\t");
 FUNC_5(&VAR_37->an_max_beacon_lost_time, 1);
 FUNC_7("\nRefresh interval:\t\t\t");
 FUNC_5(&VAR_37->an_refresh_interval, 1);
 FUNC_7("\nPower save mode:\t\t\t[ ");
 if (VAR_37->an_psave_mode == VAR_19)
  FUNC_7("none");
 if (VAR_37->an_psave_mode == VAR_18)
  FUNC_7("constantly awake mode");
 if (VAR_37->an_psave_mode == VAR_20)
  FUNC_7("PSP");
 if (VAR_37->an_psave_mode == VAR_21)
  FUNC_7("PSP-CAM (fast PSP)");
 FUNC_7(" ]");
 FUNC_7("\nSleep through DTIMs:\t\t\t");
 FUNC_1(VAR_37->an_sleep_for_dtims);
 FUNC_7("\nPower save listen interval:\t\t");
 FUNC_5(&VAR_37->an_listen_interval, 1);
 FUNC_7("\nPower save fast listen interval:\t");
 FUNC_5(&VAR_37->an_fast_listen_interval, 1);
 FUNC_7("\nPower save listen decay:\t\t");
 FUNC_5(&VAR_37->an_listen_decay, 1);
 FUNC_7("\nPower save fast listen decay:\t\t");
 FUNC_5(&VAR_37->an_fast_listen_decay, 1);
 FUNC_7("\nAP/ad-hoc Beacon period:\t\t");
 FUNC_5(&VAR_37->an_beacon_period, 1);
 FUNC_7("\nAP/ad-hoc ATIM duration:\t\t");
 FUNC_5(&VAR_37->an_atim_duration, 1);
 FUNC_7("\nAP/ad-hoc current channel:\t\t");
 FUNC_5(&VAR_37->an_ds_channel, 1);
 FUNC_7("\nAP/ad-hoc DTIM period:\t\t\t");
 FUNC_5(&VAR_37->an_dtim_period, 1);
 FUNC_7("\nRadio type:\t\t\t\t[ ");
 if (VAR_37->an_radiotype & VAR_23)
  FUNC_7("802.11 FH");
 else if (VAR_37->an_radiotype & VAR_22)
  FUNC_7("802.11 DS");
 else if (VAR_37->an_radiotype & VAR_24)
  FUNC_7("LM2000 DS");
 else
  FUNC_7("unknown (%x)", VAR_37->an_radiotype);
 FUNC_7(" ]");
 FUNC_7("\nRX Diversity:\t\t\t\t[ ");
 VAR_39 = VAR_37->an_diversity & 0xFF;
 if (VAR_39 == VAR_12)
  FUNC_7("factory default");
 else if (VAR_39 == VAR_10)
  FUNC_7("antenna 1 only");
 else if (VAR_39 == VAR_11)
  FUNC_7("antenna 2 only");
 else if (VAR_39 == VAR_9)
  FUNC_7("antenna 1 and 2");
 FUNC_7(" ]");
 FUNC_7("\nTX Diversity:\t\t\t\t[ ");
 VAR_39 = (VAR_37->an_diversity >> 8) & 0xFF;
 if (VAR_39 == VAR_12)
  FUNC_7("factory default");
 else if (VAR_39 == VAR_10)
  FUNC_7("antenna 1 only");
 else if (VAR_39 == VAR_11)
  FUNC_7("antenna 2 only");
 else if (VAR_39 == VAR_9)
  FUNC_7("antenna 1 and 2");
 FUNC_7(" ]");
 FUNC_7("\nTransmit power level:\t\t\t");
 FUNC_5(&VAR_37->an_tx_power, 1);
 FUNC_7("\nRSS threshold:\t\t\t\t");
 FUNC_5(&VAR_37->an_rss_thresh, 1);
 FUNC_7("\nNode name:\t\t\t\t");
 FUNC_4((char *)&VAR_37->an_nodename, 16);
 FUNC_7("\nARL threshold:\t\t\t\t");
 FUNC_5(&VAR_37->an_arl_thresh, 1);
 FUNC_7("\nARL decay:\t\t\t\t");
 FUNC_5(&VAR_37->an_arl_decay, 1);
 FUNC_7("\nARL delay:\t\t\t\t");
 FUNC_5(&VAR_37->an_arl_delay, 1);
 FUNC_7("\nConfiguration:\t\t\t\t[ ");
 if (VAR_37->an_home_product & VAR_13)
  FUNC_7("Home Configuration");
 else
  FUNC_7("Enterprise Configuration");
 FUNC_7(" ]");

 FUNC_7("\n");
 FUNC_7("\n");
 FUNC_6(VAR_36);
}
