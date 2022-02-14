
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht21 {int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*,int ,struct sht21*,int ) ;
 struct sht21* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
 const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct sht21 *VAR_9;

 if (!FUNC_4(VAR_5->adapter,
         VAR_3)) {
  FUNC_1(&VAR_5->dev,
   "adapter does not support SMBus word transactions\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->client = VAR_5;

 FUNC_5(&VAR_9->lock);

 VAR_8 = FUNC_2(VAR_7, VAR_5->name,
          VAR_9, VAR_4);
 return FUNC_0(VAR_8);
}
