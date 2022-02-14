
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pipe_crc {int lock; int skipped; } ;
struct drm_crtc {size_t index; int dev; } ;
struct intel_crtc {struct drm_crtc base; } ;
struct drm_i915_private {struct intel_pipe_crc* pipe_crc; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct drm_i915_private* FUNC_6 (int ) ;

void FUNC_7(struct intel_crtc *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->base;
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2->dev);
 struct intel_pipe_crc *VAR_4 = &VAR_3->pipe_crc[VAR_2->index];


 FUNC_4(&VAR_4->lock);
 VAR_4->skipped = VAR_0;
 FUNC_5(&VAR_4->lock);

 FUNC_0(FUNC_1(VAR_2->index), 0);
 FUNC_2(FUNC_1(VAR_2->index));
 FUNC_3(VAR_3);
}
