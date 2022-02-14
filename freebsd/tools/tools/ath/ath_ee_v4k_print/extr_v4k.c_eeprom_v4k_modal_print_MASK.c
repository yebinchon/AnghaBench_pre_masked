
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int antCtrlCommon; int switchSettling; int adcDesiredSize; int* antCtrlChain; int* antennaGainCh; int* txRxAttenCh; int* rxTxMarginCh; int* noiseFloorThreshCh; int* xlnaGainCh; int* iqCalICh; int* iqCalQCh; int* bswAtten; int* bswMargin; int* xatten2Db; int* xatten2Margin; int txEndToXpaOff; int txEndToRxOn; int txFrameToXpaOn; int thresh62; int xpdGain; int xpd; int pdGainOverlap; int xpaBiasLvl; int txFrameToDataStart; int txFrameToPaOn; int ht40PowerIncForPdadc; int swSettleHt40; int ob_0; int ob_1; int ob_2; int ob_3; int db1_0; int db1_1; int db1_2; int db1_3; int db1_4; int db2_0; int db2_1; int db2_2; int db2_3; int db2_4; int antdiv_ctl1; int antdiv_ctl2; int version; int tx_diversity; int flc_pwr_thresh; int bb_scale_smrt_antenna; int* futureModal; TYPE_1__* spurChans; scalar_t__ pgaDesiredSize; } ;
struct TYPE_6__ {TYPE_3__ modalHeader; } ;
struct TYPE_8__ {TYPE_2__ ee_base; } ;
struct TYPE_5__ {int spurChan; scalar_t__ spurRangeHigh; scalar_t__ spurRangeLow; } ;
typedef TYPE_3__ MODAL_EEP4K_HEADER ;
typedef TYPE_4__ HAL_EEPROM_v4k ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;

void
FUNC_1(uint16_t *VAR_1)
{
 HAL_EEPROM_v4k *VAR_2 = (HAL_EEPROM_v4k *) VAR_1;
 MODAL_EEP4K_HEADER *VAR_3 = &VAR_2->ee_base.modalHeader;
 int VAR_4;

 FUNC_0("| antCtrlCommon: 0x%.8x |\n", VAR_3->antCtrlCommon);
 FUNC_0("| switchSettling: 0x%.2x |\n", VAR_3->switchSettling);
 FUNC_0("| adcDesiredSize: %d |\n| pgaDesiredSize: %.2f dBm |\n",
     VAR_3->adcDesiredSize, (float) VAR_3->pgaDesiredSize / 2.0);

 FUNC_0("| antCtrlChain:        0:0x%.4x |\n", VAR_3->antCtrlChain[0]);
 FUNC_0("| antennaGainCh:       0:0x%.2x |\n", VAR_3->antennaGainCh[0]);
 FUNC_0("| txRxAttenCh:         0:0x%.2x |\n", VAR_3->txRxAttenCh[0]);
 FUNC_0("| rxTxMarginCh:        0:0x%.2x |\n", VAR_3->rxTxMarginCh[0]);
  FUNC_0("| noiseFloorThresCh:   0:0x%.2x |\n", VAR_3->noiseFloorThreshCh[0]);
 FUNC_0("| xlnaGainCh:          0:0x%.2x |\n", VAR_3->xlnaGainCh[0]);
 FUNC_0("| iqCalICh:            0:0x%.2x |\n", VAR_3->iqCalICh[0]);
 FUNC_0("| iqCalQCh:            0:0x%.2x |\n", VAR_3->iqCalQCh[0]);
 FUNC_0("| bswAtten:            0:0x%.2x |\n", VAR_3->bswAtten[0]);
 FUNC_0("| bswMargin:           0:0x%.2x |\n", VAR_3->bswMargin[0]);
 FUNC_0("| xatten2Db:           0:0x%.2x |\n", VAR_3->xatten2Db[0]);
 FUNC_0("| xatten2Margin:       0:0x%.2x |\n", VAR_3->xatten2Margin[0]);

 FUNC_0("| txEndToXpaOff: 0x%.2x | txEndToRxOn: 0x%.2x | txFrameToXpaOn: 0x%.2x |\n",
     VAR_3->txEndToXpaOff, VAR_3->txEndToRxOn, VAR_3->txFrameToXpaOn);
 FUNC_0("| thres62: 0x%.2x\n", VAR_3->thresh62);
 FUNC_0("| xpdGain: 0x%.2x | xpd: 0x%.2x |\n", VAR_3->xpdGain, VAR_3->xpd);

 FUNC_0("| pdGainOverlap: 0x%.2x xpaBiasLvl: 0x%.2x |\n", VAR_3->pdGainOverlap, VAR_3->xpaBiasLvl);
 FUNC_0("| txFrameToDataStart: 0x%.2x | txFrameToPaOn: 0x%.2x |\n", VAR_3->txFrameToDataStart, VAR_3->txFrameToPaOn);
 FUNC_0("| ht40PowerIncForPdadc: 0x%.2x |\n", VAR_3->ht40PowerIncForPdadc);
 FUNC_0("| swSettleHt40: 0x%.2x |\n", VAR_3->swSettleHt40);

 FUNC_0("| ob_0: 0x%.2x | ob_1: 0x%.2x | ob_2: 0x%.2x | ob_3: 0x%.2x |\n",
     VAR_3->ob_0, VAR_3->ob_1, VAR_3->ob_2, VAR_3->ob_3);
 FUNC_0("| db_1_0: 0x%.2x | db_1_1: 0x%.2x | db_1_2: 0x%.2x | db_1_3: 0x%.2x db_1_4: 0x%.2x|\n",
     VAR_3->db1_0, VAR_3->db1_1, VAR_3->db1_2, VAR_3->db1_3, VAR_3->db1_4);
 FUNC_0("| db_1_0: 0x%.2x | db_1_1: 0x%.2x | db_1_2: 0x%.2x | db_1_3: 0x%.2x db_1_4: 0x%.2x|\n",
     VAR_3->db2_0, VAR_3->db2_1, VAR_3->db2_2, VAR_3->db2_3, VAR_3->db2_4);

 FUNC_0("| antdiv_ctl1: 0x%.2x antdiv_ctl2: 0x%.2x |\n", VAR_3->antdiv_ctl1, VAR_3->antdiv_ctl2);

 FUNC_0("| Modal Version: %.2x |\n", VAR_3->version);

 FUNC_0("| tx_diversity: 0x%.2x |\n", VAR_3->tx_diversity);
 FUNC_0("| flc_pwr_thresh: 0x%.2x |\n", VAR_3->flc_pwr_thresh);
 FUNC_0("| bb_scale_smrt_antenna: 0x%.2x |\n", VAR_3->bb_scale_smrt_antenna);
 FUNC_0("| futureModal: 0x%.2x |\n", VAR_3->futureModal[0]);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0("| Spur %d: spurChan: 0x%.4x spurRangeLow: 0x%.2x spurRangeHigh: 0x%.2x |\n",
      VAR_4, VAR_3->spurChans[VAR_4].spurChan,
      (int) VAR_3->spurChans[VAR_4].spurRangeLow,
      (int) VAR_3->spurChans[VAR_4].spurRangeHigh);
 }
}
