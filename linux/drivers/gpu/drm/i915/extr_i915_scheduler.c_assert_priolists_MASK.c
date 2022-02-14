
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct TYPE_2__ {int rb_root; } ;
struct intel_engine_execlists {TYPE_1__ queue; } ;
struct i915_priolist {long priority; int used; int * requests; } ;


 long FUNC_0 (int *) ;
 int FUNC_1 (long) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct rb_node* FUNC_5 (int *) ;
 struct rb_node* FUNC_6 (TYPE_1__*) ;
 struct rb_node* FUNC_7 (struct rb_node*) ;
 struct i915_priolist* FUNC_8 (struct rb_node*) ;

__attribute__((used)) static void FUNC_9(struct intel_engine_execlists * const VAR_3)
{
 struct rb_node *VAR_4;
 long VAR_5, VAR_6;

 if (!FUNC_3(VAR_0))
  return;

 FUNC_2(FUNC_6(&VAR_3->queue) !=
     FUNC_5(&VAR_3->queue.rb_root));

 VAR_5 = (VAR_2 >> VAR_1) + 1;
 for (VAR_4 = FUNC_6(&VAR_3->queue); VAR_4; VAR_4 = FUNC_7(VAR_4)) {
  const struct i915_priolist *VAR_7 = FUNC_8(VAR_4);

  FUNC_2(VAR_7->priority >= VAR_5);
  VAR_5 = VAR_7->priority;

  FUNC_2(!VAR_7->used);
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7->requests); VAR_6++) {
   if (FUNC_4(&VAR_7->requests[VAR_6]))
    continue;

   FUNC_2(!(VAR_7->used & FUNC_1(VAR_6)));
  }
 }
}
