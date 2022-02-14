
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int fan1_div; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct amc6821_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5, const char *VAR_6,
         size_t VAR_7)
{
 struct amc6821_data *VAR_8 = FUNC_1(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 long VAR_10;
 int VAR_11 = FUNC_4(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_8->update_lock);
 VAR_11 = FUNC_2(VAR_9, VAR_1);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->dev,
   "Error reading configuration register, aborting.\n");
  VAR_7 = VAR_11;
  goto EXIT;
 }
 switch (VAR_10) {
 case 2:
  VAR_11 &= ~VAR_0;
  VAR_8->fan1_div = 2;
  break;
 case 4:
  VAR_11 |= VAR_0;
  VAR_8->fan1_div = 4;
  break;
 default:
  VAR_7 = -VAR_2;
  goto EXIT;
 }
 if (FUNC_3(VAR_9, VAR_1, VAR_11)) {
  FUNC_0(&VAR_9->dev,
   "Configuration register write error, aborting.\n");
  VAR_7 = -VAR_3;
 }
EXIT:
 FUNC_6(&VAR_8->update_lock);
 return VAR_7;
}
