
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 struct pmbus_driver_info* FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int *) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct pmbus_driver_info *VAR_12;
 u8 VAR_13[VAR_6];
 int VAR_14;

 if (!FUNC_2(
   VAR_10->adapter,
   VAR_4
   | VAR_5
   | VAR_3))
  return -VAR_0;





 FUNC_4(VAR_10, VAR_8, 0);


 VAR_14 = FUNC_3(VAR_10, VAR_7, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_10->dev, "Failed to read PMBUS_MFR_ID\n");
  return VAR_14;
 }
 if (VAR_14 != 2 || FUNC_6(VAR_13, "XP", 2)) {
  FUNC_0(&VAR_10->dev, "MFR_ID unrecognized\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_1(&VAR_10->dev, &VAR_9,
       sizeof(struct pmbus_driver_info),
       VAR_2);
 if (!VAR_12)
  return -VAR_1;

 return FUNC_5(VAR_10, VAR_11, VAR_12);
}
