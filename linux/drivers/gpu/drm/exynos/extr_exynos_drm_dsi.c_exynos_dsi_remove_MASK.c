
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct exynos_dsi {int in_bridge_node; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct exynos_dsi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct exynos_dsi *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->in_bridge_node);

 FUNC_3(&VAR_1->dev);

 FUNC_0(&VAR_1->dev, &VAR_0);

 return 0;
}
