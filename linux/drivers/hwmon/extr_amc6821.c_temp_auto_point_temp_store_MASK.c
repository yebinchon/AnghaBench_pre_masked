
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int* temp1_auto_point_temp; int* temp2_auto_point_temp; int* pwm1_auto_point_pwm; int update_lock; scalar_t__ valid; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct amc6821_data* FUNC_0 (struct device*) ;
 int FUNC_1 (long,int ,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct i2c_client*,int,int,int*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_5,
       struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct amc6821_data *VAR_9 = FUNC_0(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11 = FUNC_9(VAR_6)->index;
 int VAR_12 = FUNC_9(VAR_6)->nr;
 u8 *VAR_13;
 u8 VAR_14;
 int VAR_15;
 long VAR_16;
 int VAR_17 = FUNC_5(VAR_7, 10, &VAR_16);
 if (VAR_17)
  return VAR_17;

 switch (VAR_12) {
 case 1:
  VAR_13 = VAR_9->temp1_auto_point_temp;
  VAR_14 = VAR_0;
  break;
 case 2:
  VAR_13 = VAR_9->temp2_auto_point_temp;
  VAR_14 = VAR_2;
  break;
 default:
  FUNC_2(VAR_5, "Unknown attr->nr (%d).\n", VAR_12);
  return -VAR_3;
 }

 FUNC_6(&VAR_9->update_lock);
 VAR_9->valid = 0;

 switch (VAR_11) {
 case 0:
  VAR_13[0] = FUNC_1(VAR_16 / 1000, 0,
         VAR_9->temp1_auto_point_temp[1]);
  VAR_13[0] = FUNC_1(VAR_13[0], 0,
         VAR_9->temp2_auto_point_temp[1]);
  VAR_13[0] = FUNC_1(VAR_13[0], 0, 63);
  if (FUNC_4(
     VAR_10,
     VAR_1,
     VAR_13[0])) {
    FUNC_3(&VAR_10->dev,
     "Register write error, aborting.\n");
    VAR_8 = -VAR_4;
  }
  goto EXIT;
 case 1:
  VAR_13[1] = FUNC_1(VAR_16 / 1000, (VAR_13[0] & 0x7C) + 4, 124);
  VAR_13[1] &= 0x7C;
  VAR_13[2] = FUNC_1(VAR_13[2], VAR_13[1] + 1, 255);
  break;
 case 2:
  VAR_13[2] = FUNC_1(VAR_16 / 1000, VAR_13[1]+1, 255);
  break;
 default:
  FUNC_2(VAR_5, "Unknown attr->index (%d).\n", VAR_11);
  VAR_8 = -VAR_3;
  goto EXIT;
 }
 VAR_15 = VAR_9->pwm1_auto_point_pwm[2] - VAR_9->pwm1_auto_point_pwm[1];
 if (FUNC_8(VAR_10, VAR_14, VAR_15, VAR_13))
  VAR_8 = -VAR_4;

EXIT:
 FUNC_7(&VAR_9->update_lock);
 return VAR_8;
}
