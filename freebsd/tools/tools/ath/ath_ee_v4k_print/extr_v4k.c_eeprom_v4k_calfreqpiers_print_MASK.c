
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int* calFreqPier2G; int ** calPierData2G; } ;
struct TYPE_4__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_v4k ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(uint16_t *VAR_2)
{
 HAL_EEPROM_v4k *VAR_3 = (HAL_EEPROM_v4k *) VAR_2;
 int VAR_4, VAR_5;


 FUNC_1("calFreqPier2G: ");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(" 0x%.2x ", VAR_3->ee_base.calFreqPier2G[VAR_4]);
 }
 FUNC_1("|\n");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->ee_base.calFreqPier2G[VAR_4] == 0xff)
   continue;
  FUNC_1("2Ghz Cal Pier %d\n", VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   FUNC_1("  Chain %d:\n", VAR_5);
   FUNC_0(&VAR_3->ee_base.calPierData2G[VAR_5][VAR_4]);
  }
 }

 FUNC_1("\n");
}
