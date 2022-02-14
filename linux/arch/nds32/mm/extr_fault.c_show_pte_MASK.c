
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mm_struct VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 pgd_t *VAR_4;
 if (!VAR_2)
  VAR_2 = &VAR_1;

 FUNC_9("pgd = %p\n", VAR_2->pgd);
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 FUNC_9("[%08lx] *pgd=%08lx", VAR_3, FUNC_4(*VAR_4));

 do {
  pmd_t *VAR_5;

  if (FUNC_2(*VAR_4))
   break;

  if (FUNC_1(*VAR_4)) {
   FUNC_9("(bad)");
   break;
  }

  VAR_5 = FUNC_7(VAR_4, VAR_3);

  FUNC_9(", *pmd=%08lx", FUNC_8(*VAR_5));


  if (FUNC_6(*VAR_5))
   break;

  if (FUNC_5(*VAR_5)) {
   FUNC_9("(bad)");
   break;
  }

  if (FUNC_0(VAR_0))
  {
   pte_t *VAR_6;

   VAR_6 = FUNC_10(VAR_5, VAR_3);
   FUNC_9(", *pte=%08lx", FUNC_12(*VAR_6));
   FUNC_11(VAR_6);
  }
 } while (0);

 FUNC_9("\n");
}
