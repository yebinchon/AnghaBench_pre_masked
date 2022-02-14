
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct omap_rng_dev {int clk_reg; int clk; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* cleanup ) (struct omap_rng_dev*) ;} ;


 int FUNC_0 (int ) ;
 struct omap_rng_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct omap_rng_dev*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct omap_rng_dev *VAR_1 = FUNC_1(VAR_0);


 VAR_1->pdata->cleanup(VAR_1);

 FUNC_3(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);

 FUNC_0(VAR_1->clk);
 FUNC_0(VAR_1->clk_reg);

 return 0;
}
