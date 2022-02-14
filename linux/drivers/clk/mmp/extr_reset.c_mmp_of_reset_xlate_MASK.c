
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {scalar_t__ of_reset_n_cells; int nr_resets; } ;
struct of_phandle_args {scalar_t__ args_count; scalar_t__* args; } ;
struct mmp_clk_reset_unit {struct mmp_clk_reset_cell* cells; } ;
struct mmp_clk_reset_cell {scalar_t__ clk_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mmp_clk_reset_unit* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_1,
     const struct of_phandle_args *VAR_2)
{
 struct mmp_clk_reset_unit *VAR_3 = FUNC_1(VAR_1);
 struct mmp_clk_reset_cell *VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2->args_count != VAR_1->of_reset_n_cells))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1->nr_resets; VAR_5++) {
  VAR_4 = &VAR_3->cells[VAR_5];
  if (VAR_4->clk_id == VAR_2->args[0])
   break;
 }

 if (VAR_5 == VAR_1->nr_resets)
  return -VAR_0;

 return VAR_5;
}
