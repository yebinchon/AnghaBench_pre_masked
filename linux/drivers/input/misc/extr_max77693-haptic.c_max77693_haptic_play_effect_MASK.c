
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pwm_args {scalar_t__ period; } ;
struct max77693_haptic {int magnitude; unsigned int pwm_duty; int work; int pwm_dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_3__ {TYPE_2__ rumble; } ;
struct ff_effect {TYPE_1__ u; } ;


 int VAR_0 ;
 struct max77693_haptic* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ,struct pwm_args*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1, void *VAR_2,
           struct ff_effect *VAR_3)
{
 struct max77693_haptic *VAR_4 = FUNC_0(VAR_1);
 struct pwm_args VAR_5;
 u64 VAR_6;

 VAR_4->magnitude = VAR_3->u.rumble.strong_magnitude;
 if (!VAR_4->magnitude)
  VAR_4->magnitude = VAR_3->u.rumble.weak_magnitude;






 FUNC_1(VAR_4->pwm_dev, &VAR_5);
 VAR_6 = (u64)VAR_5.period * VAR_4->magnitude;
 VAR_4->pwm_duty = (unsigned int)(VAR_6 >>
      VAR_0);

 FUNC_2(&VAR_4->work);

 return 0;
}
