
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8323_pwm {int running; scalar_t__ desired_brightness; scalar_t__ brightness; int lock; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct lm8323_pwm *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->running = 0;
 if (VAR_0->desired_brightness != VAR_0->brightness)
  FUNC_2(&VAR_0->work);
 FUNC_1(&VAR_0->lock);
}
