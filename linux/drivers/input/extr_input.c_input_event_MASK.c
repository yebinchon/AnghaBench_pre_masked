
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int event_lock; int evbit; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct input_dev *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(VAR_2, VAR_1->evbit, VAR_0)) {

  FUNC_2(&VAR_1->event_lock, VAR_5);
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_3(&VAR_1->event_lock, VAR_5);
 }
}
