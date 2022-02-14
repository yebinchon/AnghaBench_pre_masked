
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;
struct hih6130 {int write_length; int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*,int ,struct hih6130*,int ) ;
 struct hih6130* FUNC_3 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct hih6130 *VAR_9;
 struct device *VAR_10;

 if (!FUNC_4(VAR_6->adapter, VAR_3)) {
  FUNC_1(&VAR_6->dev, "adapter does not support true I2C\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->client = VAR_6;
 FUNC_5(&VAR_9->lock);

 if (!FUNC_4(VAR_6->adapter, VAR_4))
  VAR_9->write_length = 1;

 VAR_10 = FUNC_2(VAR_8, VAR_6->name,
          VAR_9,
          VAR_5);
 return FUNC_0(VAR_10);
}
