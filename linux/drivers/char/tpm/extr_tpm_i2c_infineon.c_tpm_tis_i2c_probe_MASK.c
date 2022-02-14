
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int adapter; } ;
struct TYPE_2__ {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &(VAR_4->dev);

 if (VAR_3.client != ((void*)0)) {
  FUNC_0(VAR_7, "This driver only supports one client at a time\n");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_4->adapter, VAR_2)) {
  FUNC_0(VAR_7, "no algorithms associated to the i2c bus\n");
  return -VAR_1;
 }

 VAR_3.client = VAR_4;
 VAR_6 = FUNC_2(&VAR_4->dev);
 if (VAR_6 != 0) {
  VAR_3.client = ((void*)0);
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
