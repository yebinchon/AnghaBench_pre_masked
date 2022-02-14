
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;
struct emc2103_data {int fan_multiplier; int fan_target; int valid; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 struct emc2103_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i2c_client*,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct emc2103_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8, VAR_9 = 8 / VAR_6->fan_multiplier;
 long VAR_10;

 int VAR_11 = FUNC_4(VAR_4, 10, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10 == VAR_9)
  return VAR_5;

 switch (VAR_10) {
 case 1:
  VAR_8 = 3;
  break;
 case 2:
  VAR_8 = 2;
  break;
 case 4:
  VAR_8 = 1;
  break;
 case 8:
  VAR_8 = 0;
  break;
 default:
  return -VAR_0;
 }

 FUNC_6(&VAR_6->update_lock);

 VAR_11 = FUNC_2(VAR_7, VAR_1);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_7->dev, "reg 0x%02x, err %d\n",
   VAR_1, VAR_11);
  FUNC_7(&VAR_6->update_lock);
  return VAR_11;
 }
 VAR_11 &= 0x9F;
 VAR_11 |= (VAR_8 << 5);
 FUNC_3(VAR_7, VAR_1, VAR_11);

 VAR_6->fan_multiplier = 8 / VAR_10;


 if ((VAR_6->fan_target & 0x1fe0) != 0x1fe0) {
  u16 VAR_12 = (VAR_6->fan_target * VAR_9) / VAR_10;
  VAR_6->fan_target = FUNC_5(VAR_12, (u16)0x1fff);
  FUNC_8(VAR_7, VAR_6->fan_target);
 }


 VAR_6->valid = 0;

 FUNC_7(&VAR_6->update_lock);
 return VAR_5;
}
