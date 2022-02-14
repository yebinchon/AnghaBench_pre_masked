
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {struct input_dev* dev; } ;
struct input_dev {int mutex; } ;


 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct input_handle *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->dev;

 FUNC_1(&VAR_1->mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->mutex);
}
