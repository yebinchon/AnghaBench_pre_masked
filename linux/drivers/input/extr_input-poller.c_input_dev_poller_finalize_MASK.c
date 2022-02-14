
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev_poller {int poll_interval; int poll_interval_max; } ;



void FUNC_0(struct input_dev_poller *VAR_0)
{
 if (!VAR_0->poll_interval)
  VAR_0->poll_interval = 500;
 if (!VAR_0->poll_interval_max)
  VAR_0->poll_interval_max = VAR_0->poll_interval;
}
