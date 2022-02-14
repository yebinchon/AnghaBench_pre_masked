
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_3__ {int ant_ctrl_common; int ant_ctrl_common2; int* ant_ctrl_chain; int* xatten1_db; int* xatten1_margin; int* noise_floor_thresh_ch; int* spur_chans; int temp_slope; int voltSlope; int quick_drop; int xpa_bias_lvl; int tx_frame_to_data_start; int tx_frame_to_pa_on; int tx_end_to_xpa_off; int txEndToRxOn; int tx_frame_to_xpa_on; int txClip; int antenna_gain; int switchSettling; int adcDesiredSize; int thresh62; int paprd_rate_mask_ht20; int paprd_rate_mask_ht40; int switchcomspdt; int xLNA_bias_strength; int rf_gain_cap; int tx_gain_cap; } ;
typedef TYPE_1__ OSPREY_MODAL_EEP_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const OSPREY_MODAL_EEP_HEADER *VAR_4)
{
 int VAR_5;

 FUNC_0("| AntCtrl: 0x%08x AntCtrl2: 0x%08x |\n",
     VAR_4->ant_ctrl_common,
     VAR_4->ant_ctrl_common2);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0("| Ch %d: AntCtrl: 0x%08x Atten1: %d, atten1_margin: %d, NfThresh: %d |\n",
      VAR_5,
      VAR_4->ant_ctrl_chain[VAR_5],
      VAR_4->xatten1_db[VAR_5],
      VAR_4->xatten1_margin[VAR_5],
      VAR_4->noise_floor_thresh_ch[VAR_5]);
 }

 FUNC_0("| Spur: ");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0("(%d: %d) ", VAR_5, VAR_4->spur_chans[VAR_5]);
 }
 FUNC_0("|\n");

 FUNC_0("| TempSlope: %d, VoltSlope: %d, QuickDrop: %d, XpaBiasLvl %d |\n",
     VAR_4->temp_slope,
     VAR_4->voltSlope,
     VAR_4->quick_drop,
     VAR_4->xpa_bias_lvl);

 FUNC_0("| txFrameToDataStart: %d, TxFrameToPaOn: %d, TxEndToXpaOff: %d, TxEndToRxOn: %d, TxFrameToXpaOn: %d |\n",
     VAR_4->tx_frame_to_data_start,
     VAR_4->tx_frame_to_pa_on,
     VAR_4->tx_end_to_xpa_off,
     VAR_4->txEndToRxOn,
     VAR_4->tx_frame_to_xpa_on);

 FUNC_0("| txClip: %d, AntGain: %d, SwitchSettling: %d, adcDesiredSize: %d |\n",
     VAR_4->txClip,
     VAR_4->antenna_gain,
     VAR_4->switchSettling,
     VAR_4->adcDesiredSize);

 FUNC_0("| Thresh62: %d, PaprdMaskHt20: 0x%08x, PaPrdMaskHt40: 0x%08x |\n",
     VAR_4->thresh62,
     VAR_4->paprd_rate_mask_ht20,
     VAR_4->paprd_rate_mask_ht40);

 FUNC_0("| SwitchComSpdt: %02x, XlnaBiasStrength: %d, RfGainCap: %d, TxGainCap: %x\n",
     VAR_4->switchcomspdt,
     VAR_4->xLNA_bias_strength,
     VAR_4->rf_gain_cap,
     VAR_4->tx_gain_cap);
}
