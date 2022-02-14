
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requests; } ;
struct intel_engine_cs {int whitelist; int wa_list; int ctx_wa_list; int barrier_tasks; int kernel_context; scalar_t__ default_state; int pool; TYPE_1__ active; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int FUNC_6 (struct intel_engine_cs*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct intel_engine_cs *VAR_0)
{
 FUNC_0(!FUNC_9(&VAR_0->active.requests));

 FUNC_1(VAR_0);

 FUNC_7(&VAR_0->pool);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);

 if (VAR_0->default_state)
  FUNC_2(VAR_0->default_state);

 FUNC_4(VAR_0->kernel_context);
 FUNC_3(VAR_0->kernel_context);
 FUNC_0(!FUNC_10(&VAR_0->barrier_tasks));

 FUNC_8(&VAR_0->ctx_wa_list);
 FUNC_8(&VAR_0->wa_list);
 FUNC_8(&VAR_0->whitelist);
}
