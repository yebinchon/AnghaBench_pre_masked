
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int * prq; scalar_t__ pr_irq; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long long) ;
 int FUNC_2 (scalar_t__,struct intel_iommu*) ;
 int FUNC_3 (unsigned long,int ) ;

int FUNC_4(struct intel_iommu *VAR_4)
{
 FUNC_1(VAR_4->reg + VAR_1, 0ULL);
 FUNC_1(VAR_4->reg + VAR_2, 0ULL);
 FUNC_1(VAR_4->reg + VAR_0, 0ULL);

 if (VAR_4->pr_irq) {
  FUNC_2(VAR_4->pr_irq, VAR_4);
  FUNC_0(VAR_4->pr_irq);
  VAR_4->pr_irq = 0;
 }

 FUNC_3((unsigned long)VAR_4->prq, VAR_3);
 VAR_4->prq = ((void*)0);

 return 0;
}
