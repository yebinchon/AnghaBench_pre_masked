
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct st_irq_syscfg {unsigned int syscfg; int regmap; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,struct st_irq_syscfg*) ;
 struct st_irq_syscfg* FUNC_4 (TYPE_1__*,int,int ) ;
 struct of_device_id* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_7 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 const struct of_device_id *VAR_6;
 struct st_irq_syscfg *VAR_7;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_3, &VAR_4->dev);
 if (!VAR_6)
  return -VAR_0;

 VAR_7->syscfg = (unsigned int)VAR_6->data;

 VAR_7->regmap = FUNC_7(VAR_5, "st,syscfg");
 if (FUNC_0(VAR_7->regmap)) {
  FUNC_2(&VAR_4->dev, "syscfg phandle missing\n");
  return FUNC_1(VAR_7->regmap);
 }

 FUNC_3(&VAR_4->dev, VAR_7);

 return FUNC_6(VAR_4);
}
