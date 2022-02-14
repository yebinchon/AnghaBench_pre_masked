
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int num_channels; struct iio_chan_spec const* channels; } ;
struct iio_chan_spec {int scan_index; } ;



const struct iio_chan_spec
*FUNC_0(struct iio_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++)
  if (VAR_0->channels[VAR_2].scan_index == VAR_1)
   return &VAR_0->channels[VAR_2];
 return ((void*)0);
}
