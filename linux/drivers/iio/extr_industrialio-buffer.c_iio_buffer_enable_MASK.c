
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_buffer {TYPE_1__* access; } ;
struct TYPE_2__ {int (* enable ) (struct iio_buffer*,struct iio_dev*) ;} ;


 int FUNC_0 (struct iio_buffer*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_buffer *VAR_0,
 struct iio_dev *VAR_1)
{
 if (!VAR_0->access->enable)
  return 0;
 return VAR_0->access->enable(VAR_0, VAR_1);
}
