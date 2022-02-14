
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_2__* event_interface; } ;
struct TYPE_3__ {TYPE_2__* attrs; } ;
struct TYPE_4__ {TYPE_1__ group; int dev_attr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct iio_dev *VAR_0)
{
 if (VAR_0->event_interface == ((void*)0))
  return;
 FUNC_0(&VAR_0->event_interface->dev_attr_list);
 FUNC_1(VAR_0->event_interface->group.attrs);
 FUNC_1(VAR_0->event_interface);
}
