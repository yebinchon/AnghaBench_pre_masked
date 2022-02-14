
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct protection_domain {int* dev_iommu; int dev_cnt; } ;
struct iommu_dev_data {size_t devid; size_t alias; int list; struct protection_domain* domain; } ;
struct amd_iommu {size_t index; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct iommu_dev_data*) ;
 int FUNC_2 (struct protection_domain*) ;
 int FUNC_3 (struct protection_domain*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iommu_dev_data *VAR_1)
{
 struct protection_domain *VAR_2 = VAR_1->domain;
 struct amd_iommu *VAR_3;
 u16 VAR_4;

 VAR_3 = VAR_0[VAR_1->devid];
 VAR_4 = VAR_1->alias;


 VAR_1->domain = ((void*)0);
 FUNC_4(&VAR_1->list);
 FUNC_0(VAR_1->devid);
 if (VAR_4 != VAR_1->devid)
  FUNC_0(VAR_4);


 FUNC_1(VAR_1);


 FUNC_3(VAR_2);


 FUNC_2(VAR_2);


 VAR_2->dev_iommu[VAR_3->index] -= 1;
 VAR_2->dev_cnt -= 1;
}
