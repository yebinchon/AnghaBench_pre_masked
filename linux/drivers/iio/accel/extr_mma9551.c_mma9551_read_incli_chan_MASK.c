
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_chan_spec {int channel2; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_11,
       const struct iio_chan_spec *VAR_12,
       int *VAR_13)
{
 u8 VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 int VAR_18;

 switch (VAR_12->channel2) {
 case 130:
  VAR_17 = VAR_9;
  VAR_14 = VAR_10;
  break;
 case 129:
  VAR_17 = VAR_7;
  VAR_14 = VAR_8;
  break;
 case 128:
  VAR_17 = VAR_5;
  VAR_14 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_18 = FUNC_1(VAR_11, 1);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_11, VAR_2,
           VAR_17, &VAR_15);
 if (VAR_18 < 0)
  goto out_poweroff;

 VAR_18 = FUNC_0(VAR_11, VAR_2,
           VAR_4, &VAR_16);
 if (VAR_18 < 0)
  goto out_poweroff;

 VAR_15 &= ~VAR_3;
 VAR_16 = (VAR_16 >> VAR_14) & 0x03;

 if (VAR_16 == 1 || VAR_16 == 3)
  *VAR_13 = 90 * (VAR_16 + 1) - VAR_15;
 else
  *VAR_13 = VAR_15 + 90 * VAR_16;

 VAR_18 = VAR_1;

out_poweroff:
 FUNC_1(VAR_11, 0);
 return VAR_18;
}
