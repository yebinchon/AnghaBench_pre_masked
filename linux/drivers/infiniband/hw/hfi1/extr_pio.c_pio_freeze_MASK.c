
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_context {int flags; scalar_t__ type; } ;
struct hfi1_devdata {int num_send_contexts; TYPE_1__* send_contexts; } ;
struct TYPE_2__ {struct send_context* sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct send_context*) ;

void FUNC_1(struct hfi1_devdata *VAR_2)
{
 struct send_context *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_send_contexts; VAR_4++) {
  VAR_3 = VAR_2->send_contexts[VAR_4].sc;





  if (!VAR_3 || !(VAR_3->flags & VAR_0) || VAR_3->type == VAR_1)
   continue;


  FUNC_0(VAR_3);
 }
}
