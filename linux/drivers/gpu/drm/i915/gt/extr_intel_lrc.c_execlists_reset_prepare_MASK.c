
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct intel_engine_execlists {TYPE_2__ tasklet; } ;
struct TYPE_3__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; int name; struct intel_engine_execlists execlists; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_engine_cs*) ;
 int FUNC_5 (struct intel_engine_execlists* const) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct intel_engine_cs *VAR_0)
{
 struct intel_engine_execlists * const VAR_1 = &VAR_0->execlists;
 unsigned long VAR_2;

 FUNC_1("%s: depth<-%d\n", VAR_0->name,
    FUNC_3(&VAR_1->tasklet.count));
 FUNC_2(&VAR_1->tasklet);
 FUNC_0(!FUNC_5(VAR_1));


 FUNC_6(&VAR_0->active.lock, VAR_2);
 FUNC_7(&VAR_0->active.lock, VAR_2);
 FUNC_4(VAR_0);
}
