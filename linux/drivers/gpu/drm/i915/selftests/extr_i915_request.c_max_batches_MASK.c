
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {int dummy; } ;
struct i915_request {int reserved_space; int head; TYPE_1__* ring; } ;
struct i915_gem_context {int i915; } ;
struct TYPE_2__ {int size; int emit; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 struct i915_request* FUNC_4 (struct i915_gem_context*,struct intel_engine_cs*) ;

__attribute__((used)) static int
FUNC_5(struct i915_gem_context *VAR_1, struct intel_engine_cs *VAR_2)
{
 struct i915_request *VAR_3;
 int VAR_4;
 if (FUNC_0(VAR_1->i915))
  return VAR_0;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3);
 } else {
  int VAR_5;

  VAR_4 = VAR_3->ring->size - VAR_3->reserved_space;
  FUNC_3(VAR_3);

  VAR_5 = VAR_3->ring->emit - VAR_3->head;
  if (VAR_5 < 0)
   VAR_5 += VAR_3->ring->size;
  VAR_4 /= VAR_5;
  VAR_4 /= 2;
 }

 return VAR_4;
}
