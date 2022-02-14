
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int ee_numCtls; TYPE_1__* ee_rdEdgesPower; } ;
struct TYPE_3__ {int rdEdge; int flag; scalar_t__ twice_rdEdgePower; } ;
typedef TYPE_2__ HAL_EEPROM_v14 ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_1)
{
 HAL_EEPROM_v14 *VAR_2 = (HAL_EEPROM_v14 *) VAR_1;
 int VAR_3;

 FUNC_0("| eeNumCtls: %d\n", VAR_2->ee_numCtls);
 for (VAR_3 = 0; VAR_3 < VAR_0*VAR_2->ee_numCtls; VAR_3++) {

  FUNC_0("|  edge %2d/%2d: rdEdge: %5d EdgePower: %.2f dBm Flag: 0x%.8x\n",
   VAR_3 / VAR_0, VAR_3 % VAR_0,
   VAR_2->ee_rdEdgesPower[VAR_3].rdEdge,
   (float) VAR_2->ee_rdEdgesPower[VAR_3].twice_rdEdgePower / 2.0,
   VAR_2->ee_rdEdgesPower[VAR_3].flag);

  if (VAR_3 % VAR_0 == (VAR_0 -1))
   FUNC_0("|\n");
 }
}
