
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; int channel; } ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct iio_chan_spec const *VAR_2, int *VAR_3,
       int *VAR_4)
{
 switch (VAR_2->type) {
 case 128:
  return FUNC_0(VAR_2->channel, VAR_3, VAR_4);

 case 130:
  *VAR_3 = 1;
  return VAR_1;

 case 129:
  *VAR_3 = 100;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
