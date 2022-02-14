
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasid_table_opaque {scalar_t__ segment; scalar_t__ bus; scalar_t__ devfn; scalar_t__* pasid_table; } ;
struct device_domain_info {scalar_t__ bus; scalar_t__ devfn; scalar_t__ pasid_table; TYPE_1__* iommu; } ;
struct TYPE_2__ {scalar_t__ segment; } ;



__attribute__((used)) static int FUNC_0(struct device_domain_info *VAR_0, void *VAR_1)
{
 struct pasid_table_opaque *VAR_2 = VAR_1;

 if (VAR_0->iommu->segment == VAR_2->segment &&
     VAR_0->bus == VAR_2->bus &&
     VAR_0->devfn == VAR_2->devfn &&
     VAR_0->pasid_table) {
  *VAR_2->pasid_table = VAR_0->pasid_table;
  return 1;
 }

 return 0;
}
