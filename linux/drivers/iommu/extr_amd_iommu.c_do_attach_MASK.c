
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct protection_domain {int* dev_iommu; int dev_cnt; int dev_list; } ;
struct TYPE_2__ {int enabled; } ;
struct iommu_dev_data {size_t devid; size_t alias; int iommu_v2; int list; struct protection_domain* domain; TYPE_1__ ats; } ;
struct amd_iommu {size_t index; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct iommu_dev_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (size_t,struct protection_domain*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct iommu_dev_data *VAR_1,
        struct protection_domain *VAR_2)
{
 struct amd_iommu *VAR_3;
 u16 VAR_4;
 bool VAR_5;

 VAR_3 = VAR_0[VAR_1->devid];
 VAR_4 = VAR_1->alias;
 VAR_5 = VAR_1->ats.enabled;


 VAR_1->domain = VAR_2;
 FUNC_1(&VAR_1->list, &VAR_2->dev_list);


 VAR_2->dev_iommu[VAR_3->index] += 1;
 VAR_2->dev_cnt += 1;


 FUNC_2(VAR_1->devid, VAR_2, VAR_5, VAR_1->iommu_v2);
 if (VAR_4 != VAR_1->devid)
  FUNC_2(VAR_4, VAR_2, VAR_5, VAR_1->iommu_v2);

 FUNC_0(VAR_1);
}
