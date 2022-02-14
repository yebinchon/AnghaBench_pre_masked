
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {unsigned int type; scalar_t__ code; } ;
struct evdev_client {int bufsize; unsigned int tail; unsigned int packet_head; unsigned int head; struct input_event* buffer; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct evdev_client *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_2->bufsize - 1;
 bool VAR_8;
 struct input_event *VAR_9;

 FUNC_0(VAR_3 == VAR_0);

 VAR_5 = VAR_2->tail;
 VAR_2->packet_head = VAR_2->tail;


 VAR_6 = 1;

 for (VAR_4 = VAR_2->tail; VAR_4 != VAR_2->head; VAR_4 = (VAR_4 + 1) & VAR_7) {
  VAR_9 = &VAR_2->buffer[VAR_4];
  VAR_8 = VAR_9->type == VAR_0 && VAR_9->code == VAR_1;

  if (VAR_9->type == VAR_3) {

   continue;
  } else if (VAR_8 && !VAR_6) {

   continue;
  } else if (VAR_5 != VAR_4) {

   VAR_2->buffer[VAR_5] = *VAR_9;
  }

  VAR_6++;
  VAR_5 = (VAR_5 + 1) & VAR_7;

  if (VAR_8) {
   VAR_6 = 0;
   VAR_2->packet_head = VAR_5;
  }
 }

 VAR_2->head = VAR_5;
}
