
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct cdce706_dev_data {int regmap; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cdce706_dev_data*) ;
 int FUNC_2 (struct cdce706_dev_data*) ;
 int FUNC_3 (struct cdce706_dev_data*) ;
 int FUNC_4 (struct cdce706_dev_data*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct cdce706_dev_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_adapter*,int ) ;
 int FUNC_9 (struct i2c_client*,struct cdce706_dev_data*) ;
 int FUNC_10 (int ,int ,struct cdce706_dev_data*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct cdce706_dev_data *VAR_10;
 int VAR_11;

 if (!FUNC_8(VAR_9, VAR_4))
  return -VAR_1;

 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->client = VAR_7;
 VAR_10->regmap = FUNC_7(VAR_7, &VAR_5);
 if (FUNC_0(VAR_10->regmap)) {
  FUNC_5(&VAR_7->dev, "Failed to initialize regmap\n");
  return -VAR_0;
 }

 FUNC_9(VAR_7, VAR_10);

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 return FUNC_10(VAR_7->dev.of_node, VAR_6,
          VAR_10);
}
