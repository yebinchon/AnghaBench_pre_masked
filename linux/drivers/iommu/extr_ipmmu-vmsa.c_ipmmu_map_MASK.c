
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_domain {TYPE_1__* iop; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* map ) (TYPE_1__*,unsigned long,int ,size_t,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned long,int ,size_t,int) ;
 struct ipmmu_vmsa_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_1, unsigned long VAR_2,
       phys_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 struct ipmmu_vmsa_domain *VAR_6 = FUNC_1(VAR_1);

 if (!VAR_6)
  return -VAR_0;

 return VAR_6->iop->map(VAR_6->iop, VAR_2, VAR_3, VAR_4, VAR_5);
}
