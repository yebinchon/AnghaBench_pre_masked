
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct max31790_data {long* pwm; int* fan_config; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct max31790_data* FUNC_2 (struct device*) ;


 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, u32 VAR_5, int VAR_6,
         long VAR_7)
{
 struct max31790_data *VAR_8 = FUNC_2(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 u8 VAR_10;
 int VAR_11 = 0;

 FUNC_5(&VAR_8->update_lock);

 switch (VAR_5) {
 case 128:
  if (VAR_7 < 0 || VAR_7 > 255) {
   VAR_11 = -VAR_0;
   break;
  }
  VAR_8->pwm[VAR_6] = VAR_7 << 8;
  VAR_11 = FUNC_4(VAR_9,
         FUNC_1(VAR_6),
         VAR_8->pwm[VAR_6]);
  break;
 case 129:
  VAR_10 = VAR_8->fan_config[VAR_6];
  if (VAR_7 == 0) {
   VAR_10 &= ~(VAR_3 |
     VAR_2);
  } else if (VAR_7 == 1) {
   VAR_10 = (VAR_10 |
          VAR_3) &
         ~VAR_2;
  } else if (VAR_7 == 2) {
   VAR_10 |= VAR_3 |
          VAR_2;
  } else {
   VAR_11 = -VAR_0;
   break;
  }
  VAR_8->fan_config[VAR_6] = VAR_10;
  VAR_11 = FUNC_3(VAR_9,
     FUNC_0(VAR_6),
     VAR_10);
  break;
 default:
  VAR_11 = -VAR_1;
  break;
 }

 FUNC_6(&VAR_8->update_lock);

 return VAR_11;
}
