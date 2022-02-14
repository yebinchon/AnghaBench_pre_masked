
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_cmd {int name; TYPE_1__* op; struct event_cmd* next; } ;
struct TYPE_2__ {int (* act ) (struct event_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (struct event_cmd*)) ;
 int FUNC_1 (struct event_cmd*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_2 ;

int
FUNC_3(struct event_cmd *VAR_3)
{
 int VAR_4 = 0;

 for (; VAR_3; VAR_3 = VAR_3->next) {
  FUNC_0(VAR_3->op->act);
  if (VAR_2)
   FUNC_2(VAR_0, "action: %s", VAR_3->name);
  VAR_4 = VAR_3->op->act(VAR_3);
  if (VAR_4) {
   FUNC_2(VAR_1, "command finished with %d\n", VAR_4);
   break;
  }
 }
 return VAR_4;
}
