
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rng_dev {int clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;
 struct xgene_rng_dev* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct xgene_rng_dev *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(&VAR_0->dev, 0);
 if (VAR_2)
  FUNC_2(&VAR_0->dev, "RNG init wakeup failed error %d\n", VAR_2);
 if (!FUNC_0(VAR_1->clk))
  FUNC_1(VAR_1->clk);

 return VAR_2;
}
