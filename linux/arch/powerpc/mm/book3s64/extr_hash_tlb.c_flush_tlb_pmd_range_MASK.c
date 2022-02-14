
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,unsigned long,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int ) ;

void FUNC_8(struct mm_struct *VAR_4, pmd_t *VAR_5, unsigned long VAR_6)
{
 pte_t *VAR_7;
 pte_t *VAR_8;
 unsigned long VAR_9;

 VAR_6 = FUNC_0(VAR_6, VAR_2);
 FUNC_5(VAR_9);
 FUNC_1();
 VAR_8 = FUNC_6(VAR_5, VAR_6);
 for (VAR_7 = VAR_8; VAR_7 < VAR_8 + VAR_3; VAR_7++) {
  unsigned long VAR_10 = FUNC_7(*VAR_7);
  if (VAR_10 & VAR_0)
   FUNC_3(VAR_4, VAR_6, VAR_7, VAR_10, 0);
  VAR_6 += VAR_1;
 }
 FUNC_2();
 FUNC_4(VAR_9);
}
