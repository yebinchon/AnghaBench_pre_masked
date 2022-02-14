
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int * pending; } ;
struct intel_engine_cs {TYPE_2__ active; TYPE_1__ execlists; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_engine_cs* const) ;
 int FUNC_2 (struct intel_engine_cs* const) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct intel_engine_cs * const VAR_1 = (struct intel_engine_cs *)VAR_0;
 unsigned long VAR_2;

 FUNC_2(VAR_1);
 if (!FUNC_0(VAR_1->execlists.pending[0])) {
  FUNC_3(&VAR_1->active.lock, VAR_2);
  FUNC_1(VAR_1);
  FUNC_4(&VAR_1->active.lock, VAR_2);
 }
}
