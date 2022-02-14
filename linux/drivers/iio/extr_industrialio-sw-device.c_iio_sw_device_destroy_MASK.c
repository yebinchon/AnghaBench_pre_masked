
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_sw_device_type {int owner; TYPE_1__* ops; } ;
struct iio_sw_device {struct iio_sw_device_type* device_type; } ;
struct TYPE_2__ {int (* remove ) (struct iio_sw_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_sw_device*) ;

void FUNC_2(struct iio_sw_device *VAR_0)
{
 struct iio_sw_device_type *VAR_1 = VAR_0->device_type;

 VAR_1->ops->remove(VAR_0);
 FUNC_0(VAR_1->owner);
}
