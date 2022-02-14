
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_irqc_priv {int irq_domain; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rza1_irqc_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rza1_irqc_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->irq_domain);
 return 0;
}
