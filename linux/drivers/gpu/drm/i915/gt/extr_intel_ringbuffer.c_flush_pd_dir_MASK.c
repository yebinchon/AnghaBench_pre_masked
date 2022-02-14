
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int gt; int mmio_base; } ;
struct i915_request {struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i915_request*,int *) ;
 int * FUNC_6 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_7(struct i915_request *VAR_4)
{
 const struct intel_engine_cs * const VAR_5 = VAR_4->engine;
 u32 *VAR_6;

 VAR_6 = FUNC_6(VAR_4, 4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);


 *VAR_6++ = VAR_3 | VAR_2;
 *VAR_6++ = FUNC_3(FUNC_2(VAR_5->mmio_base));
 *VAR_6++ = FUNC_4(VAR_4->engine->gt,
     VAR_0);
 *VAR_6++ = VAR_1;

 FUNC_5(VAR_4, VAR_6);
 return 0;
}
