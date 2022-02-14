
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** vpdPdg; scalar_t__** pwrPdg; } ;
typedef TYPE_1__ CAL_DATA_PER_FREQ_4K ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(CAL_DATA_PER_FREQ_4K *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0("    Gain %d: pwr dBm/vpd: ", VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {



   FUNC_0("%d:(%.2f/%d) ", VAR_4, (float) VAR_2->pwrPdg[VAR_3][VAR_4] / 4.00,
       VAR_2->vpdPdg[VAR_3][VAR_4]);
  }
  FUNC_0("\n");
 }
}
