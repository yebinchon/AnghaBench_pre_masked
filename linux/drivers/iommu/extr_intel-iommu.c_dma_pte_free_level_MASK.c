
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int dummy; } ;
struct dma_pte {int dummy; } ;


 int FUNC_0 (struct dma_pte*) ;
 int FUNC_1 (struct dma_pte*) ;
 int FUNC_2 (struct dma_pte*) ;
 scalar_t__ FUNC_3 (struct dma_pte*) ;
 int FUNC_4 (struct dmar_domain*,struct dma_pte*,int) ;
 int FUNC_5 (struct dma_pte*) ;
 int FUNC_6 (struct dma_pte*) ;
 unsigned long FUNC_7 (int) ;
 unsigned long FUNC_8 (int) ;
 unsigned long FUNC_9 (unsigned long,unsigned long) ;
 size_t FUNC_10 (unsigned long,int) ;
 struct dma_pte* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct dmar_domain *VAR_0, int VAR_1,
          int VAR_2, struct dma_pte *VAR_3,
          unsigned long VAR_4, unsigned long VAR_5,
          unsigned long VAR_6)
{
 VAR_4 = FUNC_9(VAR_5, VAR_4);
 VAR_3 = &VAR_3[FUNC_10(VAR_4, VAR_1)];

 do {
  unsigned long VAR_7;
  struct dma_pte *VAR_8;

  if (!FUNC_2(VAR_3) || FUNC_3(VAR_3))
   goto next;

  VAR_7 = VAR_4 & FUNC_7(VAR_1);
  VAR_8 = FUNC_11(FUNC_1(VAR_3));

  if (VAR_1 > 2) {
   FUNC_12(VAR_0, VAR_1 - 1, VAR_2,
        VAR_8, VAR_7, VAR_5,
        VAR_6);
  }





  if (VAR_1 < VAR_2 && !(VAR_5 > VAR_7 ||
        VAR_6 < VAR_7 + FUNC_8(VAR_1) - 1)) {
   FUNC_0(VAR_3);
   FUNC_4(VAR_0, VAR_3, sizeof(*VAR_3));
   FUNC_6(VAR_8);
  }
next:
  VAR_4 += FUNC_8(VAR_1);
 } while (!FUNC_5(++VAR_3) && VAR_4 <= VAR_6);
}
