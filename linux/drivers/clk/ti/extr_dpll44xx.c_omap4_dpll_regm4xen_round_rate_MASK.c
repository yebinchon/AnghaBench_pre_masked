
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll_data {int last_rounded_m4xen; unsigned long last_rounded_rate; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (struct clk_hw*,unsigned long,int *) ;
 int FUNC_1 (struct dpll_data*) ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

long FUNC_3(struct clk_hw *VAR_2,
        unsigned long VAR_3,
        unsigned long *VAR_4)
{
 struct clk_hw_omap *VAR_5 = FUNC_2(VAR_2);
 struct dpll_data *VAR_6;
 long VAR_7;

 if (!VAR_5 || !VAR_5->dpll_data)
  return -VAR_0;

 VAR_6 = VAR_5->dpll_data;

 VAR_6->last_rounded_m4xen = 0;





 VAR_7 = FUNC_0(VAR_2, VAR_3, ((void*)0));
 if (VAR_7 != ~0)
  goto out;






 VAR_7 = FUNC_0(VAR_2, VAR_3 / VAR_1,
      ((void*)0));
 if (VAR_7 == ~0)
  return VAR_7;

 VAR_6->last_rounded_rate *= VAR_1;
 VAR_6->last_rounded_m4xen = 1;

out:
 FUNC_1(VAR_6);

 return VAR_6->last_rounded_rate;
}
