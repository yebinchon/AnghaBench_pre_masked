
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_chan_spec {int channel2; } ;
struct i2c_client {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int) ;

int FUNC_2(struct i2c_client *VAR_6,
       const struct iio_chan_spec *VAR_7,
       int *VAR_8, int *VAR_9)
{
 u16 VAR_10;
 s16 VAR_11;
 int VAR_12;

 switch (VAR_7->channel2) {
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_6, 1);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_6, VAR_5,
           VAR_10, &VAR_11);
 if (VAR_12 < 0)
  goto out_poweroff;

 *VAR_8 = VAR_11;

 VAR_12 = VAR_1;

out_poweroff:
 FUNC_1(VAR_6, 0);
 return VAR_12;
}
