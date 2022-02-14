
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_vib {int speed; int work; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;


 struct pm8xxx_vib* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, void *VAR_1,
      struct ff_effect *VAR_2)
{
 struct pm8xxx_vib *VAR_3 = FUNC_0(VAR_0);

 VAR_3->speed = VAR_2->u.rumble.strong_magnitude >> 8;
 if (!VAR_3->speed)
  VAR_3->speed = VAR_2->u.rumble.weak_magnitude >> 9;

 FUNC_1(&VAR_3->work);

 return 0;
}
