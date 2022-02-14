
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_prcmu {int is_prepared; int cg_sel; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct clk_prcmu* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 int VAR_1;
 struct clk_prcmu *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_2->cg_sel, 1);
 if (!VAR_1)
  VAR_2->is_prepared = 1;

 return VAR_1;
}
