
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_fan_ctx {int rpm_timer; int pwm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct pwm_fan_ctx *VAR_1 = VAR_0;
 FUNC_1(VAR_1->pwm);
 FUNC_0(&VAR_1->rpm_timer);
}
