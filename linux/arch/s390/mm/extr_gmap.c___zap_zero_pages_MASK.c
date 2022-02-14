
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_walk {int mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *,unsigned long,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_6(pmd_t *VAR_2, unsigned long VAR_3,
      unsigned long VAR_4, struct mm_walk *VAR_5)
{
 unsigned long VAR_6;

 for (VAR_6 = VAR_3; VAR_6 != VAR_4; VAR_6 += VAR_0) {
  pte_t *VAR_7;
  spinlock_t *VAR_8;

  VAR_7 = FUNC_2(VAR_5->mm, VAR_2, VAR_6, &VAR_8);
  if (FUNC_1(FUNC_3(*VAR_7)))
   FUNC_5(VAR_5->mm, VAR_6, VAR_7, FUNC_0(VAR_1));
  FUNC_4(VAR_7, VAR_8);
 }
 return 0;
}
