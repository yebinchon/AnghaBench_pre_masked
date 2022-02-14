
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int notifier_call; struct notifier_block* next; } ;
struct TYPE_2__ {int mutex; struct notifier_block* head; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct notifier_block *VAR_1;

 FUNC_2("Registered transition notifiers:\n");

 FUNC_0(&VAR_0.mutex);

 for (VAR_1 = VAR_0.head; VAR_1; VAR_1 = VAR_1->next)
  FUNC_2("%pS\n", VAR_1->notifier_call);

 FUNC_1(&VAR_0.mutex);
}
