
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int d_node; int h_node; struct input_dev* dev; } ;
struct input_dev {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct input_handle *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->dev;

 FUNC_0(&VAR_0->h_node);




 FUNC_1(&VAR_1->mutex);
 FUNC_0(&VAR_0->d_node);
 FUNC_2(&VAR_1->mutex);

 FUNC_3();
}
