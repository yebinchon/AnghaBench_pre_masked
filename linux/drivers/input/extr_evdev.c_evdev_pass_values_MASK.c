
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct input_value {scalar_t__ type; scalar_t__ code; int value; } ;
struct input_event {int input_event_usec; scalar_t__ type; scalar_t__ code; int value; int input_event_sec; } ;
struct evdev_client {size_t clk_type; scalar_t__ packet_head; scalar_t__ head; int buffer_lock; scalar_t__ revoked; struct evdev* evdev; } ;
struct evdev {int wait; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct evdev_client*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct evdev_client*,struct input_event*) ;
 struct timespec64 FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct evdev_client *VAR_3,
   const struct input_value *VAR_4, unsigned int VAR_5,
   ktime_t *VAR_6)
{
 struct evdev *VAR_7 = VAR_3->evdev;
 const struct input_value *VAR_8;
 struct input_event VAR_9;
 struct timespec64 VAR_10;
 bool VAR_11 = 0;

 if (VAR_3->revoked)
  return;

 VAR_10 = FUNC_2(VAR_6[VAR_3->clk_type]);
 VAR_9.input_event_sec = VAR_10.tv_sec;
 VAR_9.input_event_usec = VAR_10.tv_nsec / VAR_1;


 FUNC_3(&VAR_3->buffer_lock);

 for (VAR_8 = VAR_4; VAR_8 != VAR_4 + VAR_5; VAR_8++) {
  if (FUNC_0(VAR_3, VAR_8->type, VAR_8->code))
   continue;

  if (VAR_8->type == VAR_0 && VAR_8->code == VAR_2) {

   if (VAR_3->packet_head == VAR_3->head)
    continue;

   VAR_11 = 1;
  }

  VAR_9.type = VAR_8->type;
  VAR_9.code = VAR_8->code;
  VAR_9.value = VAR_8->value;
  FUNC_1(VAR_3, &VAR_9);
 }

 FUNC_4(&VAR_3->buffer_lock);

 if (VAR_11)
  FUNC_5(&VAR_7->wait);
}
