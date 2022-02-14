
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int antCtrlCommon; int switchSettling; int adcDesiredSize; int* antCtrlChain; int* antennaGainCh; int* txRxAttenCh; int* rxTxMarginCh; int* noiseFloorThreshCh; int* iqCalICh; int* iqCalQCh; int* bswAtten; int* bswMargin; int txEndToXpaOff; int txEndToRxOn; int txFrameToXpaOn; int thresh62; int xpdGain; int xpd; int pdGainOverlap; int xpaBiasLvl; int txFrameToDataStart; int txFrameToPaOn; int ht40PowerIncForPdadc; int swSettleHt40; int version; int db1; int db2; int ob_cck; int ob_psk; int ob_qam; int ob_pal_off; int* futureModal; TYPE_2__* spurChans; } ;
struct TYPE_5__ {TYPE_3__ modalHeader; } ;
struct TYPE_8__ {TYPE_1__ ee_base; } ;
struct TYPE_6__ {int spurChan; scalar_t__ spurRangeHigh; scalar_t__ spurRangeLow; } ;
typedef TYPE_3__ MODAL_EEP_9287_HEADER ;
typedef TYPE_4__ HAL_EEPROM_9287 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(uint16_t *VAR_2)
{
 HAL_EEPROM_9287 *VAR_3 = (HAL_EEPROM_9287 *) VAR_2;
 MODAL_EEP_9287_HEADER *VAR_4 = &VAR_3->ee_base.modalHeader;
 int VAR_5;

 FUNC_0("| antCtrlCommon: 0x%.8x |\n", VAR_4->antCtrlCommon);
 FUNC_0("| switchSettling: 0x%.2x |\n", VAR_4->switchSettling);
 FUNC_0("| adcDesiredSize: %d |\n", VAR_4->adcDesiredSize);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0("| Chain %d:\n", VAR_5);
  FUNC_0("| antCtrlChain:        0:0x%.4x |\n", VAR_4->antCtrlChain[VAR_5]);
  FUNC_0("| antennaGainCh:       0:0x%.2x |\n", VAR_4->antennaGainCh[VAR_5]);
  FUNC_0("| txRxAttenCh:         0:0x%.2x |\n", VAR_4->txRxAttenCh[VAR_5]);
  FUNC_0("| rxTxMarginCh:        0:0x%.2x |\n", VAR_4->rxTxMarginCh[VAR_5]);
  FUNC_0("| noiseFloorThresCh:   0:0x%.2x |\n", VAR_4->noiseFloorThreshCh[VAR_5]);
  FUNC_0("| iqCalICh:            0:0x%.2x |\n", VAR_4->iqCalICh[VAR_5]);
  FUNC_0("| iqCalQCh:            0:0x%.2x |\n", VAR_4->iqCalQCh[VAR_5]);
  FUNC_0("| bswAtten:            0:0x%.2x |\n", VAR_4->bswAtten[VAR_5]);
  FUNC_0("| bswMargin:           0:0x%.2x |\n", VAR_4->bswMargin[VAR_5]);
  FUNC_0("\n");
 }

 FUNC_0("| txEndToXpaOff: 0x%.2x | txEndToRxOn: 0x%.2x | txFrameToXpaOn: 0x%.2x |\n",
     VAR_4->txEndToXpaOff, VAR_4->txEndToRxOn, VAR_4->txFrameToXpaOn);
 FUNC_0("| thres62: 0x%.2x\n", VAR_4->thresh62);
 FUNC_0("| xpdGain: 0x%.2x | xpd: 0x%.2x |\n", VAR_4->xpdGain, VAR_4->xpd);

 FUNC_0("| pdGainOverlap: 0x%.2x xpaBiasLvl: 0x%.2x |\n", VAR_4->pdGainOverlap, VAR_4->xpaBiasLvl);
 FUNC_0("| txFrameToDataStart: 0x%.2x | txFrameToPaOn: 0x%.2x |\n", VAR_4->txFrameToDataStart, VAR_4->txFrameToPaOn);
 FUNC_0("| ht40PowerIncForPdadc: 0x%.2x |\n", VAR_4->ht40PowerIncForPdadc);
 FUNC_0("| swSettleHt40: 0x%.2x |\n", VAR_4->swSettleHt40);

 FUNC_0("| Modal Version: %.2x |\n", VAR_4->version);
 FUNC_0("| db1 = %d | db2 = %d |\n", VAR_4->db1, VAR_4->db2);
 FUNC_0("| ob_cck = %d | ob_psk = %d | ob_qam = %d | ob_pal_off = %d |\n",
     VAR_4->ob_cck, VAR_4->ob_psk, VAR_4->ob_qam, VAR_4->ob_pal_off);

 FUNC_0("| futureModal: ");
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4->futureModal) / sizeof(uint16_t); VAR_5++) {
     FUNC_0("0x%.2x ", VAR_4->futureModal[VAR_5]);
 }
 FUNC_0("\n");


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0("| Spur %d: spurChan: 0x%.4x spurRangeLow: 0x%.2x spurRangeHigh: 0x%.2x |\n",
      VAR_5, VAR_4->spurChans[VAR_5].spurChan,
      (int) VAR_4->spurChans[VAR_5].spurRangeLow,
      (int) VAR_4->spurChans[VAR_5].spurRangeHigh);
 }
}
