
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_iommu {struct dmar_domain*** domains; } ;
struct dmar_domain {int dummy; } ;



__attribute__((used)) static struct dmar_domain* FUNC_0(struct intel_iommu *VAR_0, u16 VAR_1)
{
 struct dmar_domain **VAR_2;
 int VAR_3 = VAR_1 >> 8;

 VAR_2 = VAR_0->domains[VAR_3];
 if (!VAR_2)
  return ((void*)0);

 return VAR_2[VAR_1 & 0xff];
}
