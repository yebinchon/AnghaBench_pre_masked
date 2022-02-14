
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cplds {scalar_t__ base; int irq_mask; } ;


 scalar_t__ VAR_0 ;
 struct cplds* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct cplds *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->irq_mask, VAR_2->base + VAR_0);

 return 0;
}
