
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pgd_t ;
typedef int hugepd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmu_gather*,int *,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmu_gather*,int *,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct mmu_gather *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, unsigned long VAR_5)
{
 pgd_t *VAR_6;
 unsigned long VAR_7;
 do {
  VAR_7 = FUNC_5(VAR_2, VAR_3);
  VAR_6 = FUNC_7(VAR_1->mm, VAR_2);
  if (!FUNC_4(FUNC_0(FUNC_8(*VAR_6)))) {
   if (FUNC_6(VAR_6))
    continue;
   FUNC_3(VAR_1, VAR_6, VAR_2, VAR_7, VAR_4, VAR_5);
  } else {
   unsigned long VAR_8;






   VAR_8 = VAR_2 + (1 << FUNC_2(*(hugepd_t *)VAR_6));
   if (VAR_8 > VAR_7)
    VAR_7 = VAR_8;

   FUNC_1(VAR_1, (hugepd_t *)VAR_6, VAR_0,
       VAR_2, VAR_7, VAR_4, VAR_5);
  }
 } while (VAR_2 = VAR_7, VAR_2 != VAR_3);
}
