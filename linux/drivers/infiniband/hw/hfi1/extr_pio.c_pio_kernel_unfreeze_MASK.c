
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_context {int flags; scalar_t__ type; } ;
struct hfi1_devdata {int num_send_contexts; TYPE_1__* send_contexts; } ;
struct TYPE_2__ {struct send_context* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct send_context*) ;

void FUNC_1(struct hfi1_devdata *VAR_3)
{
 struct send_context *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_send_contexts; VAR_5++) {
  VAR_4 = VAR_3->send_contexts[VAR_5].sc;
  if (!VAR_4 || !(VAR_4->flags & VAR_0) || VAR_4->type == VAR_2)
   continue;
  if (VAR_4->flags & VAR_1)
   continue;

  FUNC_0(VAR_4);
 }
}
