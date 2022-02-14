
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct iio_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3, int *VAR_4)
{
 switch (VAR_3->type) {
 case 128:
  return FUNC_0(VAR_2, VAR_3->channel, VAR_4);

 case 129:
  *VAR_4 = -1447;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
