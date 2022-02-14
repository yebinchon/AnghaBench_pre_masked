
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int dummy; } ;
struct i915_gem_context {int timeline; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct intel_timeline*) ;
 int FUNC_1 (struct i915_gem_context*,int ,struct intel_timeline*) ;

__attribute__((used)) static void FUNC_2(struct i915_gem_context *VAR_1,
         struct intel_timeline *VAR_2)
{
 FUNC_0(&VAR_1->timeline, VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2);
}
