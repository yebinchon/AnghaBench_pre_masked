
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {int dummy; } ;
struct evdev_client {int packet_head; int tail; int bufsize; int buffer_lock; struct input_event* buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct evdev_client *VAR_0,
      struct input_event *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->buffer_lock);

 VAR_2 = VAR_0->packet_head != VAR_0->tail;
 if (VAR_2) {
  *VAR_1 = VAR_0->buffer[VAR_0->tail++];
  VAR_0->tail &= VAR_0->bufsize - 1;
 }

 FUNC_1(&VAR_0->buffer_lock);

 return VAR_2;
}
