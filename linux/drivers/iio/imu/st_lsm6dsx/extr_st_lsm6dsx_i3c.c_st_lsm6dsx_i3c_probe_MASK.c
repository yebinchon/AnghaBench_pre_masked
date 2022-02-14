
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int reg_bits; int val_bits; } ;
struct regmap {int dummy; } ;
struct i3c_device_id {scalar_t__ data; } ;
struct i3c_device {int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*,int) ;
 struct regmap* FUNC_3 (struct i3c_device*,struct regmap_config*) ;
 struct i3c_device_id* FUNC_4 (struct i3c_device*,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ,uintptr_t,struct regmap*) ;

__attribute__((used)) static int FUNC_6(struct i3c_device *VAR_1)
{
 struct regmap_config VAR_2 = {
  .reg_bits = 8,
  .val_bits = 8,
 };
 const struct i3c_device_id *VAR_3 = FUNC_4(VAR_1,
           VAR_0);
 struct regmap *VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_1->dev, "Failed to register i3c regmap %d\n",
   (int)FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 return FUNC_5(&VAR_1->dev, 0, (uintptr_t)VAR_3->data, VAR_4);
}
