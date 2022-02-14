
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
struct iio_cb_buffer {struct iio_channel* channels; } ;



struct iio_channel
*FUNC_0(const struct iio_cb_buffer *VAR_0)
{
 return VAR_0->channels;
}
