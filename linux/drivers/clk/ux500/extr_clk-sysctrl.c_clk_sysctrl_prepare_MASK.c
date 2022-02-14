
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sysctrl {int enable_delay_us; int * reg_bits; int * reg_mask; int * reg_sel; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct clk_sysctrl* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 int VAR_1;
 struct clk_sysctrl *VAR_2 = FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_2->reg_sel[0], VAR_2->reg_mask[0],
    VAR_2->reg_bits[0]);

 if (!VAR_1 && VAR_2->enable_delay_us)
  FUNC_2(VAR_2->enable_delay_us, VAR_2->enable_delay_us +
        (VAR_2->enable_delay_us >> 2));

 return VAR_1;
}
