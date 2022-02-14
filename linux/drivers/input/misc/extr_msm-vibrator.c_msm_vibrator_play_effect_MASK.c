
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_vibrator {scalar_t__ magnitude; int worker; int mutex; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ strong_magnitude; scalar_t__ weak_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;


 struct msm_vibrator* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0, void *VAR_1,
        struct ff_effect *VAR_2)
{
 struct msm_vibrator *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->mutex);

 if (VAR_2->u.rumble.strong_magnitude > 0)
  VAR_3->magnitude = VAR_2->u.rumble.strong_magnitude;
 else
  VAR_3->magnitude = VAR_2->u.rumble.weak_magnitude;

 FUNC_2(&VAR_3->mutex);

 FUNC_3(&VAR_3->worker);

 return 0;
}
