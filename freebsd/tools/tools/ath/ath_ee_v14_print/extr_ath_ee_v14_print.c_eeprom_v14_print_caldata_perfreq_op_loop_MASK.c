
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** pwrPdg; int** vpdPdg; int** pcdac; int** empty; } ;
typedef TYPE_1__ CAL_DATA_PER_FREQ_OP_LOOP ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(CAL_DATA_PER_FREQ_OP_LOOP *VAR_0)
{
 int VAR_1, VAR_2;
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_0("    Gain: %d:\n", VAR_1);
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   FUNC_0("      %d: pwrPdg: %d, vpdPdg: %d, pcdac: %d, empty: %d\n",
       VAR_2, VAR_0->pwrPdg[VAR_1][VAR_2], VAR_0->vpdPdg[VAR_1][VAR_2], VAR_0->pcdac[VAR_1][VAR_2], VAR_0->empty[VAR_1][VAR_2]);
  }
  FUNC_0("\n");
 }
}
