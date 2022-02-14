
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {TYPE_1__* poller; } ;
struct TYPE_2__ {unsigned int poll_interval_max; } ;


 scalar_t__ FUNC_0 (struct input_dev*) ;

void FUNC_1(struct input_dev *VAR_0, unsigned int VAR_1)
{
 if (FUNC_0(VAR_0))
  VAR_0->poller->poll_interval_max = VAR_1;
}
