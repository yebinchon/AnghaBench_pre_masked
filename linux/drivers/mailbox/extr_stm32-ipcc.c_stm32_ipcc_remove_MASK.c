
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_ipcc {scalar_t__ wkp; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct stm32_ipcc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct stm32_ipcc *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->wkp)
  FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_0->dev, 0);

 return 0;
}
