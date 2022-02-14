
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * pending; } ;
struct TYPE_3__ {int lock; } ;
struct intel_engine_cs {TYPE_2__ execlists; TYPE_1__ active; } ;


 int FUNC_0 (struct intel_engine_cs* const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *const VAR_0)
{
 FUNC_1(&VAR_0->active.lock);
 if (!VAR_0->execlists.pending[0]) {
  FUNC_2();
  FUNC_0(VAR_0);
  FUNC_3();
 }
}
