
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int qdep; } ;
struct iommu_dev_data {size_t devid; TYPE_1__ ats; } ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int dummy; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct iommu_cmd*,size_t,int,int ,size_t) ;
 int FUNC_1 (struct amd_iommu*,struct iommu_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iommu_dev_data *VAR_1,
         u64 VAR_2, size_t VAR_3)
{
 struct amd_iommu *VAR_4;
 struct iommu_cmd VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->ats.qdep;
 VAR_4 = VAR_0[VAR_1->devid];

 FUNC_0(&VAR_5, VAR_1->devid, VAR_6, VAR_2, VAR_3);

 return FUNC_1(VAR_4, &VAR_5);
}
