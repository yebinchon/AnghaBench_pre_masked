
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {TYPE_3__* modalHeader; } ;
struct TYPE_8__ {TYPE_2__ ee_base; } ;
struct TYPE_7__ {int antCtrlCommon; int switchSettling; int adcDesiredSize; int* antCtrlChain; int* antennaGainCh; int* txRxAttenCh; int* rxTxMarginCh; int* noiseFloorThreshCh; int* xlnaGainCh; int* iqCalICh; int* iqCalQCh; int* bswAtten; int* bswMargin; int* xatten2Db; int* xatten2Margin; int txEndToXpaOff; int txEndToRxOn; int txFrameToXpaOn; int thresh62; int xpdGain; int xpd; int* xpaBiasLvlFreq; int pdGainOverlap; int ob; int db; int xpaBiasLvl; int pwrDecreaseFor2Chain; int pwrDecreaseFor3Chain; int txFrameToDataStart; int txFrameToPaOn; int ht40PowerIncForPdadc; int swSettleHt40; int ob_ch1; int db_ch1; int flagBits; int miscBits; int* futureModal; TYPE_1__* spurChans; scalar_t__ pgaDesiredSize; } ;
struct TYPE_5__ {int spurChan; scalar_t__ spurRangeHigh; scalar_t__ spurRangeLow; } ;
typedef TYPE_3__ MODAL_EEP_HEADER ;
typedef TYPE_4__ HAL_EEPROM_v14 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_1, int VAR_2)
{
 HAL_EEPROM_v14 *VAR_3 = (HAL_EEPROM_v14 *) VAR_1;
 MODAL_EEP_HEADER *VAR_4 = &VAR_3->ee_base.modalHeader[VAR_2];
 int VAR_5;

 FUNC_0("| antCtrlCommon: 0x%.8x |\n", VAR_4->antCtrlCommon);
 FUNC_0("| switchSettling: 0x%.2x |\n", VAR_4->switchSettling);
 FUNC_0("| adcDesiredSize: %d |\n| pgaDesiredSize: %.2f dBm |\n",
     VAR_4->adcDesiredSize, (float) VAR_4->pgaDesiredSize / 2.0);

 FUNC_0("| antCtrlChain:        0:0x%.8x 1:0x%.8x 2:0x%.8x |\n",
     VAR_4->antCtrlChain[0], VAR_4->antCtrlChain[1], VAR_4->antCtrlChain[2]);
 FUNC_0("| antennaGainCh:       0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->antennaGainCh[0], VAR_4->antennaGainCh[1], VAR_4->antennaGainCh[2]);
 FUNC_0("| txRxAttenCh:         0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->txRxAttenCh[0], VAR_4->txRxAttenCh[1], VAR_4->txRxAttenCh[2]);
 FUNC_0("| rxTxMarginCh:        0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->rxTxMarginCh[0], VAR_4->rxTxMarginCh[1], VAR_4->rxTxMarginCh[2]);
  FUNC_0("| noiseFloorThresCh:   0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->noiseFloorThreshCh[0], VAR_4->noiseFloorThreshCh[1], VAR_4->noiseFloorThreshCh[2]);
 FUNC_0("| xlnaGainCh:          0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->xlnaGainCh[0], VAR_4->xlnaGainCh[1], VAR_4->xlnaGainCh[2]);
 FUNC_0("| iqCalICh:            0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n| iqCalQCh:            0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->iqCalICh[0], VAR_4->iqCalICh[1], VAR_4->iqCalICh[2],
     VAR_4->iqCalQCh[0], VAR_4->iqCalQCh[1], VAR_4->iqCalQCh[2]);
 FUNC_0("| bswAtten:            0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->bswAtten[0], VAR_4->bswAtten[1], VAR_4->bswAtten[2]);
 FUNC_0("| bswMargin:           0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->bswMargin[0], VAR_4->bswMargin[1], VAR_4->bswMargin[2]);
 FUNC_0("| xatten2Db:           0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->xatten2Db[0], VAR_4->xatten2Db[1], VAR_4->xatten2Db[2]);
 FUNC_0("| xatten2Margin:       0:0x%.2x   1:0x%.2x   2:0x%.2x   |\n",
     VAR_4->xatten2Margin[0], VAR_4->xatten2Margin[1], VAR_4->xatten2Margin[2]);

 FUNC_0("| txEndToXpaOff: 0x%.2x | txEndToRxOn: 0x%.2x | txFrameToXpaOn: 0x%.2x |\n",
     VAR_4->txEndToXpaOff, VAR_4->txEndToRxOn, VAR_4->txFrameToXpaOn);

 FUNC_0("| thres62: 0x%.2x\n", VAR_4->thresh62);

 FUNC_0("| xpdGain: 0x%.2x | xpd: 0x%.2x |\n", VAR_4->xpdGain, VAR_4->xpd);
 FUNC_0("| xpaBiasLvlFreq: 0:0x%.4x 1:0x%.4x 2:0x%.4x |\n",
     VAR_4->xpaBiasLvlFreq[0], VAR_4->xpaBiasLvlFreq[1], VAR_4->xpaBiasLvlFreq[2]);

 FUNC_0("| pdGainOverlap: 0x%.2x | ob: 0x%.2x | db: 0x%.2x | xpaBiasLvl: 0x%.2x |\n",
     VAR_4->pdGainOverlap, VAR_4->ob, VAR_4->db, VAR_4->xpaBiasLvl);

 FUNC_0("| pwrDecreaseFor2Chain: 0x%.2x | pwrDecreaseFor3Chain: 0x%.2x | txFrameToDataStart: 0x%.2x | txFrameToPaOn: 0x%.2x |\n",
     VAR_4->pwrDecreaseFor2Chain, VAR_4->pwrDecreaseFor3Chain, VAR_4->txFrameToDataStart,
     VAR_4->txFrameToPaOn);

 FUNC_0("| ht40PowerIncForPdadc: 0x%.2x |\n", VAR_4->ht40PowerIncForPdadc);

 FUNC_0("| swSettleHt40: 0x%.2x |\n", VAR_4->swSettleHt40);

 FUNC_0("| ob_ch1: 0x%.2x | db_ch1: 0x%.2x |\n", VAR_4->ob_ch1, VAR_4->db_ch1);

 FUNC_0("| flagBits: 0x%.2x | miscBits: 0x%.2x |\n", VAR_4->flagBits, VAR_4->miscBits);


 FUNC_0("| futureModal: 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x |\n",
     VAR_4->futureModal[0],
     VAR_4->futureModal[1],
     VAR_4->futureModal[2],
     VAR_4->futureModal[3],
     VAR_4->futureModal[4],
     VAR_4->futureModal[5]);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0("| Spur %d: spurChan: 0x%.4x spurRangeLow: 0x%.2x spurRangeHigh: 0x%.2x |\n",
      VAR_5, VAR_4->spurChans[VAR_5].spurChan,
      (int) VAR_4->spurChans[VAR_5].spurRangeLow,
      (int) VAR_4->spurChans[VAR_5].spurRangeHigh);
 }
}
