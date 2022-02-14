
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;
typedef int ssize_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*,int,unsigned int,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_0,
          const struct intel_crtc_state *VAR_1,
          unsigned int VAR_2,
          void *VAR_3, ssize_t VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_0->base.dev);
 enum transcoder VAR_6 = VAR_1->cpu_transcoder;
 u32 VAR_7, *VAR_8 = VAR_3;
 int VAR_9;

 VAR_7 = FUNC_1(FUNC_0(VAR_6));

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 4)
  *VAR_8++ = FUNC_1(FUNC_2(VAR_5, VAR_6,
           VAR_2, VAR_9 >> 2));
}
