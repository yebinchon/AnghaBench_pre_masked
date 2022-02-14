
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int strong_magnitude; scalar_t__ weak_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {scalar_t__ type; TYPE_2__ u; } ;
struct bigben_device {void* right_motor_on; void* left_motor_force; int work_ff; int worker; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_1, void *VAR_2,
    struct ff_effect *VAR_3)
{
 struct bigben_device *VAR_4 = VAR_2;
 u8 VAR_5;
 u8 VAR_6;

 if (VAR_3->type != VAR_0)
  return 0;

 VAR_5 = VAR_3->u.rumble.weak_magnitude ? 1 : 0;
 VAR_6 = VAR_3->u.rumble.strong_magnitude / 256;

 if (VAR_5 != VAR_4->right_motor_on ||
   VAR_6 != VAR_4->left_motor_force) {
  VAR_4->right_motor_on = VAR_5;
  VAR_4->left_motor_force = VAR_6;
  VAR_4->work_ff = 1;
  FUNC_0(&VAR_4->worker);
 }

 return 0;
}
