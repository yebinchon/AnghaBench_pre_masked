
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cdns_dsi {int base; } ;


 int FUNC_0 (int *) ;
 struct cdns_dsi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct cdns_dsi *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->base);
 FUNC_2(&VAR_0->dev);

 return 0;
}
