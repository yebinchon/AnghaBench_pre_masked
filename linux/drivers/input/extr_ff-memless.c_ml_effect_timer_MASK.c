
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ml_device {struct input_dev* dev; } ;
struct input_dev {int event_lock; } ;


 struct ml_device* FUNC_0 (int ,struct timer_list*,int ) ;
 struct ml_device* VAR_0 ;
 int FUNC_1 (struct ml_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct ml_device *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct input_dev *VAR_4 = VAR_3->dev;
 unsigned long VAR_5;

 FUNC_2("timer: updating effects\n");

 FUNC_3(&VAR_4->event_lock, VAR_5);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_4->event_lock, VAR_5);
}
