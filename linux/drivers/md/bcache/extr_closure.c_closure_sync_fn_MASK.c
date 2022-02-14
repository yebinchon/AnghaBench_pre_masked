
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct closure_syncer {int done; int task; } ;
struct closure {struct closure_syncer* s; } ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct closure *VAR_0)
{
 struct closure_syncer *VAR_1 = VAR_0->s;
 struct task_struct *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1->task);
 VAR_1->done = 1;
 FUNC_3(VAR_2);
 FUNC_2();
}
