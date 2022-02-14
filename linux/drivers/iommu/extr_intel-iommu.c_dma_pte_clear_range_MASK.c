
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int dummy; } ;
struct dma_pte {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (struct dma_pte*) ;
 struct dma_pte* FUNC_3 (struct dmar_domain*,unsigned long,int,unsigned int*) ;
 int FUNC_4 (struct dmar_domain*,struct dma_pte*,int) ;
 int FUNC_5 (struct dmar_domain*,unsigned long) ;
 int FUNC_6 (struct dma_pte*) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(struct dmar_domain *VAR_0,
    unsigned long VAR_1,
    unsigned long VAR_2)
{
 unsigned int VAR_3;
 struct dma_pte *VAR_4, *VAR_5;

 FUNC_0(!FUNC_5(VAR_0, VAR_1));
 FUNC_0(!FUNC_5(VAR_0, VAR_2));
 FUNC_0(VAR_1 > VAR_2);


 do {
  VAR_3 = 1;
  VAR_4 = VAR_5 = FUNC_3(VAR_0, VAR_1, 1, &VAR_3);
  if (!VAR_5) {
   VAR_1 = FUNC_1(VAR_1 + 1, VAR_3 + 1);
   continue;
  }
  do {
   FUNC_2(VAR_5);
   VAR_1 += FUNC_7(VAR_3);
   VAR_5++;
  } while (VAR_1 <= VAR_2 && !FUNC_6(VAR_5));

  FUNC_4(VAR_0, VAR_4,
       (void *)VAR_5 - (void *)VAR_4);

 } while (VAR_1 && VAR_1 <= VAR_2);
}
