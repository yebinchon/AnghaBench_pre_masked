
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_cmd {struct event_cmd* next; TYPE_1__* op; } ;
struct TYPE_2__ {struct event_cmd* (* clone ) (struct event_cmd*) ;} ;


 int FUNC_0 (struct event_cmd* (*) (struct event_cmd*)) ;
 int FUNC_1 (int,char*) ;
 struct event_cmd* FUNC_2 (struct event_cmd*) ;

struct event_cmd *
FUNC_3(struct event_cmd *VAR_0)
{
 struct event_cmd VAR_1;
 struct event_cmd *VAR_2 = &VAR_1;
 for ( ;VAR_0; VAR_0 = VAR_0->next) {
  FUNC_0(VAR_0->op->clone);
  if ((VAR_2->next = VAR_0->op->clone(VAR_0)) == ((void*)0))
   FUNC_1(1, "out of memory");
  VAR_2 = VAR_2->next;
 }
 VAR_2->next = ((void*)0);
 return VAR_1.next;
}
