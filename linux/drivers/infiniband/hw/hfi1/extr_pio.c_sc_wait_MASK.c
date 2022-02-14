
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_context {int dummy; } ;
struct hfi1_devdata {int num_send_contexts; TYPE_1__* send_contexts; } ;
struct TYPE_2__ {struct send_context* sc; } ;


 int FUNC_0 (struct send_context*,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_send_contexts; VAR_1++) {
  struct send_context *VAR_2 = VAR_0->send_contexts[VAR_1].sc;

  if (!VAR_2)
   continue;
  FUNC_0(VAR_2, 0);
 }
}
