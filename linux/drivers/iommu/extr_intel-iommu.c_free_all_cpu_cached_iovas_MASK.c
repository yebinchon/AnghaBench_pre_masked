
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_iommu {int cap; } ;
struct dmar_domain {int iovad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int *) ;
 struct intel_iommu** VAR_0 ;
 int VAR_1 ;
 struct dmar_domain* FUNC_2 (struct intel_iommu*,int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct intel_iommu *VAR_4 = VAR_0[VAR_3];
  struct dmar_domain *VAR_5;
  int VAR_6;

  if (!VAR_4)
   continue;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->cap); VAR_6++) {
   VAR_5 = FUNC_2(VAR_4, (u16)VAR_6);

   if (!VAR_5)
    continue;
   FUNC_1(VAR_2, &VAR_5->iovad);
  }
 }
}
