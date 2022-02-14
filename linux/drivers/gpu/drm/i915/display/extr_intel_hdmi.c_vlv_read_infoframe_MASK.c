
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
typedef int ssize_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_1,
          const struct intel_crtc_state *VAR_2,
          unsigned int VAR_3,
          void *VAR_4, ssize_t VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_1->base.dev);
 struct intel_crtc *VAR_7 = FUNC_6(VAR_2->base.crtc);
 u32 VAR_8, *VAR_9 = VAR_4;
 int VAR_10;

 VAR_8 = FUNC_0(FUNC_2(VAR_7->pipe));

 VAR_8 &= ~(VAR_0 | 0xf);
 VAR_8 |= FUNC_4(VAR_3);

 FUNC_1(FUNC_2(VAR_7->pipe), VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 += 4)
  *VAR_9++ = FUNC_0(FUNC_3(VAR_7->pipe));
}
