
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_pipe_crc {scalar_t__ skipped; int source; } ;
struct TYPE_2__ {int opened; } ;
struct drm_crtc {size_t index; TYPE_1__ crc; int dev; } ;
struct intel_crtc {struct drm_crtc base; } ;
struct drm_i915_private {struct intel_pipe_crc* pipe_crc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,size_t,int *,int *) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void FUNC_5(struct intel_crtc *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->base;
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->dev);
 struct intel_pipe_crc *VAR_3 = &VAR_2->pipe_crc[VAR_1->index];
 u32 VAR_4 = 0;

 if (!VAR_1->crc.opened)
  return;

 if (FUNC_3(VAR_2, VAR_1->index, &VAR_3->source, &VAR_4) < 0)
  return;


 VAR_3->skipped = 0;

 FUNC_0(FUNC_1(VAR_1->index), VAR_4);
 FUNC_2(FUNC_1(VAR_1->index));
}
