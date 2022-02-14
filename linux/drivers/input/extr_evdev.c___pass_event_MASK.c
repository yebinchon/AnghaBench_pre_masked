
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {scalar_t__ type; scalar_t__ code; scalar_t__ value; int input_event_usec; int input_event_sec; } ;
struct evdev_client {int head; int bufsize; int tail; int packet_head; int fasync; struct input_event* buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct evdev_client *VAR_5,
    const struct input_event *VAR_6)
{
 VAR_5->buffer[VAR_5->head++] = *VAR_6;
 VAR_5->head &= VAR_5->bufsize - 1;

 if (FUNC_1(VAR_5->head == VAR_5->tail)) {




  VAR_5->tail = (VAR_5->head - 2) & (VAR_5->bufsize - 1);

  VAR_5->buffer[VAR_5->tail].input_event_sec =
      VAR_6->input_event_sec;
  VAR_5->buffer[VAR_5->tail].input_event_usec =
      VAR_6->input_event_usec;
  VAR_5->buffer[VAR_5->tail].type = VAR_0;
  VAR_5->buffer[VAR_5->tail].code = VAR_3;
  VAR_5->buffer[VAR_5->tail].value = 0;

  VAR_5->packet_head = VAR_5->tail;
 }

 if (VAR_6->type == VAR_0 && VAR_6->code == VAR_4) {
  VAR_5->packet_head = VAR_5->head;
  FUNC_0(&VAR_5->fasync, VAR_2, VAR_1);
 }
}
