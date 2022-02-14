
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* freelist; } ;
struct dmar_domain {int dummy; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_pte*) ;
 scalar_t__ FUNC_1 (struct dma_pte*) ;
 int FUNC_2 (struct dma_pte*) ;
 int FUNC_3 (struct dma_pte*) ;
 struct dma_pte* FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int) ;

__attribute__((used)) static struct page *FUNC_6(struct dmar_domain *VAR_1,
         int VAR_2, struct dma_pte *VAR_3,
         struct page *VAR_4)
{
 struct page *VAR_5;

 VAR_5 = FUNC_5(FUNC_0(VAR_3) >> VAR_0);
 VAR_5->freelist = VAR_4;
 VAR_4 = VAR_5;

 if (VAR_2 == 1)
  return VAR_4;

 VAR_3 = FUNC_4(VAR_5);
 do {
  if (FUNC_1(VAR_3) && !FUNC_2(VAR_3))
   VAR_4 = FUNC_6(VAR_1, VAR_2 - 1,
          VAR_3, VAR_4);
  VAR_3++;
 } while (!FUNC_3(VAR_3));

 return VAR_4;
}
