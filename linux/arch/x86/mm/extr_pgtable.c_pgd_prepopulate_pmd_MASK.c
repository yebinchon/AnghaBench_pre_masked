
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mm_struct*,int *,int *) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_4, pgd_t *VAR_5, pmd_t *VAR_6[])
{
 p4d_t *VAR_7;
 pud_t *VAR_8;
 int VAR_9;

 if (VAR_1 == 0)
  return;

 VAR_7 = FUNC_1(VAR_5, 0);
 VAR_8 = FUNC_3(VAR_7, 0);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++, VAR_8++) {
  pmd_t *VAR_10 = VAR_6[VAR_9];

  if (VAR_9 >= VAR_0)
   FUNC_0(VAR_10, (pmd_t *)FUNC_2(VAR_3[VAR_9]),
          sizeof(pmd_t) * VAR_2);

  FUNC_4(VAR_4, VAR_8, VAR_10);
 }
}
