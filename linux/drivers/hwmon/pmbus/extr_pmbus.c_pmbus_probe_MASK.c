
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_platform_data {int flags; } ;
struct pmbus_driver_info {int identify; int pages; } ;
struct pmbus_device_info {int flags; int pages; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {struct pmbus_platform_data* platform_data; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4,
         const struct i2c_device_id *VAR_5)
{
 struct pmbus_driver_info *VAR_6;
 struct pmbus_platform_data *VAR_7 = ((void*)0);
 struct device *VAR_8 = &VAR_4->dev;
 struct pmbus_device_info *VAR_9;

 VAR_6 = FUNC_0(VAR_8, sizeof(struct pmbus_driver_info), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_9 = (struct pmbus_device_info *)VAR_5->driver_data;
 if (VAR_9->flags & VAR_2) {
  VAR_7 = FUNC_0(VAR_8, sizeof(struct pmbus_platform_data),
         VAR_1);
  if (!VAR_7)
   return -VAR_0;

  VAR_7->flags = VAR_2;
 }

 VAR_6->pages = VAR_9->pages;
 VAR_6->identify = VAR_3;
 VAR_8->platform_data = VAR_7;

 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
