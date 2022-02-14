
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* event_interface; } ;
struct TYPE_2__ {int wait; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct iio_dev *VAR_0)
{
 if (VAR_0->event_interface == ((void*)0))
  return;
 FUNC_0(&VAR_0->event_interface->wait);
}
