
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int key; } ;
struct input_mt {int num_slots; struct input_mt_slot* slots; } ;
struct input_dev {struct input_mt* mt; } ;


 scalar_t__ FUNC_0 (struct input_mt_slot*) ;
 int FUNC_1 (struct input_mt*,struct input_mt_slot*) ;

int FUNC_2(struct input_dev *VAR_0, int VAR_1)
{
 struct input_mt *VAR_2 = VAR_0->mt;
 struct input_mt_slot *VAR_3;

 if (!VAR_2)
  return -1;

 for (VAR_3 = VAR_2->slots; VAR_3 != VAR_2->slots + VAR_2->num_slots; VAR_3++)
  if (FUNC_0(VAR_3) && VAR_3->key == VAR_1)
   return VAR_3 - VAR_2->slots;

 for (VAR_3 = VAR_2->slots; VAR_3 != VAR_2->slots + VAR_2->num_slots; VAR_3++)
  if (!FUNC_0(VAR_3) && !FUNC_1(VAR_2, VAR_3)) {
   VAR_3->key = VAR_1;
   return VAR_3 - VAR_2->slots;
  }

 return -1;
}
