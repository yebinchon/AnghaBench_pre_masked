
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int iommu_superpage; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct dmar_domain *VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4,
       unsigned long VAR_5)
{
 int VAR_6, VAR_7 = 1;
 unsigned long VAR_8;

 VAR_6 = VAR_2->iommu_superpage;





 VAR_8 = VAR_3 | VAR_4;

 while (VAR_6 && !(VAR_8 & ~VAR_0)) {
  VAR_5 >>= VAR_1;
  if (!VAR_5)
   break;
  VAR_8 >>= VAR_1;
  VAR_7++;
  VAR_6--;
 }
 return VAR_7;
}
