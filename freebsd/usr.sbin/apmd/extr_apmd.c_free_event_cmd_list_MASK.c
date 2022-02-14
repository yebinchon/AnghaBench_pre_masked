
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_cmd {TYPE_1__* op; struct event_cmd* next; } ;
struct TYPE_2__ {int (* free ) (struct event_cmd*) ;} ;


 int FUNC_0 (struct event_cmd*) ;
 int FUNC_1 (struct event_cmd*) ;

void
FUNC_2(struct event_cmd *VAR_0)
{
 struct event_cmd * VAR_1;
 for ( ; VAR_0 ; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  if (VAR_0->op->free)
   VAR_0->op->free(VAR_0);
  FUNC_0(VAR_0);
 }
}
