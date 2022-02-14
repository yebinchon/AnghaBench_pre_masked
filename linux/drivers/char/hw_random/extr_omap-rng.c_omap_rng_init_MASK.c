
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_rng_dev {TYPE_1__* pdata; } ;
struct hwrng {scalar_t__ priv; } ;
struct TYPE_2__ {int (* init ) (struct omap_rng_dev*) ;} ;


 int FUNC_0 (struct omap_rng_dev*) ;

__attribute__((used)) static int FUNC_1(struct hwrng *VAR_0)
{
 struct omap_rng_dev *VAR_1;

 VAR_1 = (struct omap_rng_dev *)VAR_0->priv;
 return VAR_1->pdata->init(VAR_1);
}
