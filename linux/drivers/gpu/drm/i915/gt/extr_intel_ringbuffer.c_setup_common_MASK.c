
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int finish; int reset; int prepare; } ;
struct intel_engine_cs {int emit_bb_start; int set_default_submission; int emit_fini_breadcrumb; int request_alloc; int * cops; TYPE_1__ reset; int resume; int destroy; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct intel_engine_cs*) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_6(struct intel_engine_cs *VAR_14)
{
 struct drm_i915_private *VAR_15 = VAR_14->i915;


 FUNC_0(FUNC_1(VAR_15) >= 8);

 FUNC_5(VAR_14);

 VAR_14->destroy = VAR_11;

 VAR_14->resume = VAR_13;
 VAR_14->reset.prepare = VAR_8;
 VAR_14->reset.reset = VAR_9;
 VAR_14->reset.finish = VAR_7;

 VAR_14->cops = &VAR_10;
 VAR_14->request_alloc = VAR_12;






 VAR_14->emit_fini_breadcrumb = VAR_5;
 if (FUNC_2(VAR_15, 5))
  VAR_14->emit_fini_breadcrumb = VAR_0;

 VAR_14->set_default_submission = VAR_6;

 if (FUNC_1(VAR_15) >= 6)
  VAR_14->emit_bb_start = VAR_1;
 else if (FUNC_1(VAR_15) >= 4)
  VAR_14->emit_bb_start = VAR_4;
 else if (FUNC_3(VAR_15) || FUNC_4(VAR_15))
  VAR_14->emit_bb_start = VAR_2;
 else
  VAR_14->emit_bb_start = VAR_3;
}
