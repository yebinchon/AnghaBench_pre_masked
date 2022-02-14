
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,unsigned long,int*,int*) ;
 int FUNC_6 (struct mm_struct*,unsigned long,int *,unsigned long) ;
 int FUNC_7 (struct mm_struct*,unsigned long,int *,unsigned long,int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(struct mm_struct *VAR_2, unsigned long VAR_3,
         unsigned long VAR_4)
{
 bool VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_3 = FUNC_1(VAR_3, VAR_1);
 VAR_4 = FUNC_2(VAR_4, VAR_1);

 FUNC_0(!VAR_2->pgd);
 FUNC_9(VAR_7);
 FUNC_3();
 for (; VAR_3 < VAR_4; VAR_3 += VAR_1) {
  pte_t *VAR_8 = FUNC_5(VAR_2->pgd, VAR_3, &VAR_5,
        &VAR_6);
  unsigned long VAR_9;

  if (VAR_8 == ((void*)0))
   continue;
  VAR_9 = FUNC_10(*VAR_8);
  if (VAR_5)
   FUNC_11(VAR_3, VAR_9);
  if (!(VAR_9 & VAR_0))
   continue;
  if (FUNC_12(VAR_5))
   FUNC_6(VAR_2, VAR_3, (pmd_t *)VAR_8, VAR_9);
  else
   FUNC_7(VAR_2, VAR_3, VAR_8, VAR_9, VAR_6);
 }
 FUNC_4();
 FUNC_8(VAR_7);
}
