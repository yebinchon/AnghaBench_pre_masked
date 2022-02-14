
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;
struct g762_data {int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct g762_data*,int ) ;
 struct g762_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*) ;
 int VAR_4 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct g762_data*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct g762_data *VAR_9;
 int VAR_10;

 if (!FUNC_7(VAR_5->adapter,
         VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7, sizeof(struct g762_data), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_8(VAR_5, VAR_9);
 VAR_9->client = VAR_5;
 FUNC_9(&VAR_9->update_lock);


 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_5->name,
           VAR_9, VAR_4);
 return FUNC_0(VAR_8);
}
