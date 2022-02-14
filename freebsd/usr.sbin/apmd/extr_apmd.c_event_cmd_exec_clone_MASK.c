
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op; int name; int len; int * next; } ;
struct event_cmd_exec {int * line; TYPE_1__ evcmd; } ;
struct event_cmd {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (void*) ;
 int * FUNC_2 (int *) ;

struct event_cmd *
FUNC_3(void *VAR_0)
{
 struct event_cmd_exec * VAR_1 = (struct event_cmd_exec *) FUNC_1(VAR_0);
 struct event_cmd_exec * VAR_2 = VAR_0;

 VAR_1->evcmd.next = ((void*)0);
 VAR_1->evcmd.len = VAR_2->evcmd.len;
 VAR_1->evcmd.name = VAR_2->evcmd.name;
 VAR_1->evcmd.op = VAR_2->evcmd.op;
 if ((VAR_1->line = FUNC_2(VAR_2->line)) == ((void*)0))
  FUNC_0(1, "out of memory");
 return (struct event_cmd *) VAR_1;
}
