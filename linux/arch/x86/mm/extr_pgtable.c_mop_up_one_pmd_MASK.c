
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_6(struct mm_struct *VAR_1, pgd_t *VAR_2)
{
 pgd_t VAR_3 = *VAR_2;

 if (FUNC_4(VAR_3) != 0) {
  pmd_t *VAR_4 = (pmd_t *)FUNC_3(VAR_3);

  FUNC_2(VAR_2);

  FUNC_1(FUNC_4(VAR_3) >> VAR_0);
  FUNC_5(VAR_1, VAR_4);
  FUNC_0(VAR_1);
 }
}
