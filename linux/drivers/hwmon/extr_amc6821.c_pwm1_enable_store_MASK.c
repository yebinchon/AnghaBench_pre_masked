
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct amc6821_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
     struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct amc6821_data *VAR_9 = FUNC_1(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 long VAR_11;
 int VAR_12 = FUNC_4(VAR_7, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_5(&VAR_9->update_lock);
 VAR_12 = FUNC_2(VAR_10, VAR_2);
 if (VAR_12 < 0) {
   FUNC_0(&VAR_10->dev,
   "Error reading configuration register, aborting.\n");
   VAR_8 = VAR_12;
   goto unlock;
 }

 switch (VAR_11) {
 case 1:
  VAR_12 &= ~VAR_0;
  VAR_12 &= ~VAR_1;
  break;
 case 2:
  VAR_12 &= ~VAR_0;
  VAR_12 |= VAR_1;
  break;
 case 3:
  VAR_12 |= VAR_0;
  VAR_12 |= VAR_1;
  break;
 default:
  VAR_8 = -VAR_3;
  goto unlock;
 }
 if (FUNC_3(VAR_10, VAR_2, VAR_12)) {
   FUNC_0(&VAR_10->dev,
   "Configuration register write error, aborting.\n");
   VAR_8 = -VAR_4;
 }
unlock:
 FUNC_6(&VAR_9->update_lock);
 return VAR_8;
}
