
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_to_clean {struct child_to_clean* next; struct child_process* process; int pid; } ;
struct child_process {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 struct child_to_clean* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct child_to_clean* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(pid_t VAR_4, struct child_process *VAR_5)
{
 struct child_to_clean *VAR_6 = FUNC_2(sizeof(*VAR_6));
 VAR_6->pid = VAR_4;
 VAR_6->process = VAR_5;
 VAR_6->next = VAR_0;
 VAR_0 = VAR_6;

 if (!VAR_3) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_2);
  VAR_3 = 1;
 }
}
