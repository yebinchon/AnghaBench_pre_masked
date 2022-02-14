
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;


__attribute__((used)) static int FUNC_0(struct iio_chan_spec const *VAR_4, int *VAR_5,
       int *VAR_6)
{
 switch (VAR_4->type) {
 case 128:
  if (VAR_4->channel != VAR_0)
   return -VAR_1;

  *VAR_5 = 1;
  *VAR_6 = 100000;
  return VAR_3;

 case 130:
  *VAR_5 = 0;
  *VAR_6 = 500000;
  return VAR_3;

 case 129:
  *VAR_5 = 100;
  return VAR_2;

 default:
  return -VAR_1;
 }
}
