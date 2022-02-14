
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_reset_n_cells; int nr_resets; int of_xlate; struct device_node* of_node; int * ops; } ;
struct mmp_clk_reset_unit {TYPE_1__ rcdev; struct mmp_clk_reset_cell* cells; } ;
struct mmp_clk_reset_cell {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct mmp_clk_reset_unit* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct device_node *VAR_3,
   struct mmp_clk_reset_cell *VAR_4, int VAR_5)
{
 struct mmp_clk_reset_unit *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_6->cells = VAR_4;
 VAR_6->rcdev.of_reset_n_cells = 1;
 VAR_6->rcdev.nr_resets = VAR_5;
 VAR_6->rcdev.ops = &VAR_1;
 VAR_6->rcdev.of_node = VAR_3;
 VAR_6->rcdev.of_xlate = VAR_2;

 FUNC_1(&VAR_6->rcdev);
}
