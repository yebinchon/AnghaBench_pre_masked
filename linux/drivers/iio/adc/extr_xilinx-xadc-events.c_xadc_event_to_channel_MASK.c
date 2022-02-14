
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {struct iio_chan_spec const* channels; } ;
struct iio_chan_spec {int dummy; } ;







__attribute__((used)) static const struct iio_chan_spec *FUNC_0(
 struct iio_dev *VAR_0, unsigned int VAR_1)
{
 switch (VAR_1) {
 case 131:
 case 130:
  return &VAR_0->channels[0];
 case 128:
 case 129:
  return &VAR_0->channels[VAR_1];
 default:
  return &VAR_0->channels[VAR_1-1];
 }
}
