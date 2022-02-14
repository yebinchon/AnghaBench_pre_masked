
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct ipmmu_vmsa_domain {struct iommu_domain io_domain; int mutex; } ;


 int VAR_0 ;
 struct ipmmu_vmsa_domain* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_2(unsigned VAR_1)
{
 struct ipmmu_vmsa_domain *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->mutex);

 return &VAR_2->io_domain;
}
