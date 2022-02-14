
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {int (* emit_flush ) (struct i915_request*,int ) ;int mmio_base; } ;
struct i915_request {int i915; TYPE_1__* hw_context; struct intel_engine_cs* engine; } ;
struct i915_ppgtt {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct i915_ppgtt* const,int) ;
 struct i915_ppgtt* FUNC_8 (int ) ;
 int FUNC_9 (struct i915_request*,int *) ;
 int * FUNC_10 (struct i915_request*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (struct i915_request*,int ) ;
 int FUNC_14 (struct i915_request*,int ) ;
 int FUNC_15 (struct i915_request*,int ) ;
 int FUNC_16 (struct i915_request*,int ) ;
 int FUNC_17 (int const) ;

__attribute__((used)) static int FUNC_18(struct i915_request *VAR_5)
{
 const struct intel_engine_cs * const VAR_6 = VAR_5->engine;
 struct i915_ppgtt * const VAR_7 = FUNC_8(VAR_5->hw_context->vm);
 int VAR_8, VAR_9;
 u32 *VAR_10;

 FUNC_0(FUNC_11(VAR_5->i915));
 VAR_8 = VAR_6->emit_flush(VAR_5, VAR_0);
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_6->emit_flush(VAR_5, VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_10 = FUNC_10(VAR_5, 4 * VAR_2 + 2);
 if (FUNC_3(VAR_10))
  return FUNC_5(VAR_10);


 *VAR_10++ = FUNC_4(2 * VAR_2) | VAR_3;
 for (VAR_9 = VAR_2; VAR_9--; ) {
  const dma_addr_t VAR_11 = FUNC_7(VAR_7, VAR_9);
  u32 VAR_12 = VAR_6->mmio_base;

  *VAR_10++ = FUNC_6(FUNC_2(VAR_12, VAR_9));
  *VAR_10++ = FUNC_17(VAR_11);
  *VAR_10++ = FUNC_6(FUNC_1(VAR_12, VAR_9));
  *VAR_10++ = FUNC_12(VAR_11);
 }
 *VAR_10++ = VAR_4;

 FUNC_9(VAR_5, VAR_10);


 VAR_8 = VAR_6->emit_flush(VAR_5, VAR_0);
 if (VAR_8)
  return VAR_8;


 return VAR_6->emit_flush(VAR_5, VAR_1);
}
