
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_channel {TYPE_1__* channel; } ;
struct iio_chan_spec_ext_info {scalar_t__ name; } ;
struct TYPE_2__ {struct iio_chan_spec_ext_info* ext_info; } ;



unsigned int FUNC_0(struct iio_channel *VAR_0)
{
 const struct iio_chan_spec_ext_info *VAR_1;
 unsigned int VAR_2 = 0;

 if (!VAR_0->channel->ext_info)
  return VAR_2;

 for (VAR_1 = VAR_0->channel->ext_info; VAR_1->name; VAR_1++)
  ++VAR_2;

 return VAR_2;
}
