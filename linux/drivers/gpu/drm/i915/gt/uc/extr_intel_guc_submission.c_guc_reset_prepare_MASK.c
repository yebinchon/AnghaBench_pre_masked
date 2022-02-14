
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {int tasklet; } ;
struct intel_engine_cs {int name; struct intel_engine_execlists execlists; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_0)
{
 struct intel_engine_execlists * const VAR_1 = &VAR_0->execlists;

 FUNC_0("%s\n", VAR_0->name);
 FUNC_1(&VAR_1->tasklet);
}
