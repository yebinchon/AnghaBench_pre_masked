
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int custData; } ;
struct TYPE_4__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_9287 ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(uint16_t *VAR_0)
{
 HAL_EEPROM_9287 *VAR_1 = (HAL_EEPROM_9287 *) VAR_0;
 uint8_t *VAR_2 = (uint8_t *) &VAR_1->ee_base.custData;
 int VAR_3;

 FUNC_0("\n| Custdata:                                       |\n");
 for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
  FUNC_0("%s0x%.2x %s",
      VAR_3 % 16 == 0 ? "| " : "",
      VAR_2[VAR_3],
      VAR_3 % 16 == 15 ? "|\n" : "");
 }
 FUNC_0("\n");
}
