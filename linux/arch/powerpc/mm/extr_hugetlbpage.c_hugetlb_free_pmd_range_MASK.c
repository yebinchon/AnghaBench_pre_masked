
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int hugepd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmu_gather*,int *,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct mmu_gather*,int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct mmu_gather *VAR_2, pud_t *VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, unsigned long VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_4;
 do {
  unsigned long VAR_11;

  VAR_8 = FUNC_9(VAR_3, VAR_4);
  VAR_9 = FUNC_6(VAR_4, VAR_5);
  if (!FUNC_4(FUNC_1(FUNC_10(*VAR_8)))) {




   FUNC_0(!FUNC_8(VAR_8));
   continue;
  }






  VAR_11 = VAR_4 + (1 << FUNC_3(*(hugepd_t *)VAR_8));
  if (VAR_11 > VAR_9)
   VAR_9 = VAR_11;

  FUNC_2(VAR_2, (hugepd_t *)VAR_8, VAR_0,
      VAR_4, VAR_9, VAR_6, VAR_7);
 } while (VAR_4 = VAR_9, VAR_4 != VAR_5);

 VAR_10 &= VAR_1;
 if (VAR_10 < VAR_6)
  return;
 if (VAR_7) {
  VAR_7 &= VAR_1;
  if (!VAR_7)
   return;
 }
 if (VAR_5 - 1 > VAR_7 - 1)
  return;

 VAR_8 = FUNC_9(VAR_3, VAR_10);
 FUNC_11(VAR_3);
 FUNC_7(VAR_2, VAR_8, VAR_10);
 FUNC_5(VAR_2->mm);
}
