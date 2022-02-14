
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct input_value {int member_2; int member_1; int member_0; } ;
struct input_dev {int event_lock; scalar_t__* rep; int timer; int repeat_key; int keybit; int key; } ;


 int FUNC_0 (struct input_value*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct input_dev* VAR_3 ;
 struct input_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct input_dev*,struct input_value*,int ) ;
 struct input_value VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_7)
{
 struct input_dev *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);
 unsigned long VAR_9;

 FUNC_6(&VAR_8->event_lock, VAR_9);

 if (FUNC_8(VAR_8->repeat_key, VAR_8->key) &&
     FUNC_3(VAR_8->repeat_key, VAR_8->keybit, VAR_1)) {
  struct input_value VAR_10[] = {
   { VAR_0, VAR_8->repeat_key, 2 },
   VAR_4
  };

  FUNC_2(VAR_8, VAR_10, FUNC_0(VAR_10));

  if (VAR_8->rep[VAR_2])
   FUNC_4(&VAR_8->timer, VAR_5 +
     FUNC_5(VAR_8->rep[VAR_2]));
 }

 FUNC_7(&VAR_8->event_lock, VAR_9);
}
