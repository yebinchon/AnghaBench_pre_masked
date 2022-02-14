
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct st_irq_syscfg {int config; int syscfg; int regmap; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct st_irq_syscfg* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*,char*,int,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct platform_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 struct st_irq_syscfg *VAR_5 = FUNC_2(&VAR_3->dev);
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10;

 VAR_6 = FUNC_3(VAR_4, "st,irq-device");
 if (VAR_6 != VAR_2) {
  FUNC_1(&VAR_3->dev, "st,enable-irq-device must have 2 elems\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_4, "st,fiq-device");
 if (VAR_6 != VAR_2) {
  FUNC_1(&VAR_3->dev, "st,enable-fiq-device must have 2 elems\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_5(VAR_4, "st,irq-device", VAR_8, &VAR_9);

  VAR_7 = FUNC_7(VAR_3, VAR_9, VAR_8, 1);
  if (VAR_7)
   return VAR_7;

  FUNC_5(VAR_4, "st,fiq-device", VAR_8, &VAR_9);

  VAR_7 = FUNC_7(VAR_3, VAR_9, VAR_8, 0);
  if (VAR_7)
   return VAR_7;
 }


 FUNC_4(VAR_4, "st,invert-ext", &VAR_10);
 VAR_5->config |= FUNC_0(VAR_10);

 return FUNC_6(VAR_5->regmap, VAR_5->syscfg,
      VAR_1, VAR_5->config);
}
