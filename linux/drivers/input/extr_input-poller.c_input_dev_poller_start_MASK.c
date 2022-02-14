
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev_poller {scalar_t__ poll_interval; int input; int (* poll ) (int ) ;} ;


 int FUNC_0 (struct input_dev_poller*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct input_dev_poller *VAR_0)
{

 if (VAR_0->poll_interval > 0) {
  VAR_0->poll(VAR_0->input);
  FUNC_0(VAR_0);
 }
}
