
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_timeline {scalar_t__ hwsp_cacheline; } ;
struct i915_request {int dummy; } ;


 int FUNC_0 (struct intel_timeline*,struct i915_request*,int *) ;
 int FUNC_1 (struct intel_timeline*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct intel_timeline *VAR_0,
        struct i915_request *VAR_1,
        u32 *VAR_2)
{
 *VAR_2 = FUNC_1(VAR_0);


 if (FUNC_2(!*VAR_2 && VAR_0->hwsp_cacheline))
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 return 0;
}
