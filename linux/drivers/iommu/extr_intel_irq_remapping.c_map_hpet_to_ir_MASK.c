
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_iommu {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; struct intel_iommu* iommu; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct intel_iommu *FUNC_0(u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].id == VAR_2 && VAR_1[VAR_3].iommu)
   return VAR_1[VAR_3].iommu;
 return ((void*)0);
}
