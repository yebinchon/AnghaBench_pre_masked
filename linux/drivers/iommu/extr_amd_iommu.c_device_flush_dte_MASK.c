
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct iommu_dev_data {size_t devid; scalar_t__ alias; TYPE_1__ ats; } ;
struct amd_iommu {int dummy; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct iommu_dev_data*,int ,unsigned long) ;
 int FUNC_1 (struct amd_iommu*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iommu_dev_data *VAR_1)
{
 struct amd_iommu *VAR_2;
 u16 VAR_3;
 int VAR_4;

 VAR_2 = VAR_0[VAR_1->devid];
 VAR_3 = VAR_1->alias;

 VAR_4 = FUNC_1(VAR_2, VAR_1->devid);
 if (!VAR_4 && VAR_3 != VAR_1->devid)
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->ats.enabled)
  VAR_4 = FUNC_0(VAR_1, 0, ~0UL);

 return VAR_4;
}
