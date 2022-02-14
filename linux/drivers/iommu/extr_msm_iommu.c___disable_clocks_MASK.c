
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {scalar_t__ pclk; scalar_t__ clk; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct msm_iommu_dev *VAR_0)
{
 if (VAR_0->clk)
  FUNC_0(VAR_0->clk);
 FUNC_0(VAR_0->pclk);
}
