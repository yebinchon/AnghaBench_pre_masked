
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int tx_power; int frag_threshold; int rts_threshold; int bg_scan_idle; int bg_scan_interval; int beacons_missed; int beacon_interval; int dtim_period; int ampdu_density; int ampdu_limit; int amsdu_limit; int tdma_slot; int tdma_slot_count; int tdma_slot_length; int tdma_binterval; int smps_mode; void* short_gi; void* rifs; int ht_prot_mode; void* ht_compatible; void* ht_enabled; void* amsdu; void* ampdu; void* dot11n_pure; void* dot11g_pure; int do11g_protect; void* inact_process; void* hide_ssid; void* ap_bridge; void* power_save; void* dynamic_wds; void* dot11h; void* dot11d; int roam_mode; void* bg_scan; void* priv_subscribe; void* dturbo; void* fast_frames; void* dyn_frequency; void* packet_burst; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_0(struct wlan_iface *VAR_17, int VAR_18, int VAR_19)
{
 switch (VAR_18) {
 case 162:
  if (VAR_19 == 0)
   VAR_17->packet_burst = VAR_0;
  else
   VAR_17->packet_burst = VAR_1;
  break;
 case 161:
  if (VAR_19 == 0)
   VAR_17->dyn_frequency = VAR_0;
  else
   VAR_17->dyn_frequency = VAR_1;
  break;
 case 156:
  if (VAR_19 == 0)
   VAR_17->fast_frames = VAR_0;
  else
   VAR_17->fast_frames = VAR_1;
  break;
 case 136:
  if (VAR_19 == 0)
   VAR_17->dturbo = VAR_0;
  else
   VAR_17->dturbo = VAR_1;
  break;
 case 135:
  VAR_17->tx_power = VAR_19 / 2;
  break;
 case 155:
  VAR_17->frag_threshold = VAR_19;
  break;
 case 143:
  VAR_17->rts_threshold = VAR_19;
  break;
 case 134:
  if (VAR_19 == 0)
   VAR_17->priv_subscribe = VAR_0;
  else
   VAR_17->priv_subscribe = VAR_1;
  break;
 case 166:
  if (VAR_19 == 0)
   VAR_17->bg_scan = VAR_0;
  else
   VAR_17->bg_scan = VAR_1;
  break;
 case 165:
  VAR_17->bg_scan_idle = VAR_19;
  break;
 case 164:
  VAR_17->bg_scan_interval = VAR_19;
  break;
 case 163:
  VAR_17->beacons_missed = VAR_19;
  break;
 case 144:
  switch (VAR_19) {
  case 129:
   VAR_17->roam_mode = VAR_15;
   break;
  case 128:
   VAR_17->roam_mode = VAR_16;
   break;
  case 130:

  default:
   VAR_17->roam_mode = VAR_14;
   break;
  }
  break;
 case 160:
  if (VAR_19 == 0)
   VAR_17->dot11d = VAR_0;
  else
   VAR_17->dot11d = VAR_1;
  break;
 case 159:
  if (VAR_19 == 0)
   VAR_17->dot11h = VAR_0;
  else
   VAR_17->dot11h = VAR_1;
  break;
 case 157:
  if (VAR_19 == 0)
   VAR_17->dynamic_wds = VAR_0;
  else
   VAR_17->dynamic_wds = VAR_1;
  break;
 case 149:
  if (VAR_19 == 0)
   VAR_17->power_save = VAR_0;
  else
   VAR_17->power_save = VAR_1;
  break;
 case 168:
  if (VAR_19 == 0)
   VAR_17->ap_bridge = VAR_0;
  else
   VAR_17->ap_bridge = VAR_1;
  break;
 case 167:
  VAR_17->beacon_interval = VAR_19;
  break;
 case 158:
  VAR_17->dtim_period = VAR_19;
  break;
 case 154:
  if (VAR_19 == 0)
   VAR_17->hide_ssid = VAR_0;
  else
   VAR_17->hide_ssid = VAR_1;
  break;
 case 150:
  if (VAR_19 == 0)
   VAR_17->inact_process = VAR_0;
  else
   VAR_17->inact_process = VAR_1;
  break;
 case 148:
  switch (VAR_19) {
  case 133:
   VAR_17->do11g_protect = VAR_6;
   break;
  case 131:
   VAR_17->do11g_protect = VAR_8;
   break;
  case 132:

  default:
   VAR_17->do11g_protect = VAR_7;
   break;
  }
  break;
 case 147:
  if (VAR_19 == 0)
   VAR_17->dot11g_pure = VAR_0;
  else
   VAR_17->dot11g_pure = VAR_1;
  break;
 case 146:
  if (VAR_19 == 0)
   VAR_17->dot11n_pure = VAR_0;
  else
   VAR_17->dot11n_pure = VAR_1;
  break;
 case 173:
  switch (VAR_19) {
  case 0:
   VAR_17->ampdu = VAR_2;
   break;
  case 1:
   VAR_17->ampdu = VAR_5;
   break;
  case 2:
   VAR_17->ampdu = VAR_3;
   break;
  case 3:

  default:
   VAR_17->ampdu = VAR_4;
   break;
  }
  break;
 case 172:
  switch (VAR_19) {
  case 184:
   VAR_17->ampdu_density = 25;
   break;
  case 183:
   VAR_17->ampdu_density = 50;
   break;
  case 182:
   VAR_17->ampdu_density = 100;
   break;
  case 180:
   VAR_17->ampdu_density = 200;
   break;
  case 179:
   VAR_17->ampdu_density = 400;
   break;
  case 178:
   VAR_17->ampdu_density = 800;
   break;
  case 181:
   VAR_17->ampdu_density = 1600;
   break;
  case 177:
  default:
   VAR_17->ampdu_density = 0;
   break;
  }
  break;
 case 171:
  switch (VAR_19) {
  case 185:
   VAR_17->ampdu_limit = 8192;
   break;
  case 188:
   VAR_17->ampdu_limit = 16384;
   break;
  case 187:
   VAR_17->ampdu_limit = 32768;
   break;
  case 186:
  default:
   VAR_17->ampdu_limit = 65536;
   break;
  }
  break;
 case 170:
  switch (VAR_19) {
  case 0:
   VAR_17->amsdu = VAR_2;
   break;
  case 1:
   VAR_17->amsdu = VAR_5;
   break;
  case 3:
   VAR_17->amsdu = VAR_4;
   break;
  case 2:
  default:

   VAR_17->amsdu = VAR_3;
   break;
  }
  break;
 case 169:
  VAR_17->amsdu_limit = VAR_19;
  break;
 case 152:
  if (VAR_19 == 0)
   VAR_17->ht_enabled = VAR_0;
  else
   VAR_17->ht_enabled = VAR_1;
  break;
 case 153:
  if (VAR_19 == 0)
   VAR_17->ht_compatible = VAR_0;
  else
   VAR_17->ht_compatible = VAR_1;
  break;
 case 151:
  if (VAR_19 == 131)
   VAR_17->ht_prot_mode = VAR_10;
  else
   VAR_17->ht_prot_mode = VAR_9;
  break;
 case 145:
  if (VAR_19 == 0)
   VAR_17->rifs = VAR_0;
  else
   VAR_17->rifs = VAR_1;
  break;
 case 142:
  if (VAR_19 == 0)
   VAR_17->short_gi = VAR_0;
  else
   VAR_17->short_gi = VAR_1;
  break;
 case 141:
  switch (VAR_19) {
  case 176:
   VAR_17->smps_mode = VAR_12;
   break;
  case 175:
   VAR_17->smps_mode = VAR_13;
   break;
  case 174:

  default:
   VAR_17->smps_mode = VAR_11;
   break;
  }
  break;
 case 139:
  VAR_17->tdma_slot = VAR_19;
  break;
 case 138:
  VAR_17->tdma_slot_count = VAR_19;
  break;
 case 137:
  VAR_17->tdma_slot_length = VAR_19;
  break;
 case 140:
  VAR_17->tdma_binterval = VAR_19;
  break;
 default:
  break;
 }
}
