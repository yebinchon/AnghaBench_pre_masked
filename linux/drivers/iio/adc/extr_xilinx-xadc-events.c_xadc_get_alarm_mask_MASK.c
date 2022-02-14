
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {scalar_t__ type; int channel; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(const struct iio_chan_spec *VAR_8)
{
 if (VAR_8->type == VAR_0)
  return VAR_1;
 switch (VAR_8->channel) {
 case 0:
  return VAR_4;
 case 1:
  return VAR_2;
 case 2:
  return VAR_3;
 case 3:
  return VAR_7;
 case 4:
  return VAR_6;
 case 5:
  return VAR_5;
 default:

  return 0;
 }
}
