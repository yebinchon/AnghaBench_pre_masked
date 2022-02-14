
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uinput_device {size_t head; size_t tail; TYPE_1__* dev; struct input_event* buff; } ;
struct input_event {int dummy; } ;
struct TYPE_2__ {int event_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct uinput_device *VAR_1,
        struct input_event *VAR_2)
{
 bool VAR_3;

 FUNC_0(&VAR_1->dev->event_lock);

 VAR_3 = VAR_1->head != VAR_1->tail;
 if (VAR_3) {
  *VAR_2 = VAR_1->buff[VAR_1->tail];
  VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 }

 FUNC_1(&VAR_1->dev->event_lock);

 return VAR_3;
}
