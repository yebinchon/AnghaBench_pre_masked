
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm78_data {int type; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct lm78_data*,int ) ;
 struct lm78_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct lm78_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct device *VAR_6;
 struct lm78_data *VAR_7;

 VAR_7 = FUNC_2(VAR_5, sizeof(struct lm78_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->client = VAR_3;
 VAR_7->type = VAR_4->driver_data;


 FUNC_3(VAR_7);

 VAR_6 = FUNC_1(VAR_5, VAR_3->name,
          VAR_7, VAR_2);
 return FUNC_0(VAR_6);
}
