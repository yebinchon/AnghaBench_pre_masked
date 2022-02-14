
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef int u32 ;
struct TYPE_2__ {struct drm_atomic_state* state; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct drm_i915_private {scalar_t__ ipc_enabled; } ;
struct drm_atomic_state {int dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 int FUNC_3 (int,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static u32
FUNC_5(const struct intel_crtc_state *VAR_0)
{
 struct drm_atomic_state *VAR_1 = VAR_0->base.state;
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->dev);
 uint_fixed_16_16_t VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_1(FUNC_3(8, VAR_3));


 if (FUNC_0(VAR_2) && VAR_2->ipc_enabled)
  VAR_4 /= 2;

 return VAR_4;
}
