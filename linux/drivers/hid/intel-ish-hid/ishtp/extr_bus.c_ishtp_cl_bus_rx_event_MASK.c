
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_device {int event_work; scalar_t__ event_cb; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ishtp_cl_device *VAR_0)
{
 if (!VAR_0 || !VAR_0->event_cb)
  return;

 if (VAR_0->event_cb)
  FUNC_0(&VAR_0->event_work);
}
