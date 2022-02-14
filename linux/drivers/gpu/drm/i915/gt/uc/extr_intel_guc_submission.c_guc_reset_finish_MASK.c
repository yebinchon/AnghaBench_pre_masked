
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct intel_engine_execlists {TYPE_1__ tasklet; } ;
struct intel_engine_cs {int name; struct intel_engine_execlists execlists; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0)
{
 struct intel_engine_execlists * const VAR_1 = &VAR_0->execlists;

 if (FUNC_1(&VAR_1->tasklet))

  FUNC_3(&VAR_1->tasklet);

 FUNC_0("%s: depth->%d\n", VAR_0->name,
    FUNC_2(&VAR_1->tasklet.count));
}
