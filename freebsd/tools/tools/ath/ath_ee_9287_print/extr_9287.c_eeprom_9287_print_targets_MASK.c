
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int * calTargetPower2GHT40; int * calTargetPower2GHT20; int * calTargetPower2G; int * calTargetPowerCck; } ;
struct TYPE_4__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ HAL_EEPROM_9287 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

void
FUNC_3(uint16_t *VAR_3)
{
 HAL_EEPROM_9287 *VAR_4 = (HAL_EEPROM_9287 *) VAR_3;
 int VAR_5;


 FUNC_2("2Ghz CCK:\n");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_1(&VAR_4->ee_base.calTargetPowerCck[VAR_5]);
 }
 FUNC_2("2Ghz 11g:\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(&VAR_4->ee_base.calTargetPower2G[VAR_5]);
 }
 FUNC_2("2Ghz HT20:\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(&VAR_4->ee_base.calTargetPower2GHT20[VAR_5]);
 }
 FUNC_2("2Ghz HT40:\n");
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&VAR_4->ee_base.calTargetPower2GHT40[VAR_5]);
 }

}
