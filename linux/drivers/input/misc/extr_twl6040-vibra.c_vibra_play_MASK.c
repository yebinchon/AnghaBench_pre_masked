
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vibra_info {int direction; int play_work; int strong_speed; int weak_speed; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {scalar_t__ direction; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 struct vibra_info* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, void *VAR_2,
        struct ff_effect *VAR_3)
{
 struct vibra_info *VAR_4 = FUNC_0(VAR_1);

 VAR_4->weak_speed = VAR_3->u.rumble.weak_magnitude;
 VAR_4->strong_speed = VAR_3->u.rumble.strong_magnitude;
 VAR_4->direction = VAR_3->direction < VAR_0 ? 1 : -1;

 FUNC_1(&VAR_4->play_work);

 return 0;
}
