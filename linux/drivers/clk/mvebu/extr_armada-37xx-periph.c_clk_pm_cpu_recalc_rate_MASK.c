
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_pm_cpu {int shift_div; int reg_div; int nb_pm_base; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 struct clk_pm_cpu* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct clk_pm_cpu *VAR_2 = FUNC_4(VAR_0);
 unsigned int VAR_3;

 if (FUNC_2(VAR_2->nb_pm_base))
  VAR_3 = FUNC_1(VAR_2->nb_pm_base);
 else
  VAR_3 = FUNC_3(VAR_2->reg_div, VAR_2->shift_div);
 return FUNC_0((u64)VAR_1, VAR_3);
}
