
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline_cacheline {int active; } ;
struct i915_request {int timeline; } ;


 int FUNC_0 (int *,int ,struct i915_request*) ;

__attribute__((used)) static int FUNC_1(struct intel_timeline_cacheline *VAR_0,
    struct i915_request *VAR_1)
{
 return FUNC_0(&VAR_0->active, VAR_1->timeline, VAR_1);
}
