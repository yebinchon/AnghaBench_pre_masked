
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {int i915; int mmio_base; } ;
struct i915_request {struct intel_engine_cs* engine; TYPE_1__* hw_context; } ;
struct i915_ppgtt {int pd; } ;
struct i915_address_space {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct i915_address_space* vm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 void* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i915_ppgtt*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct i915_ppgtt*,int) ;
 scalar_t__ FUNC_9 (struct i915_address_space*) ;
 struct i915_ppgtt* FUNC_10 (struct i915_address_space*) ;
 int FUNC_11 (struct i915_request*,int *) ;
 int * FUNC_12 (struct i915_request*,int) ;
 void* FUNC_13 (int const) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int const) ;

__attribute__((used)) static int FUNC_16(struct i915_request *VAR_2, void *VAR_3)
{
 struct i915_address_space *VAR_4 = VAR_2->hw_context->vm;
 struct intel_engine_cs *VAR_5 = VAR_2->engine;
 u32 VAR_6 = VAR_5->mmio_base;
 u32 *VAR_7;
 int VAR_8;

 if (FUNC_9(VAR_4)) {
  struct i915_ppgtt *VAR_9 = FUNC_10(VAR_4);
  const dma_addr_t VAR_10 = FUNC_14(VAR_9->pd);

  VAR_7 = FUNC_12(VAR_2, 6);
  if (FUNC_3(VAR_7))
   return FUNC_5(VAR_7);

  *VAR_7++ = FUNC_4(2);

  *VAR_7++ = FUNC_7(FUNC_1(VAR_6, 0));
  *VAR_7++ = FUNC_15(VAR_10);
  *VAR_7++ = FUNC_7(FUNC_0(VAR_6, 0));
  *VAR_7++ = FUNC_13(VAR_10);

  *VAR_7++ = VAR_1;
  FUNC_11(VAR_2, VAR_7);
 } else if (FUNC_2(VAR_5->i915)) {
  struct i915_ppgtt *VAR_11 = FUNC_10(VAR_4);

  VAR_7 = FUNC_12(VAR_2, 4 * VAR_0 + 2);
  if (FUNC_3(VAR_7))
   return FUNC_5(VAR_7);

  *VAR_7++ = FUNC_4(2 * VAR_0);
  for (VAR_8 = VAR_0; VAR_8--; ) {
   const dma_addr_t VAR_12 = FUNC_8(VAR_11, VAR_8);

   *VAR_7++ = FUNC_7(FUNC_1(VAR_6, VAR_8));
   *VAR_7++ = FUNC_15(VAR_12);
   *VAR_7++ = FUNC_7(FUNC_0(VAR_6, VAR_8));
   *VAR_7++ = FUNC_13(VAR_12);
  }
  *VAR_7++ = VAR_1;
  FUNC_11(VAR_2, VAR_7);
 } else {

  FUNC_6(FUNC_10(VAR_4));
 }

 return 0;
}
