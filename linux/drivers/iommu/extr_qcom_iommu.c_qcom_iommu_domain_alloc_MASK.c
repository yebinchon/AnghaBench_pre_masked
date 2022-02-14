
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct qcom_iommu_domain {struct iommu_domain domain; int pgtbl_lock; int init_mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (struct qcom_iommu_domain*) ;
 struct qcom_iommu_domain* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_5(unsigned VAR_3)
{
 struct qcom_iommu_domain *VAR_4;

 if (VAR_3 != VAR_2 && VAR_3 != VAR_1)
  return ((void*)0);





 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3 == VAR_1 &&
     FUNC_0(&VAR_4->domain)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 FUNC_3(&VAR_4->init_mutex);
 FUNC_4(&VAR_4->pgtbl_lock);

 return &VAR_4->domain;
}
