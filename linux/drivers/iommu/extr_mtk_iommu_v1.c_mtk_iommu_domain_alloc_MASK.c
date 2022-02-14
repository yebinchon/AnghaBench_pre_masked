
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct mtk_iommu_domain {struct iommu_domain domain; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct mtk_iommu_domain* FUNC_0 (int,int ) ;

__attribute__((used)) static struct iommu_domain *FUNC_1(unsigned VAR_2)
{
 struct mtk_iommu_domain *VAR_3;

 if (VAR_2 != VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 return &VAR_3->domain;
}
