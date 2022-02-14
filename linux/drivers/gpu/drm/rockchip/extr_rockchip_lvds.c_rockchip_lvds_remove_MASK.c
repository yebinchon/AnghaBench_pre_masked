
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_lvds {int pclk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 struct rockchip_lvds* FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct rockchip_lvds *VAR_2 = FUNC_2(&VAR_1->dev);

 FUNC_1(&VAR_1->dev, &VAR_0);
 FUNC_0(VAR_2->pclk);

 return 0;
}
