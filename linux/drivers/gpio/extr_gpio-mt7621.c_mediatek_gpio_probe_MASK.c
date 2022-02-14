
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk {struct device* dev; int gpio_irq; int base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct mtk* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (struct device*,struct device_node*,int) ;
 int FUNC_6 (struct platform_device*,struct mtk*) ;

__attribute__((used)) static int
FUNC_7(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct mtk *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base = FUNC_3(VAR_3, 0);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->gpio_irq = FUNC_4(VAR_5, 0);
 VAR_6->dev = VAR_4;
 FUNC_6(VAR_3, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
