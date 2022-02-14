
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct legacy_ring {scalar_t__ class; scalar_t__ instance; TYPE_1__* gt; } ;
struct intel_engine_cs {scalar_t__ class; int legacy_idx; TYPE_1__* gt; } ;
struct TYPE_2__ {struct intel_engine_cs** engine; } ;


 int FUNC_0 (struct intel_engine_cs**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct legacy_ring*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct legacy_ring *VAR_0,
       struct intel_engine_cs *VAR_1)
{
 int VAR_2;

 if (VAR_1->gt != VAR_0->gt || VAR_1->class != VAR_0->class) {
  VAR_0->gt = VAR_1->gt;
  VAR_0->class = VAR_1->class;
  VAR_0->instance = 0;
 }

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_3(VAR_2 == -1))
  return;

 FUNC_1(VAR_2 >= FUNC_0(VAR_0->gt->engine));
 VAR_0->gt->engine[VAR_2] = VAR_1;
 VAR_0->instance++;

 VAR_1->legacy_idx = VAR_2;
}
