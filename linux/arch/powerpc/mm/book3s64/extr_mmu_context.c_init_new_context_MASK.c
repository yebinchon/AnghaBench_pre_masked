
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int id; int copros; int active_cpus; int * pmd_frag; int * pte_frag; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(struct task_struct *VAR_0, struct mm_struct *VAR_1)
{
 int VAR_2;

 if (FUNC_4())
  VAR_2 = FUNC_3(VAR_1);
 else
  VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->context.id = VAR_2;

 VAR_1->context.pte_frag = ((void*)0);
 VAR_1->context.pmd_frag = ((void*)0);



 FUNC_0(&VAR_1->context.active_cpus, 0);
 FUNC_0(&VAR_1->context.copros, 0);

 return 0;
}
