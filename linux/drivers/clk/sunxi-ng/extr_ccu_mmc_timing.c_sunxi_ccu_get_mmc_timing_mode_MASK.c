
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;
struct ccu_common {int features; scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk_hw* FUNC_0 (struct clk*) ;
 struct ccu_common* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct clk *VAR_3)
{
 struct clk_hw *VAR_4 = FUNC_0(VAR_3);
 struct ccu_common *VAR_5 = FUNC_1(VAR_4);

 if (!(VAR_5->features & VAR_0))
  return -VAR_2;

 return !!(FUNC_2(VAR_5->base + VAR_5->reg) & VAR_1);
}
