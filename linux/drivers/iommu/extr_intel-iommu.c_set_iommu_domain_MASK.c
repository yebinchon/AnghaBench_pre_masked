
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_iommu {struct dmar_domain*** domains; } ;
struct dmar_domain {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct dmar_domain** FUNC_1 (size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_iommu *VAR_1, u16 VAR_2,
        struct dmar_domain *VAR_3)
{
 struct dmar_domain **VAR_4;
 int VAR_5 = VAR_2 >> 8;

 if (!VAR_1->domains[VAR_5]) {
  size_t VAR_6 = 256 * sizeof(struct dmar_domain *);
  VAR_1->domains[VAR_5] = FUNC_1(VAR_6, VAR_0);
 }

 VAR_4 = VAR_1->domains[VAR_5];
 if (FUNC_0(!VAR_4))
  return;
 else
  VAR_4[VAR_2 & 0xff] = VAR_3;
}
