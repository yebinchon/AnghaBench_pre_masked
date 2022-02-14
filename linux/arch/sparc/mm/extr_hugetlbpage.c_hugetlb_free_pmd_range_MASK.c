
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mmu_gather*,int *,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mmu_gather*,int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mmu_gather *VAR_1, pud_t *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4,
       unsigned long VAR_5, unsigned long VAR_6)
{
 pmd_t *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_9 = VAR_3;
 VAR_7 = FUNC_7(VAR_2, VAR_3);
 do {
  VAR_8 = FUNC_3(VAR_3, VAR_4);
  if (FUNC_6(*VAR_7))
   continue;
  if (FUNC_1(*VAR_7))
   FUNC_4(VAR_7);
  else
   FUNC_0(VAR_1, VAR_7, VAR_3);
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);

 VAR_9 &= VAR_0;
 if (VAR_9 < VAR_5)
  return;
 if (VAR_6) {
  VAR_6 &= VAR_0;
  if (!VAR_6)
   return;
 }
 if (VAR_4 - 1 > VAR_6 - 1)
  return;

 VAR_7 = FUNC_7(VAR_2, VAR_9);
 FUNC_8(VAR_2);
 FUNC_5(VAR_1, VAR_7, VAR_9);
 FUNC_2(VAR_1->mm);
}
