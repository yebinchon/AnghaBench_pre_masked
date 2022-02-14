
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct i2c_adapter* adapter; struct device dev; } ;
struct i2c_adapter {int dummy; } ;
struct attribute_group {int dummy; } ;
struct ad7418_data {int type; int adc_max; struct i2c_client* client; int lock; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;

 struct attribute_group** VAR_5 ;

 struct attribute_group** VAR_6 ;

 struct attribute_group** VAR_7 ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct device* FUNC_3 (struct device*,int ,struct ad7418_data*,struct attribute_group const**) ;
 struct ad7418_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_adapter*,int) ;
 int FUNC_6 (struct i2c_client*,struct ad7418_data*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct i2c_adapter *VAR_11 = VAR_8->adapter;
 struct ad7418_data *VAR_12;
 struct device *VAR_13;
 const struct attribute_group **VAR_14 = ((void*)0);

 if (!FUNC_5(VAR_11, VAR_3 |
     VAR_4))
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_10, sizeof(struct ad7418_data), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 FUNC_6(VAR_8, VAR_12);

 FUNC_7(&VAR_12->lock);
 VAR_12->client = VAR_8;
 if (VAR_10->of_node)
  VAR_12->type = (enum chips)FUNC_8(VAR_10);
 else
  VAR_12->type = VAR_9->driver_data;

 switch (VAR_12->type) {
 case 130:
  VAR_12->adc_max = 0;
  VAR_14 = VAR_5;
  break;

 case 129:
  VAR_12->adc_max = 4;
  VAR_14 = VAR_6;
  break;

 case 128:
  VAR_12->adc_max = 1;
  VAR_14 = VAR_7;
  break;
 }

 FUNC_2(VAR_10, "%s chip found\n", VAR_8->name);


 FUNC_1(VAR_8);

 VAR_13 = FUNC_3(VAR_10,
          VAR_8->name,
          VAR_12, VAR_14);
 return FUNC_0(VAR_13);
}
