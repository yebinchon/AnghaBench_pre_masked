
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {int mmio_base; } ;
struct i915_request {struct intel_engine_cs* engine; } ;
struct i915_ppgtt {int pd; } ;
struct TYPE_2__ {int ggtt_offset; } ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct i915_request*,int *) ;
 int * FUNC_7 (struct i915_request*,int) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i915_request *VAR_1, const struct i915_ppgtt *VAR_2)
{
 const struct intel_engine_cs * const VAR_3 = VAR_1->engine;
 u32 *VAR_4;

 VAR_4 = FUNC_7(VAR_1, 6);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);

 *VAR_4++ = FUNC_1(1);
 *VAR_4++ = FUNC_5(FUNC_4(VAR_3->mmio_base));
 *VAR_4++ = VAR_0;

 *VAR_4++ = FUNC_1(1);
 *VAR_4++ = FUNC_5(FUNC_3(VAR_3->mmio_base));
 *VAR_4++ = FUNC_8(VAR_2->pd)->ggtt_offset << 10;

 FUNC_6(VAR_1, VAR_4);

 return 0;
}
