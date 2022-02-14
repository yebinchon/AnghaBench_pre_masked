
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_gpio_sb {scalar_t__ nirq; int irq_domain; int gc; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct xgene_gpio_sb* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct xgene_gpio_sb *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->nirq > 0) {
  FUNC_0(&VAR_1->gc);
 }

 FUNC_1(VAR_1->irq_domain);

 return 0;
}
