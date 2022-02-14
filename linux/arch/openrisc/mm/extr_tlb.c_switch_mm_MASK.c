
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int pgd; } ;


 int * VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 size_t FUNC_1 () ;

void FUNC_2(struct mm_struct *VAR_1, struct mm_struct *VAR_2,
        struct task_struct *VAR_3)
{






 VAR_0[FUNC_1()] = VAR_2->pgd;





 if (VAR_1 != VAR_2)
  FUNC_0(VAR_1);

}
