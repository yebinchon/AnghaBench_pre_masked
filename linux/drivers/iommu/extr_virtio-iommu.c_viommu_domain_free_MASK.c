
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viommu_domain {int id; TYPE_1__* viommu; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int domain_ids; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (struct viommu_domain*) ;
 struct viommu_domain* FUNC_3 (struct iommu_domain*) ;
 int FUNC_4 (struct viommu_domain*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct iommu_domain *VAR_0)
{
 struct viommu_domain *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0);


 FUNC_4(VAR_1, 0, 0);

 if (VAR_1->viommu)
  FUNC_0(&VAR_1->viommu->domain_ids, VAR_1->id);

 FUNC_2(VAR_1);
}
