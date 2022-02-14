
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; scalar_t__ clean_on_exit; } ;
struct subprocess_entry {int ent; TYPE_1__ process; } ;
struct hashmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct hashmap*,int *,int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct hashmap *VAR_1, struct subprocess_entry *VAR_2)
{
 if (!VAR_2)
  return;

 VAR_2->process.clean_on_exit = 0;
 FUNC_2(VAR_2->process.pid, VAR_0);
 FUNC_0(&VAR_2->process);

 FUNC_1(VAR_1, &VAR_2->ent, ((void*)0));
}
