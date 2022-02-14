
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct mm_struct*,int **,int) ;
 struct mm_struct VAR_3 ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mm_struct *VAR_4, pmd_t *VAR_5[], int VAR_6)
{
 int VAR_7;
 bool VAR_8 = 0;
 gfp_t VAR_9 = VAR_1;

 if (VAR_4 == &VAR_3)
  VAR_9 &= ~VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  pmd_t *VAR_10 = (pmd_t *)FUNC_0(VAR_9);
  if (!VAR_10)
   VAR_8 = 1;
  if (VAR_10 && !FUNC_4(FUNC_5(VAR_10))) {
   FUNC_1((unsigned long)VAR_10);
   VAR_10 = ((void*)0);
   VAR_8 = 1;
  }
  if (VAR_10)
   FUNC_3(VAR_4);
  VAR_5[VAR_7] = VAR_10;
 }

 if (VAR_8) {
  FUNC_2(VAR_4, VAR_5, VAR_6);
  return -VAR_0;
 }

 return 0;
}
