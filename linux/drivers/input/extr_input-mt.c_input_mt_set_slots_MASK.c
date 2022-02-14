
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int dummy; } ;
struct input_mt {int* red; int num_slots; struct input_mt_slot* slots; } ;


 scalar_t__ FUNC_0 (struct input_mt_slot*) ;

__attribute__((used)) static void FUNC_1(struct input_mt *VAR_0,
          int *VAR_1, int VAR_2)
{
 struct input_mt_slot *VAR_3;
 int *VAR_4 = VAR_0->red, VAR_5;

 for (VAR_5 = 0; VAR_5 != VAR_2; VAR_5++)
  VAR_1[VAR_5] = -1;

 for (VAR_3 = VAR_0->slots; VAR_3 != VAR_0->slots + VAR_0->num_slots; VAR_3++) {
  if (!FUNC_0(VAR_3))
   continue;

  for (VAR_5 = 0; VAR_5 != VAR_2; VAR_5++) {
   if (VAR_4[VAR_5] < 0) {
    VAR_1[VAR_5] = VAR_3 - VAR_0->slots;
    break;
   }
  }

  VAR_4 += VAR_2;
 }

 for (VAR_3 = VAR_0->slots; VAR_3 != VAR_0->slots + VAR_0->num_slots; VAR_3++) {
  if (FUNC_0(VAR_3))
   continue;

  for (VAR_5 = 0; VAR_5 != VAR_2; VAR_5++) {
   if (VAR_1[VAR_5] < 0) {
    VAR_1[VAR_5] = VAR_3 - VAR_0->slots;
    break;
   }
  }
 }
}
