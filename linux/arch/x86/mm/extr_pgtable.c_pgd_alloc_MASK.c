
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int * pgd; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,int **,int ) ;
 scalar_t__ FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*,int *) ;
 int VAR_4 ;
 int FUNC_5 (struct mm_struct*,int *,int **) ;
 int FUNC_6 (struct mm_struct*,int *,int **) ;
 scalar_t__ FUNC_7 (struct mm_struct*,int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

pgd_t *FUNC_10(struct mm_struct *VAR_5)
{
 pgd_t *VAR_6;
 pmd_t *VAR_7[VAR_1];
 pmd_t *VAR_8[VAR_0];

 VAR_6 = FUNC_0();

 if (VAR_6 == ((void*)0))
  goto out;

 VAR_5->pgd = VAR_6;

 if (FUNC_7(VAR_5, VAR_8, VAR_2) != 0)
  goto out_free_pgd;

 if (FUNC_7(VAR_5, VAR_7, VAR_3) != 0)
  goto out_free_pmds;

 if (FUNC_3(VAR_5) != 0)
  goto out_free_user_pmds;






 FUNC_8(&VAR_4);

 FUNC_4(VAR_5, VAR_6);
 FUNC_5(VAR_5, VAR_6, VAR_8);
 FUNC_6(VAR_5, VAR_6, VAR_7);

 FUNC_9(&VAR_4);

 return VAR_6;

out_free_user_pmds:
 FUNC_2(VAR_5, VAR_7, VAR_3);
out_free_pmds:
 FUNC_2(VAR_5, VAR_8, VAR_2);
out_free_pgd:
 FUNC_1(VAR_6);
out:
 return ((void*)0);
}
