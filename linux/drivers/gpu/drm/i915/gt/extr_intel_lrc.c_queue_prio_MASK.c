
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct intel_engine_execlists {int queue; } ;
struct i915_priolist {int priority; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct rb_node* FUNC_1 (int *) ;
 struct i915_priolist* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static int FUNC_3(const struct intel_engine_execlists *VAR_2)
{
 struct i915_priolist *VAR_3;
 struct rb_node *VAR_4;

 VAR_4 = FUNC_1(&VAR_2->queue);
 if (!VAR_4)
  return VAR_1;





 VAR_3 = FUNC_2(VAR_4);
 return ((VAR_3->priority + 1) << VAR_0) - FUNC_0(VAR_3->used);
}
