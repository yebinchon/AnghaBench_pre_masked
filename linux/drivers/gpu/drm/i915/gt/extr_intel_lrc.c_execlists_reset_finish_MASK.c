
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; int data; int (* func ) (int ) ;} ;
struct TYPE_4__ {int rb_root; } ;
struct intel_engine_execlists {TYPE_2__ tasklet; TYPE_1__ queue; } ;
struct intel_engine_cs {int name; struct intel_engine_execlists execlists; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_engine_execlists* const) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct intel_engine_cs *VAR_0)
{
 struct intel_engine_execlists * const VAR_1 = &VAR_0->execlists;






 FUNC_0(!FUNC_5(VAR_1));
 if (!FUNC_2(&VAR_1->queue.rb_root))
  VAR_1->tasklet.func(VAR_1->tasklet.data);

 if (FUNC_3(&VAR_1->tasklet))

  FUNC_7(&VAR_1->tasklet);
 FUNC_1("%s: depth->%d\n", VAR_0->name,
    FUNC_4(&VAR_1->tasklet.count));
}
