
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_dev_data {size_t devid; int iommu_v2; int alias; } ;
struct TYPE_2__ {struct iommu_dev_data* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct amd_iommu {int iommu; int is_iommu_v2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct amd_iommu** VAR_2 ;
 scalar_t__ FUNC_0 (struct device*) ;
 struct iommu_dev_data* FUNC_1 (int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,struct device*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3)
{
 struct iommu_dev_data *VAR_4;
 struct amd_iommu *VAR_5;
 int VAR_6;

 if (VAR_3->archdata.iommu)
  return 0;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_2[VAR_6];

 VAR_4 = FUNC_1(VAR_6);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->alias = FUNC_2(VAR_3);







 if ((FUNC_4() || !VAR_1) &&
     FUNC_0(VAR_3) && FUNC_6(FUNC_7(VAR_3))) {
  struct amd_iommu *VAR_7;

  VAR_7 = VAR_2[VAR_4->devid];
  VAR_4->iommu_v2 = VAR_7->is_iommu_v2;
 }

 VAR_3->archdata.iommu = VAR_4;

 FUNC_5(&VAR_5->iommu, VAR_3);

 return 0;
}
