
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* trig; } ;
struct TYPE_2__ {int attached_own_device; } ;



bool FUNC_0(struct iio_dev *VAR_0)
{
 return VAR_0->trig->attached_own_device;
}
