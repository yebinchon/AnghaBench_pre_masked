
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ func; } ;
struct intel_engine_execlists {TYPE_1__ tasklet; } ;
struct intel_engine_cs {struct intel_engine_execlists execlists; } ;


 int FUNC_0 (struct intel_engine_cs*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct intel_engine_execlists* const) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_1)
{
 struct intel_engine_execlists * const VAR_2 = &VAR_1->execlists;

 if (FUNC_1(VAR_2))
  return;

 if (VAR_2->tasklet.func == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_2(&VAR_2->tasklet);
}
