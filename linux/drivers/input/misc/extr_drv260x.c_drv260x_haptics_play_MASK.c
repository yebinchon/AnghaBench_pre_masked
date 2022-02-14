
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ strong_magnitude; scalar_t__ weak_magnitude; } ;
struct TYPE_3__ {TYPE_2__ rumble; } ;
struct ff_effect {TYPE_1__ u; } ;
struct drv260x_data {scalar_t__ magnitude; int work; int mode; } ;


 int VAR_0 ;
 struct drv260x_data* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, void *VAR_2,
    struct ff_effect *VAR_3)
{
 struct drv260x_data *VAR_4 = FUNC_0(VAR_1);

 VAR_4->mode = VAR_0;

 if (VAR_3->u.rumble.strong_magnitude > 0)
  VAR_4->magnitude = VAR_3->u.rumble.strong_magnitude;
 else if (VAR_3->u.rumble.weak_magnitude > 0)
  VAR_4->magnitude = VAR_3->u.rumble.weak_magnitude;
 else
  VAR_4->magnitude = 0;

 FUNC_1(&VAR_4->work);

 return 0;
}
