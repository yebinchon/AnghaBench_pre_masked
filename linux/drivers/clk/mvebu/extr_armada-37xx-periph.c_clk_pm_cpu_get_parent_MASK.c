
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_pm_cpu {int shift_mux; int mask_mux; int reg_mux; int nb_pm_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct clk_pm_cpu* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_pm_cpu *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;

 if (FUNC_1(VAR_1->nb_pm_base)) {
  VAR_2 = FUNC_0(VAR_1->nb_pm_base);
 } else {
  VAR_2 = FUNC_2(VAR_1->reg_mux) >> VAR_1->shift_mux;
  VAR_2 &= VAR_1->mask_mux;
 }

 return VAR_2;
}
