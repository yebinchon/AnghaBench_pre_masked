
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int touch_max; } ;
struct wacom_wac {TYPE_2__ features; struct input_dev* touch_input; } ;
struct input_mt_slot {int dummy; } ;
struct input_dev {TYPE_1__* mt; int key; } ;
struct TYPE_3__ {int num_slots; struct input_mt_slot* slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_mt_slot*,int ) ;
 scalar_t__ FUNC_1 (struct wacom_wac*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wacom_wac *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->touch_input;
 unsigned VAR_4 = VAR_2->features.touch_max;
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_4)
  return 0;

 if (VAR_4 == 1)
  return FUNC_2(VAR_1, VAR_3->key) &&
   FUNC_1(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_3->mt->num_slots; VAR_6++) {
  struct input_mt_slot *VAR_7 = &VAR_3->mt->slots[VAR_6];
  int VAR_8 = FUNC_0(VAR_7, VAR_0);
  if (VAR_8 >= 0)
   VAR_5++;
 }

 return VAR_5;
}
