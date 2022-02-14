
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int cap; } ;
struct dmar_domain {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_iommu*,struct dmar_domain*,unsigned long,unsigned int,int ,int) ;
 int FUNC_2 (struct intel_iommu*) ;

__attribute__((used)) static inline void FUNC_3(struct intel_iommu *VAR_0,
     struct dmar_domain *VAR_1,
     unsigned long VAR_2, unsigned int VAR_3)
{

 if (FUNC_0(VAR_0->cap))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 0, 1);
 else
  FUNC_2(VAR_0);
}
