
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_beeper {int bell_frequency; int work; int suspended; scalar_t__ period; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;


 struct pwm_beeper* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct pwm_beeper *VAR_6 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_1 || VAR_5 < 0)
  return -VAR_0;

 switch (VAR_4) {
 case 129:
  VAR_5 = VAR_5 ? VAR_6->bell_frequency : 0;
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5 == 0)
  VAR_6->period = 0;
 else
  VAR_6->period = FUNC_0(VAR_5);

 if (!VAR_6->suspended)
  FUNC_2(&VAR_6->work);

 return 0;
}
