
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasid_state {int invalid; int pasid; TYPE_1__* device_state; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {struct iommu_domain* domain; } ;


 int FUNC_0 (struct iommu_domain*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct pasid_state *VAR_1)
{
 struct iommu_domain *VAR_2;

 VAR_2 = VAR_1->device_state->domain;





 VAR_1->invalid = 1;


 FUNC_2();


 FUNC_0(VAR_2, VAR_1->pasid);


 FUNC_1(VAR_0);
}
