
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pwm {unsigned long fixed_rate; } ;
struct clk_hw {int dummy; } ;


 struct clk_pwm* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_pwm *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->fixed_rate;
}
