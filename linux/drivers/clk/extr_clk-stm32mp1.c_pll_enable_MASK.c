
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pll_obj {int lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct stm32_pll_obj* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3)
{
 struct stm32_pll_obj *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5;
 unsigned long VAR_6 = 0;
 unsigned int VAR_7 = VAR_2;
 int VAR_8 = 0;

 FUNC_2(VAR_4->lock, VAR_6);

 if (FUNC_0(VAR_3))
  goto unlock;

 VAR_5 = FUNC_1(VAR_4->reg);
 VAR_5 |= VAR_0;
 FUNC_6(VAR_5, VAR_4->reg);






 do {
  VAR_8 = !(FUNC_1(VAR_4->reg) & VAR_1);

  if (VAR_8)
   FUNC_5(120);

 } while (VAR_8 && --VAR_7);

unlock:
 FUNC_3(VAR_4->lock, VAR_6);

 return VAR_8;
}
