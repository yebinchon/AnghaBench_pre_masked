
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct keystone_irq_device {int irqd; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct keystone_irq_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct keystone_irq_device* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct keystone_irq_device *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_0(VAR_2->irq, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(FUNC_3(VAR_2->irqd, VAR_3));

 FUNC_2(VAR_2->irqd);
 return 0;
}
