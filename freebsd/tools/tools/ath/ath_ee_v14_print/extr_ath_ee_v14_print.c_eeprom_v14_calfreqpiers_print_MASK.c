
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ openLoopPwrCntl; } ;
struct TYPE_5__ {int* calFreqPier2G; int* calFreqPier5G; int ** calPierData5G; TYPE_1__ baseEepHeader; int ** calPierData2G; } ;
struct TYPE_6__ {TYPE_2__ ee_base; } ;
typedef TYPE_3__ HAL_EEPROM_v14 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(uint16_t *VAR_3)
{
 HAL_EEPROM_v14 *VAR_4 = (HAL_EEPROM_v14 *) VAR_3;
 int VAR_5, VAR_6;


 FUNC_2("calFreqPier2G: ");
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_2(" 0x%.2x ", VAR_4->ee_base.calFreqPier2G[VAR_5]);
 }
 FUNC_2("|\n");

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->ee_base.calFreqPier2G[VAR_5] == 0xff)
   continue;
  FUNC_2("2Ghz Cal Pier %d\n", VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_2("  Chain %d:\n", VAR_6);
   if (VAR_4->ee_base.baseEepHeader.openLoopPwrCntl)
    FUNC_1((void *) (&VAR_4->ee_base.calPierData2G[VAR_6][VAR_5]));
   else
    FUNC_0(&VAR_4->ee_base.calPierData2G[VAR_6][VAR_5]);
  }
 }

 FUNC_2("\n");


 FUNC_2("calFreqPier5G: ");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_2(" 0x%.2x ", VAR_4->ee_base.calFreqPier5G[VAR_5]);
 }
 FUNC_2("|\n");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->ee_base.calFreqPier5G[VAR_5] == 0xff)
   continue;
  FUNC_2("5Ghz Cal Pier %d\n", VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_2("  Chain %d:\n", VAR_6);
   if (VAR_4->ee_base.baseEepHeader.openLoopPwrCntl)
    FUNC_1((void *) (&VAR_4->ee_base.calPierData5G[VAR_6][VAR_5]));
   else
    FUNC_0(&VAR_4->ee_base.calPierData5G[VAR_6][VAR_5]);
  }
 }
}
