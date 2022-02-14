
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* handler ) (int ,unsigned long,int) ;int arg; } ;
struct msm_iommu {TYPE_1__ base; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,unsigned long,int) ;
 int FUNC_1 (int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_0, struct device *VAR_1,
  unsigned long VAR_2, int VAR_3, void *VAR_4)
{
 struct msm_iommu *VAR_5 = VAR_4;
 if (VAR_5->base.handler)
  return VAR_5->base.handler(VAR_5->base.arg, VAR_2, VAR_3);
 FUNC_0("*** fault: iova=%16lx, flags=%d\n", VAR_2, VAR_3);
 return 0;
}
