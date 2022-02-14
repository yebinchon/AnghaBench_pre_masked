
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_vibrator {int play_work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pwm_vibrator* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct pwm_vibrator*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct pwm_vibrator *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->play_work);
 FUNC_2(VAR_1);
}
