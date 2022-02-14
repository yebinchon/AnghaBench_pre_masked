
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__* ctlIndex; int * ctlData; } ;
struct TYPE_4__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_9287 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;

void
FUNC_2(uint16_t *VAR_1)
{
 HAL_EEPROM_9287 *VAR_2 = (HAL_EEPROM_9287 *) VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->ee_base.ctlIndex[VAR_3] == 0)
   continue;
  FUNC_1("| ctlIndex: offset %d, value %d\n", VAR_3, VAR_2->ee_base.ctlIndex[VAR_3]);
  FUNC_0(&VAR_2->ee_base.ctlData[VAR_3]);
 }
}
