
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_sw_device_type {int owner; TYPE_1__* ops; } ;
struct iio_sw_device {struct iio_sw_device_type* device_type; } ;
struct TYPE_2__ {struct iio_sw_device* (* probe ) (char const*) ;} ;


 int VAR_0 ;
 struct iio_sw_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iio_sw_device*) ;
 struct iio_sw_device_type* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 struct iio_sw_device* FUNC_5 (char const*) ;

struct iio_sw_device *FUNC_6(const char *VAR_1, const char *VAR_2)
{
 struct iio_sw_device *VAR_3;
 struct iio_sw_device_type *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_4("Invalid device type: %s\n", VAR_1);
  return FUNC_0(-VAR_0);
 }
 VAR_3 = VAR_4->ops->probe(VAR_2);
 if (FUNC_1(VAR_3))
  goto out_module_put;

 VAR_3->device_type = VAR_4;

 return VAR_3;
out_module_put:
 FUNC_3(VAR_4->owner);
 return VAR_3;
}
