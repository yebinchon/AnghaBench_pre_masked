
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int version; int length; int checksum; int opCapFlags; int eepMisc; int* regDmn; int* macAddr; int rxMask; int txMask; int rfSilent; int blueToothOptions; int deviceCap; int binBuildNumber; int deviceType; int txGainType; } ;
struct TYPE_4__ {TYPE_3__ baseEepHeader; } ;
struct TYPE_5__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_v4k ;
typedef TYPE_3__ BASE_EEP4K_HEADER ;


 int FUNC_0 (char*,int,int,int,...) ;

void
FUNC_1(uint16_t *VAR_0)
{
 HAL_EEPROM_v4k *VAR_1 = (HAL_EEPROM_v4k *) VAR_0;
 BASE_EEP4K_HEADER *VAR_2 = &VAR_1->ee_base.baseEepHeader;

 FUNC_0("| Version: 0x%.4x   | Length: 0x%.4x | Checksum: 0x%.4x ",
     VAR_2->version, VAR_2->length, VAR_2->checksum);
 FUNC_0("| CapFlags: 0x%.2x  | eepMisc: 0x%.2x | RegDomain: 0x%.4x 0x%.4x | \n",
     VAR_2->opCapFlags, VAR_2->eepMisc, VAR_2->regDmn[0], VAR_2->regDmn[1]);
 FUNC_0("| MAC: %.2x:%.2x:%.2x:%.2x:%.2x:%.2x ",
     VAR_2->macAddr[0], VAR_2->macAddr[1], VAR_2->macAddr[2],
     VAR_2->macAddr[3], VAR_2->macAddr[4], VAR_2->macAddr[5]);
 FUNC_0("| RxMask: 0x%.2x | TxMask: 0x%.2x | RfSilent: 0x%.4x | btOptions: 0x%.4x |\n",
     VAR_2->rxMask, VAR_2->txMask, VAR_2->rfSilent, VAR_2->blueToothOptions);
 FUNC_0("| DeviceCap: 0x%.4x | binBuildNumber: %.8x | deviceType: 0x%.2x | txGainType 0x%.2x |\n",
     VAR_2->deviceCap, VAR_2->binBuildNumber, VAR_2->deviceType, VAR_2->txGainType);
}
