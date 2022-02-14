
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_cache {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; } ;
struct i915_sched_node {int dummy; } ;
struct i915_request {int engine; } ;


 int FUNC_0 (int) ;
 struct intel_engine_cs* FUNC_1 (int ) ;
 int FUNC_2 (struct sched_cache*,int ,int) ;
 struct i915_request* FUNC_3 (struct i915_sched_node const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct intel_engine_cs *
FUNC_6(const struct i915_sched_node *VAR_0,
    struct intel_engine_cs *VAR_1,
    struct sched_cache *VAR_2)
{
 const struct i915_request *VAR_3 = FUNC_3(VAR_0);
 struct intel_engine_cs *VAR_4;

 FUNC_0(!VAR_1);







 while (VAR_1 != (VAR_4 = FUNC_1(VAR_3->engine))) {
  FUNC_5(&VAR_1->active.lock);
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  FUNC_4(&VAR_4->active.lock);
  VAR_1 = VAR_4;
 }

 FUNC_0(VAR_1 != VAR_4);
 return VAR_1;
}
