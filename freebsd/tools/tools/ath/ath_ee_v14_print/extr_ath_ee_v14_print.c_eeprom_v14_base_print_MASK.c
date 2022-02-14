
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int version; int length; int checksum; int opCapFlags; int eepMisc; int* regDmn; int* macAddr; int rxMask; int txMask; int rfSilent; int blueToothOptions; int deviceCap; int binBuildNumber; int deviceType; scalar_t__* futureBase; scalar_t__ frac_n_5g; scalar_t__ pwr_table_offset; scalar_t__ desiredScaleCCK; scalar_t__ rcChainMask; scalar_t__ txGainType; scalar_t__ dacLpMode; scalar_t__ openLoopPwrCntl; scalar_t__ dacHiPwrMode_5G; scalar_t__ rxGainType; scalar_t__ divChain; scalar_t__ fastClk5g; scalar_t__ pwdclkind; } ;
struct TYPE_4__ {TYPE_3__ baseEepHeader; } ;
struct TYPE_5__ {int* ee_antennaGainMax; TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_v14 ;
typedef TYPE_3__ BASE_EEP_HEADER ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_0)
{
 HAL_EEPROM_v14 *VAR_1 = (HAL_EEPROM_v14 *) VAR_0;
 BASE_EEP_HEADER *VAR_2 = &VAR_1->ee_base.baseEepHeader;
 int VAR_3;

 FUNC_0("| Version: 0x%.4x   | Length: 0x%.4x | Checksum: 0x%.4x ",
     VAR_2->version, VAR_2->length, VAR_2->checksum);
 FUNC_0("| CapFlags: 0x%.2x\n", VAR_2->opCapFlags);

 FUNC_0("| eepMisc: 0x%.2x | RegDomain: 0x%.4x 0x%.4x | \n",
     VAR_2->eepMisc, VAR_2->regDmn[0], VAR_2->regDmn[1]);
 FUNC_0("| MAC: %.2x:%.2x:%.2x:%.2x:%.2x:%.2x ",
     VAR_2->macAddr[0], VAR_2->macAddr[1], VAR_2->macAddr[2],
     VAR_2->macAddr[3], VAR_2->macAddr[4], VAR_2->macAddr[5]);
 FUNC_0("| RxMask: 0x%.2x | TxMask: 0x%.2x | RfSilent: 0x%.4x | btOptions: 0x%.4x |\n",
     VAR_2->rxMask, VAR_2->txMask, VAR_2->rfSilent, VAR_2->blueToothOptions);
 FUNC_0("| DeviceCap: 0x%.4x | binBuildNumber: %.8x | deviceType: 0x%.2x |\n",
     VAR_2->deviceCap, VAR_2->binBuildNumber, VAR_2->deviceType);

 FUNC_0("| pwdclkind: 0x%.2x | fastClk5g: 0x%.2x | divChain: 0x%.2x | rxGainType: 0x%.2x |\n",
     (int) VAR_2->pwdclkind, (int) VAR_2->fastClk5g, (int) VAR_2->divChain,
     (int) VAR_2->rxGainType);

 FUNC_0("| dacHiPwrMode_5G: 0x%.2x | openLoopPwrCntl: 0x%.2x | dacLpMode: 0x%.2x\n",
     (int) VAR_2->dacHiPwrMode_5G, (int) VAR_2->openLoopPwrCntl, (int) VAR_2->dacLpMode);
 FUNC_0("| txGainType: 0x%.2x | rcChainMask: 0x%.2x |\n",
     (int) VAR_2->txGainType, (int) VAR_2->rcChainMask);

 FUNC_0("| desiredScaleCCK: 0x%.2x | pwr_table_offset: 0x%.2x | frac_n_5g: %.2x\n",
     (int) VAR_2->desiredScaleCCK, (int) VAR_2->pwr_table_offset, (int) VAR_2->frac_n_5g);


 FUNC_0("| antennaGainMax[0]: 0x%.2x antennaGainMax[1]: 0x%.2x |\n",
     VAR_1->ee_antennaGainMax[0], VAR_1->ee_antennaGainMax[1]);

 FUNC_0(" | futureBase:");
 for (VAR_3 = 0; VAR_3 < sizeof(VAR_2->futureBase) / sizeof(uint8_t); VAR_3++)
  FUNC_0(" %.2x", (int) VAR_2->futureBase[VAR_3]);
 FUNC_0("\n");
}
