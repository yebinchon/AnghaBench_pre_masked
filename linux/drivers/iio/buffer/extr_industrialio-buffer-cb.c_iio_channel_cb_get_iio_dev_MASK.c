
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_cb_buffer {struct iio_dev* indio_dev; } ;



struct iio_dev
*FUNC_0(const struct iio_cb_buffer *VAR_0)
{
 return VAR_0->indio_dev;
}
