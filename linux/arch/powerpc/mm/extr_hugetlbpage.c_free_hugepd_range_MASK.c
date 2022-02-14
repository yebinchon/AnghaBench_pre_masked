
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int dummy; } ;
typedef int pte_t ;
typedef int hugepd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mmu_gather*,int *) ;
 int * FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct mmu_gather*,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct mmu_gather *VAR_2, hugepd_t *VAR_3, int VAR_4,
         unsigned long VAR_5, unsigned long VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 pte_t *VAR_9 = FUNC_4(*VAR_3);
 int VAR_10;

 unsigned long VAR_11 = ~((1UL << VAR_4) - 1);
 unsigned int VAR_12 = 1;
 unsigned int VAR_13 = FUNC_5(*VAR_3);


 if (VAR_13 > VAR_4)
  VAR_12 = 1 << (VAR_13 - VAR_4);

 VAR_5 &= VAR_11;
 if (VAR_5 < VAR_7)
  return;
 if (VAR_8) {
  VAR_8 &= VAR_11;
  if (! VAR_8)
   return;
 }
 if (VAR_6 - 1 > VAR_8 - 1)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++, VAR_3++)
  *VAR_3 = FUNC_1(0);

 if (VAR_13 >= VAR_4)
  FUNC_3(VAR_2, VAR_9);
 else if (FUNC_0(VAR_0))
  FUNC_6(VAR_2, VAR_9,
     FUNC_2(VAR_1));
 else
  FUNC_6(VAR_2, VAR_9,
     FUNC_2(VAR_4 - VAR_13));
}
