
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max31856_data {int dummy; } ;
struct iio_chan_spec {int channel2; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct max31856_data*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct max31856_data *VAR_7,
          struct iio_chan_spec const *VAR_8,
          int *VAR_9)
{
 int VAR_10, VAR_11;
 u8 VAR_12[3];

 switch (VAR_8->channel2) {
 case 128:




  VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_12, 3);
  if (VAR_10)
   return VAR_10;

  *VAR_9 = (VAR_12[0] << 16 | VAR_12[1] << 8 | VAR_12[2]) >> 5;

  if (VAR_12[0] & 0x80)
   *VAR_9 -= 0x80000;
  break;

 case 129:




  VAR_10 = FUNC_0(VAR_7, VAR_2, VAR_12, 3);
  if (VAR_10)
   return VAR_10;

  VAR_11 = VAR_12[0];

  *VAR_9 = (VAR_12[1] << 8 | VAR_12[2]) >> 2;

  *VAR_9 += VAR_11;

  if (VAR_12[1] & 0x80)
   *VAR_9 -= 0x4000;
  break;

 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_6, VAR_12, 1);
 if (VAR_10)
  return VAR_10;

 if (VAR_12[0] & (VAR_4 | VAR_3))
  return -VAR_1;

 return VAR_10;
}
