
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef int ssize_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_3,
          const struct intel_crtc_state *VAR_4,
          unsigned int VAR_5,
          void *VAR_6, ssize_t VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_3->base.dev);
 u32 VAR_9, *VAR_10 = VAR_6;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_0);

 VAR_9 &= ~(VAR_2 | 0xf);
 VAR_9 |= FUNC_2(VAR_5);

 FUNC_1(VAR_0, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 += 4)
  *VAR_10++ = FUNC_0(VAR_1);
}
