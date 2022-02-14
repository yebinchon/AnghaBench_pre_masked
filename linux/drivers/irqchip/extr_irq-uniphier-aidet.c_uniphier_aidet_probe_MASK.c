
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aidet_priv {int domain; int lock; int reg_base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct uniphier_aidet_priv* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct irq_domain*,int ,int ,int ,int *,struct uniphier_aidet_priv*) ;
 struct irq_domain* FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct platform_device*,struct uniphier_aidet_priv*) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8;
 struct irq_domain *VAR_9;
 struct uniphier_aidet_priv *VAR_10;

 VAR_8 = FUNC_6(VAR_7->of_node);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_8);
 FUNC_7(VAR_8);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_2(VAR_7, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->reg_base = FUNC_3(VAR_6, 0);
 if (FUNC_0(VAR_10->reg_base))
  return FUNC_1(VAR_10->reg_base);

 FUNC_10(&VAR_10->lock);

 VAR_10->domain = FUNC_4(
     VAR_9, 0,
     VAR_4,
     FUNC_8(VAR_7->of_node),
     &VAR_5, VAR_10);
 if (!VAR_10->domain)
  return -VAR_0;

 FUNC_9(VAR_6, VAR_10);

 return 0;
}
