
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;

 int FUNC_0 (struct iio_dev*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int VAR_3, int VAR_4, long VAR_5)
{
 if (VAR_4 != 0)
  return -VAR_0;

 switch (VAR_5) {
 case 128:
  return FUNC_0(VAR_1, VAR_3, VAR_2->channel);
 default:
  return -VAR_0;
 }
}
