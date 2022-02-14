
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peri_clk_data {int sel; int clocks; } ;
struct clk_init_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct clk_init_data*) ;

__attribute__((used)) static int
FUNC_1(struct peri_clk_data *VAR_1, struct clk_init_data *VAR_2)
{
 VAR_2->flags = VAR_0;

 return FUNC_0(VAR_1->clocks, &VAR_1->sel, VAR_2);
}
