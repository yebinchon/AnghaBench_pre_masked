
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uinput_device {size_t head; int waitq; TYPE_1__* buff; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {unsigned int type; unsigned int code; int value; int input_event_usec; int input_event_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uinput_device* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct uinput_device *VAR_6 = FUNC_0(VAR_2);
 struct timespec64 VAR_7;

 VAR_6->buff[VAR_6->head].type = VAR_3;
 VAR_6->buff[VAR_6->head].code = VAR_4;
 VAR_6->buff[VAR_6->head].value = VAR_5;
 FUNC_1(&VAR_7);
 VAR_6->buff[VAR_6->head].input_event_sec = VAR_7.tv_sec;
 VAR_6->buff[VAR_6->head].input_event_usec = VAR_7.tv_nsec / VAR_0;
 VAR_6->head = (VAR_6->head + 1) % VAR_1;

 FUNC_2(&VAR_6->waitq);

 return 0;
}
