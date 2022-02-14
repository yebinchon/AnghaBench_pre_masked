
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {struct dma_pte* pgd; int agaw; } ;
struct dma_pte {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_pte*) ;
 int FUNC_2 (struct dma_pte*) ;
 scalar_t__ FUNC_3 (struct dma_pte*) ;
 int FUNC_4 (unsigned long,int) ;
 struct dma_pte* FUNC_5 (int ) ;

__attribute__((used)) static struct dma_pte *FUNC_6(struct dmar_domain *VAR_0,
      unsigned long VAR_1,
      int VAR_2, int *VAR_3)
{
 struct dma_pte *VAR_4, *VAR_5;
 int VAR_6 = FUNC_0(VAR_0->agaw);
 int VAR_7;

 VAR_4 = VAR_0->pgd;
 while (VAR_2 <= VAR_6) {
  VAR_7 = FUNC_4(VAR_1, VAR_6);
  VAR_5 = &VAR_4[VAR_7];
  if (VAR_2 == VAR_6)
   return VAR_5;

  if (!FUNC_2(VAR_5)) {
   *VAR_3 = VAR_6;
   break;
  }

  if (FUNC_3(VAR_5)) {
   *VAR_3 = VAR_6;
   return VAR_5;
  }

  VAR_4 = FUNC_5(FUNC_1(VAR_5));
  VAR_6--;
 }
 return ((void*)0);
}
