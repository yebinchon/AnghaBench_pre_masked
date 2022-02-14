
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pwm {int pwm; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct clk_pwm* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_pwm *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pwm);
}
