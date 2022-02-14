
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {int name; int driver_data; } ;
struct i2c_client {int irq; int dev; } ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap_config VAR_1 ;
 int FUNC_2 (int *,struct regmap*,int ,int ,int ) ;
 struct regmap_config VAR_2 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (struct i2c_client*,struct regmap_config const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
       const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;
 const struct regmap_config *VAR_6;

 switch (VAR_4->driver_data) {
 case 129:
  VAR_6 = &VAR_1;
  break;
 case 128:
 case 130:
  VAR_6 = &VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_3, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_3(&VAR_3->dev, "failed to allocate register map\n");
  return FUNC_1(VAR_5);
 }

 return FUNC_2(&VAR_3->dev,
       VAR_5,
       VAR_4->driver_data,
       VAR_4->name,
       VAR_3->irq);
}
