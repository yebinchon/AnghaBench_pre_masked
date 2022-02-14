
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7802_data {int access_lock; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (struct device*,int ,struct nct7802_data*,int ) ;
 struct nct7802_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (struct nct7802_data*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct nct7802_data *VAR_7;
 struct device *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->regmap = FUNC_5(VAR_4, &VAR_3);
 if (FUNC_0(VAR_7->regmap))
  return FUNC_1(VAR_7->regmap);

 FUNC_6(&VAR_7->access_lock);

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_3(VAR_6, VAR_4->name,
          VAR_7,
          VAR_2);
 return FUNC_2(VAR_8);
}
