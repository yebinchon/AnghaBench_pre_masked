
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32f7_i2c_dev {int regmap; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,char*,int,int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0,
       struct stm32f7_i2c_dev *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 int VAR_3;
 u32 VAR_4, VAR_5;

 VAR_1->regmap = FUNC_3(VAR_2, "st,syscfg-fmp");
 if (FUNC_0(VAR_1->regmap)) {

  return 0;
 }

 VAR_3 = FUNC_1(VAR_2, "st,syscfg-fmp", 1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2, "st,syscfg-fmp", 2, &VAR_5);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_1->regmap, VAR_4, VAR_5, VAR_5);
}
