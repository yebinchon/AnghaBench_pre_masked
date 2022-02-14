
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int period; int duty_cycle; } ;
struct clk_pwm {int pwm; } ;
struct clk_hw {int dummy; } ;
struct clk_duty {int den; int num; } ;


 int FUNC_0 (int ,struct pwm_state*) ;
 struct clk_pwm* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, struct clk_duty *VAR_1)
{
 struct clk_pwm *VAR_2 = FUNC_1(VAR_0);
 struct pwm_state VAR_3;

 FUNC_0(VAR_2->pwm, &VAR_3);

 VAR_1->num = VAR_3.duty_cycle;
 VAR_1->den = VAR_3.period;

 return 0;
}
