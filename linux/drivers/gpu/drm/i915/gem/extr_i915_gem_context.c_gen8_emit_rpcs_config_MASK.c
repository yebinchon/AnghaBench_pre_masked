
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct intel_sseu {int dummy; } ;
struct intel_context {int state; } ;
struct i915_request {int i915; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i915_request*,int *) ;
 int * FUNC_4 (struct i915_request*,int) ;
 int FUNC_5 (int ,struct intel_sseu*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct i915_request *VAR_5,
     struct intel_context *VAR_6,
     struct intel_sseu VAR_7)
{
 u64 VAR_8;
 u32 *VAR_9;

 VAR_9 = FUNC_4(VAR_5, 4);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_8 = FUNC_2(VAR_6->state) +
   VAR_1 * VAR_4 +
   (VAR_0 + 1) * 4;

 *VAR_9++ = VAR_2 | VAR_3;
 *VAR_9++ = FUNC_6(VAR_8);
 *VAR_9++ = FUNC_7(VAR_8);
 *VAR_9++ = FUNC_5(VAR_5->i915, &VAR_7);

 FUNC_3(VAR_5, VAR_9);

 return 0;
}
