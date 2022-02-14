
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {scalar_t__ pclk; scalar_t__ clk; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct msm_iommu_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->pclk);
 if (VAR_1)
  goto fail;

 if (VAR_0->clk) {
  VAR_1 = FUNC_1(VAR_0->clk);
  if (VAR_1)
   FUNC_0(VAR_0->pclk);
 }
fail:
 return VAR_1;
}
