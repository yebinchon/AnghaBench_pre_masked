
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt {int num_slots; int * slots; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_mt*,int *) ;
 int FUNC_2 (struct input_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2, struct input_mt *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_slots; VAR_4++) {
  if (!FUNC_1(VAR_3, &VAR_3->slots[VAR_4])) {
   FUNC_2(VAR_2, VAR_4);
   FUNC_0(VAR_2, VAR_1, VAR_0, -1);
  }
 }
}
