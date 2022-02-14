
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; int adapter; } ;
struct emc2103_data {int temp_count; int ** groups; int update_lock; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (struct device*) ;
 struct device* FUNC_5 (int *,int ,struct emc2103_data*,int **) ;
 struct emc2103_data* FUNC_6 (int *,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct emc2103_data*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct i2c_client *VAR_10, const struct i2c_device_id *VAR_11)
{
 struct emc2103_data *VAR_12;
 struct device *VAR_13;
 int VAR_14, VAR_15 = 0;

 if (!FUNC_7(VAR_10->adapter, VAR_3))
  return -VAR_0;

 VAR_12 = FUNC_6(&VAR_10->dev, sizeof(struct emc2103_data),
       VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_8(VAR_10, VAR_12);
 VAR_12->client = VAR_10;
 FUNC_11(&VAR_12->update_lock);


 VAR_14 = FUNC_9(VAR_10, VAR_5);
 if (VAR_14 == 0x24) {

  VAR_12->temp_count = 2;
 } else {

  VAR_14 = FUNC_9(VAR_10, VAR_4);
  if (VAR_14 < 0) {
   FUNC_2(&VAR_10->dev, "reg 0x%02x, err %d\n", VAR_4,
    VAR_14);
   return VAR_14;
  }


  VAR_12->temp_count = (VAR_14 & 0x01) ? 4 : 3;


  if (VAR_6 == 0) {

   VAR_12->temp_count = 3;
   VAR_14 &= ~(0x01);
   FUNC_10(VAR_10, VAR_4, VAR_14);
  } else if (VAR_6 == 1) {

   VAR_12->temp_count = 4;
   VAR_14 |= 0x01;
   FUNC_10(VAR_10, VAR_4, VAR_14);
  }
 }


 VAR_12->groups[VAR_15++] = &VAR_7;
 if (VAR_12->temp_count >= 3)
  VAR_12->groups[VAR_15++] = &VAR_8;
 if (VAR_12->temp_count == 4)
  VAR_12->groups[VAR_15++] = &VAR_9;

 VAR_13 = FUNC_5(&VAR_10->dev,
          VAR_10->name, VAR_12,
          VAR_12->groups);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_3(&VAR_10->dev, "%s: sensor '%s'\n",
   FUNC_4(VAR_13), VAR_10->name);

 return 0;
}
