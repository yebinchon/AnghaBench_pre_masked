
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 int * FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct mm_struct *VAR_1)
{
 unsigned long VAR_2 = VAR_0;
 pgd_t *VAR_3 = FUNC_3(VAR_1, VAR_2);

 if (FUNC_5()) {
  if (FUNC_8(FUNC_2(*VAR_3))) {
   pgd_t *VAR_4 = FUNC_4(VAR_2);

   FUNC_7(VAR_3, *VAR_4);
  }
 } else {





  p4d_t *VAR_5 = FUNC_1(VAR_3, VAR_2);

  if (FUNC_8(FUNC_0(*VAR_5))) {
   pgd_t *VAR_6 = FUNC_4(VAR_2);
   p4d_t *VAR_7 = FUNC_1(VAR_6, VAR_2);

   FUNC_6(VAR_5, *VAR_7);
  }
 }
}
