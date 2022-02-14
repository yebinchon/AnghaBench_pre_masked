
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dmar_domain {int dummy; } ;
struct dma_pte {int dummy; } ;


 int FUNC_0 (struct dma_pte*) ;
 int FUNC_1 (struct dma_pte*) ;
 struct page* FUNC_2 (struct dmar_domain*,int,struct dma_pte*,struct page*) ;
 int FUNC_3 (struct dma_pte*) ;
 int FUNC_4 (struct dma_pte*) ;
 int FUNC_5 (struct dmar_domain*,struct dma_pte*,int) ;
 int FUNC_6 (struct dma_pte*) ;
 unsigned long FUNC_7 (int) ;
 unsigned long FUNC_8 (int) ;
 unsigned long FUNC_9 (unsigned long,unsigned long) ;
 size_t FUNC_10 (unsigned long,int) ;
 struct dma_pte* FUNC_11 (int ) ;

__attribute__((used)) static struct page *FUNC_12(struct dmar_domain *VAR_0, int VAR_1,
     struct dma_pte *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4,
     unsigned long VAR_5,
     struct page *VAR_6)
{
 struct dma_pte *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

 VAR_3 = FUNC_9(VAR_4, VAR_3);
 VAR_2 = &VAR_2[FUNC_10(VAR_3, VAR_1)];

 do {
  unsigned long VAR_9;

  if (!FUNC_3(VAR_2))
   goto next;

  VAR_9 = VAR_3 & FUNC_7(VAR_1);


  if (VAR_4 <= VAR_9 &&
      VAR_5 >= VAR_9 + FUNC_8(VAR_1) - 1) {


   if (VAR_1 > 1 && !FUNC_4(VAR_2))
    VAR_6 = FUNC_2(VAR_0, VAR_1 - 1, VAR_2, VAR_6);

   FUNC_0(VAR_2);
   if (!VAR_7)
    VAR_7 = VAR_2;
   VAR_8 = VAR_2;
  } else if (VAR_1 > 1) {

   VAR_6 = FUNC_12(VAR_0, VAR_1 - 1,
             FUNC_11(FUNC_1(VAR_2)),
             VAR_9, VAR_4, VAR_5,
             VAR_6);
  }
next:
  VAR_3 += FUNC_8(VAR_1);
 } while (!FUNC_6(++VAR_2) && VAR_3 <= VAR_5);

 if (VAR_7)
  FUNC_5(VAR_0, VAR_7,
       (void *)++VAR_8 - (void *)VAR_7);

 return VAR_6;
}
