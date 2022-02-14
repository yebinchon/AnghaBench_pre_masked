
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm73_data {int ctrl; int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct device* FUNC_3 (struct device*,int ,struct lm73_data*,int ) ;
 struct lm73_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct device *VAR_7;
 struct lm73_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_6, sizeof(struct lm73_data), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->client = VAR_4;
 FUNC_6(&VAR_8->lock);

 VAR_9 = FUNC_5(VAR_4, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->ctrl = VAR_9;

 VAR_7 = FUNC_3(VAR_6, VAR_4->name,
          VAR_8, VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_2(VAR_6, "sensor '%s'\n", VAR_4->name);

 return 0;
}
