
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct iterate_data {TYPE_1__* si; struct command* cmds; } ;
struct command {size_t index; struct command* next; int new_oid; int skip_update; } ;
struct TYPE_2__ {scalar_t__* shallow_ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct object_id*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct object_id *VAR_2)
{
 struct iterate_data *VAR_3 = VAR_1;
 struct command **VAR_4 = &VAR_3->cmds;
 struct command *VAR_5 = *VAR_4;

 for (; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_0 && VAR_3->si->shallow_ref[VAR_5->index])

   continue;
  if (!FUNC_0(&VAR_5->new_oid) && !VAR_5->skip_update) {
   FUNC_1(VAR_2, &VAR_5->new_oid);
   *VAR_4 = VAR_5->next;
   return 0;
  }
 }
 *VAR_4 = ((void*)0);
 return -1;
}
