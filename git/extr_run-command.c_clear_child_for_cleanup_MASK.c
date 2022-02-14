
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_to_clean {scalar_t__ pid; struct child_to_clean* next; } ;
typedef scalar_t__ pid_t ;


 struct child_to_clean* VAR_0 ;
 int FUNC_0 (struct child_to_clean*) ;

__attribute__((used)) static void FUNC_1(pid_t VAR_1)
{
 struct child_to_clean **VAR_2;

 for (VAR_2 = &VAR_0; *VAR_2; VAR_2 = &(*VAR_2)->next) {
  struct child_to_clean *VAR_3 = *VAR_2;

  if (VAR_3->pid == VAR_1) {
   *VAR_2 = VAR_3->next;
   FUNC_0(VAR_3);
   return;
  }
 }
}
