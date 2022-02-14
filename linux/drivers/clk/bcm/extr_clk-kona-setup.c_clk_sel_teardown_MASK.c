
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_init_data {int * parent_names; scalar_t__ num_parents; } ;
struct bcm_clk_sel {scalar_t__ parent_count; int * parent_sel; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bcm_clk_sel *VAR_0,
  struct clk_init_data *VAR_1)
{
 FUNC_0(VAR_0->parent_sel);
 VAR_0->parent_sel = ((void*)0);
 VAR_0->parent_count = 0;

 VAR_1->num_parents = 0;
 FUNC_0(VAR_1->parent_names);
 VAR_1->parent_names = ((void*)0);
}
