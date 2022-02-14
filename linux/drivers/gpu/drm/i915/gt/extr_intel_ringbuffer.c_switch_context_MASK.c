
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {scalar_t__ id; int mask; int (* emit_flush ) (struct i915_request*,int ) ;int i915; } ;
struct i915_request {int gem_context; TYPE_1__* hw_context; int i915; struct intel_engine_cs* engine; } ;
struct i915_ppgtt {int pd_dirty_engines; } ;
struct i915_address_space {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct i915_request*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct i915_ppgtt* FUNC_5 (struct i915_address_space*) ;
 int FUNC_6 (struct i915_request*,struct i915_ppgtt*) ;
 int FUNC_7 (struct i915_request*,int ) ;
 int FUNC_8 (struct i915_request*) ;
 int FUNC_9 (struct i915_request*,int ) ;
 int FUNC_10 (struct i915_request*,int ) ;
 int FUNC_11 (struct i915_request*,int ) ;
 struct i915_address_space* FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct i915_request *VAR_6)
{
 struct intel_engine_cs *VAR_7 = VAR_6->engine;
 struct i915_address_space *VAR_8 = FUNC_12(VAR_6->hw_context);
 unsigned int VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11;

 FUNC_0(FUNC_1(VAR_6->i915));

 if (VAR_8) {
  struct i915_ppgtt *VAR_12 = FUNC_5(VAR_8);
  int VAR_13;
  VAR_13 = 1;
  if (VAR_7->id == VAR_0 && FUNC_2(VAR_7->i915))
   VAR_13 = 32;

  do {
   VAR_11 = FUNC_6(VAR_6, VAR_12);
   if (VAR_11)
    goto err;
  } while (--VAR_13);

  if (VAR_12->pd_dirty_engines & VAR_7->mask) {
   VAR_9 = VAR_7->mask;
   VAR_12->pd_dirty_engines &= ~VAR_9;
   VAR_10 = VAR_3;
  }
 }

 if (VAR_6->hw_context->state) {
  FUNC_0(VAR_7->id != VAR_5);
  if (FUNC_4(VAR_6->gem_context))
   VAR_10 = VAR_4;

  VAR_11 = FUNC_7(VAR_6, VAR_10);
  if (VAR_11)
   goto err_mm;
 }

 if (VAR_8) {
  VAR_11 = VAR_7->emit_flush(VAR_6, VAR_2);
  if (VAR_11)
   goto err_mm;

  VAR_11 = FUNC_3(VAR_6);
  if (VAR_11)
   goto err_mm;
  VAR_11 = VAR_7->emit_flush(VAR_6, VAR_2);
  if (VAR_11)
   goto err_mm;

  VAR_11 = VAR_7->emit_flush(VAR_6, VAR_1);
  if (VAR_11)
   goto err_mm;
 }

 VAR_11 = FUNC_8(VAR_6);
 if (VAR_11)
  goto err_mm;

 return 0;

err_mm:
 if (VAR_9)
  FUNC_5(VAR_8)->pd_dirty_engines |= VAR_9;
err:
 return VAR_11;
}
