
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int mutex; int event_lock; } ;


 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct input_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->mutex);
 FUNC_4(&VAR_0->event_lock, VAR_1);

 FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0);

 FUNC_5(&VAR_0->event_lock, VAR_1);
 FUNC_3(&VAR_0->mutex);
}
