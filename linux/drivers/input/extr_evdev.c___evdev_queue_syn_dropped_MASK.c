
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct input_event {int input_event_usec; scalar_t__ value; int code; int type; int input_event_sec; } ;
struct evdev_client {size_t clk_type; int head; int bufsize; int tail; int packet_head; struct input_event* buffer; TYPE_2__* evdev; } ;
typedef int ktime_t ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 struct timespec64 FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct evdev_client *VAR_3)
{
 ktime_t *VAR_4 = FUNC_0(VAR_3->evdev->handle.dev);
 struct timespec64 VAR_5 = FUNC_1(VAR_4[VAR_3->clk_type]);
 struct input_event VAR_6;

 VAR_6.input_event_sec = VAR_5.tv_sec;
 VAR_6.input_event_usec = VAR_5.tv_nsec / VAR_1;
 VAR_6.type = VAR_0;
 VAR_6.code = VAR_2;
 VAR_6.value = 0;

 VAR_3->buffer[VAR_3->head++] = VAR_6;
 VAR_3->head &= VAR_3->bufsize - 1;

 if (FUNC_2(VAR_3->head == VAR_3->tail)) {

  VAR_3->tail = (VAR_3->head - 1) & (VAR_3->bufsize - 1);
  VAR_3->packet_head = VAR_3->tail;
 }
}
