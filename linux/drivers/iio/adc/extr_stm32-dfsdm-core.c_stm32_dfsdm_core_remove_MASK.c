
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct stm32_dfsdm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stm32_dfsdm*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct stm32_dfsdm *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_0->dev);
 FUNC_0(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);
 FUNC_6(VAR_1);

 return 0;
}
