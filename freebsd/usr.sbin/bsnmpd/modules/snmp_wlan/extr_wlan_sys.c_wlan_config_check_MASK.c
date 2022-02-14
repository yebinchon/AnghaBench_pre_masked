
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int drivercaps; int beacon_interval; int dtim_period; int htcaps; int tdma_binterval; int tdma_slot_length; int tdma_slot_count; int tdma_slot; int smps_mode; void* short_gi; void* rifs; void* amsdu; void* ampdu; void* dot11n_pure; int mode; void* power_save; void* dynamic_wds; int frag_threshold; int tx_power; void* dturbo; void* fast_frames; void* dyn_frequency; void* packet_burst; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_0(struct wlan_iface *VAR_23, int VAR_24)
{
 switch (VAR_24) {
 case 144:
  if ((VAR_23->drivercaps & (0x1 << VAR_4)) == 0) {
   VAR_23->packet_burst = VAR_1;
   return (-1);
  }
  break;
 case 143:
  if ((VAR_23->drivercaps & (0x1 << VAR_5)) == 0) {
   VAR_23->dyn_frequency = VAR_1;
   return (-1);
  }
  break;
 case 140:
  if ((VAR_23->drivercaps & (0x1 << VAR_2))
      == 0) {
   VAR_23->fast_frames = VAR_1;
   return (-1);
  }
  break;
 case 129:
  if ((VAR_23->drivercaps & (0x1 << VAR_3)) == 0) {
   VAR_23->dturbo = VAR_1;
   return (-1);
  }
  break;
 case 128:
  if ((VAR_23->drivercaps & (0x1 << VAR_9)) == 0) {
   VAR_23->tx_power = 0;
   return (-1);
  }
  break;
 case 139:
  if ((VAR_23->drivercaps & (0x1 << VAR_8)) == 0) {
   VAR_23->frag_threshold = VAR_0;
   return (-1);
  }
  break;
 case 141:
  if ((VAR_23->drivercaps & (0x1 << VAR_10)) == 0) {
   VAR_23->dynamic_wds = VAR_1;
   return (-1);
  }
  break;
 case 138:
  if ((VAR_23->drivercaps & (0x1 << VAR_6)) == 0) {
   VAR_23->power_save = VAR_1;
   return (-1);
  }
  break;
 case 145:
  if (VAR_23->mode != VAR_19 &&
      VAR_23->mode != VAR_21 &&
      VAR_23->mode != VAR_20) {
   VAR_23->beacon_interval = 100;
   return (-1);
  }
  break;
 case 142:
  if (VAR_23->mode != VAR_19 &&
      VAR_23->mode != VAR_21 &&
      VAR_23->mode != VAR_20) {
   VAR_23->dtim_period = 1;
   return (-1);
  }
  break;
 case 137:
  if ((VAR_23->htcaps & (0x1 << VAR_13)) == 0) {
   VAR_23->dot11n_pure = VAR_1;
   return (-1);
  }
  break;
 case 147:
  if ((VAR_23->htcaps & (0x1 << VAR_11)) == 0) {
   VAR_23->ampdu = VAR_18;
   return (-1);
  }
  break;
 case 146:
  if ((VAR_23->htcaps & (0x1 << VAR_12)) == 0) {
   VAR_23->amsdu = VAR_18;
   return (-1);
  }
  break;
 case 136:
  if ((VAR_23->htcaps & (0x1 << VAR_14)) == 0) {
   VAR_23->rifs = VAR_1;
   return (-1);
  }
  break;
 case 135:
  if ((VAR_23->htcaps & (0x1 << VAR_16 |
      0x1 << VAR_17)) == 0) {
   VAR_23->short_gi = VAR_1;
   return (-1);
  }
  break;
 case 134:
  if ((VAR_23->htcaps & (0x1 << VAR_15)) == 0) {
   VAR_23->smps_mode = VAR_22;
   return (-1);
  }
  break;
 case 132:
  if ((VAR_23->drivercaps & (0x1 << VAR_7)) == 0) {
   VAR_23->tdma_slot = 0;
   return (-1);
  }
  break;
 case 131:
  if ((VAR_23->drivercaps & (0x1 << VAR_7)) == 0) {
   VAR_23->tdma_slot_count = 0;
   return (-1);
  }
  break;
 case 130:
  if ((VAR_23->drivercaps & (0x1 << VAR_7)) == 0) {
   VAR_23->tdma_slot_length = 0;
   return (-1);
  }
  break;
 case 133:
  if ((VAR_23->drivercaps & (0x1 << VAR_7)) == 0) {
   VAR_23->tdma_binterval = 0;
   return (-1);
  }
  break;
 default:
  break;
 }

 return (0);
}
