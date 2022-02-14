
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_cmd {int dummy; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (struct iommu_cmd*) ;
 int FUNC_1 (struct amd_iommu*) ;
 int FUNC_2 (struct amd_iommu*,struct iommu_cmd*) ;

__attribute__((used)) static void FUNC_3(struct amd_iommu *VAR_0)
{
 struct iommu_cmd VAR_1;

 FUNC_0(&VAR_1);

 FUNC_2(VAR_0, &VAR_1);
 FUNC_1(VAR_0);
}
