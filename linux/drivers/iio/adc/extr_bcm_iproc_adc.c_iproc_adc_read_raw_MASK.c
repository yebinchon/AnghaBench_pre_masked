
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct iio_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4,
     int *VAR_5,
     int *VAR_6,
     long VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_0(VAR_3, VAR_4->channel, &VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_5 = VAR_8;
  return VAR_2;
 case 129:
  switch (VAR_4->type) {
  case 128:
   *VAR_5 = 1800;
   *VAR_6 = 10;
   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
