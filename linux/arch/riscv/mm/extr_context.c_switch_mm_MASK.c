
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mm_struct*) ;
 unsigned int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct mm_struct *VAR_2, struct mm_struct *VAR_3,
 struct task_struct *VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_7(VAR_2 == VAR_3))
  return;






 VAR_5 = FUNC_6();

 FUNC_0(VAR_5, FUNC_5(VAR_2));
 FUNC_1(VAR_5, FUNC_5(VAR_3));

 FUNC_2(VAR_0, FUNC_8(VAR_3->pgd) | VAR_1);
 FUNC_4();

 FUNC_3(VAR_3);
}
