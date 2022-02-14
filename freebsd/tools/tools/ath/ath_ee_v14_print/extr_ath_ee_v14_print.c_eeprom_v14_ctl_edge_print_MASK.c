
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__** ctlEdges; } ;
struct TYPE_4__ {int tPowerFlag; } ;
typedef TYPE_2__ CAL_CTL_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(CAL_CTL_DATA *VAR_2)
{
 int VAR_3, VAR_4;
 uint8_t VAR_5, VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0("  chain %d: ", VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_5 = VAR_2->ctlEdges[VAR_3][VAR_4].tPowerFlag & 0x3f;
   VAR_6 = (VAR_2->ctlEdges[VAR_3][VAR_4].tPowerFlag & 0xc0) >> 6;
   FUNC_0(" %d:pow=%d,flag=%.2x", VAR_4, VAR_5, VAR_6);
  }
  FUNC_0("\n");
 }
}
