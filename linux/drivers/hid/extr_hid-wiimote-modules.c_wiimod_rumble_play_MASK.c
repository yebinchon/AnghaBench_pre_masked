
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cache_rumble; } ;
struct wiimote_data {int rumble_worker; TYPE_3__ state; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ weak_magnitude; scalar_t__ strong_magnitude; } ;
struct TYPE_5__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;
typedef int __u8 ;


 struct wiimote_data* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, void *VAR_1,
         struct ff_effect *VAR_2)
{
 struct wiimote_data *VAR_3 = FUNC_0(VAR_0);
 __u8 VAR_4;







 if (VAR_2->u.rumble.strong_magnitude || VAR_2->u.rumble.weak_magnitude)
  VAR_4 = 1;
 else
  VAR_4 = 0;



 VAR_3->state.cache_rumble = VAR_4;
 FUNC_1(&VAR_3->rumble_worker);

 return 0;
}
