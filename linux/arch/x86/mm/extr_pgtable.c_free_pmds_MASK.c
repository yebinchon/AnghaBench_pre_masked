
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_0, pmd_t *VAR_1[], int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3]) {
   FUNC_2(FUNC_3(VAR_1[VAR_3]));
   FUNC_0((unsigned long)VAR_1[VAR_3]);
   FUNC_1(VAR_0);
  }
}
