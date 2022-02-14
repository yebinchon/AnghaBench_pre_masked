
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpi2c_imx_struct {int adapter; } ;


 int FUNC_0 (int *) ;
 struct lpi2c_imx_struct* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct lpi2c_imx_struct *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adapter);

 FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 return 0;
}
