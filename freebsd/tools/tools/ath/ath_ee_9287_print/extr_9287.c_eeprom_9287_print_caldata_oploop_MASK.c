
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_data_op_loop_ar9287 {int** pwrPdg; int** vpdPdg; int** pcdac; int** empty; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct cal_data_op_loop_ar9287 *VAR_0)
{
 int VAR_1, VAR_2;


 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_0("    pwrPdg:");
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   FUNC_0("[%d][%d]=%d, ", VAR_1, VAR_2, VAR_0->pwrPdg[VAR_1][VAR_2]);
  }
  FUNC_0("\n");

  FUNC_0("    vpdPdg:");
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   FUNC_0("[%d][%d]=%d, ", VAR_1, VAR_2, VAR_0->vpdPdg[VAR_1][VAR_2]);
  }
  FUNC_0("\n");

  FUNC_0("    pcdac:");
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   FUNC_0("[%d][%d]=%d, ", VAR_1, VAR_2, VAR_0->pcdac[VAR_1][VAR_2]);
  }
  FUNC_0("\n");

  FUNC_0("    empty:");
  for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
   FUNC_0("[%d][%d]=%d, ", VAR_1, VAR_2, VAR_0->empty[VAR_1][VAR_2]);
  }
  FUNC_0("\n\n");
 }
}
