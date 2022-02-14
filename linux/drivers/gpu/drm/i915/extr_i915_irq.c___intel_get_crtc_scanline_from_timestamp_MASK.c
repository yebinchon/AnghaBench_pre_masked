
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_display_mode {scalar_t__ crtc_vblank_start; scalar_t__ crtc_vtotal; scalar_t__ crtc_htotal; scalar_t__ crtc_clock; } ;
struct drm_vblank_crtc {struct drm_display_mode hwmode; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 size_t FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 struct drm_i915_private* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_7(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_1->base.dev);
 struct drm_vblank_crtc *VAR_3 =
  &VAR_1->base.dev->vblank[FUNC_3(&VAR_1->base)];
 const struct drm_display_mode *VAR_4 = &VAR_3->hwmode;
 u32 VAR_5 = VAR_4->crtc_vblank_start;
 u32 VAR_6 = VAR_4->crtc_vtotal;
 u32 VAR_7 = VAR_4->crtc_htotal;
 u32 VAR_8 = VAR_4->crtc_clock;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;







 do {





  VAR_10 = FUNC_0(FUNC_1(VAR_1->pipe));





  VAR_11 = FUNC_0(VAR_0);

  VAR_12 = FUNC_0(FUNC_1(VAR_1->pipe));
 } while (VAR_12 != VAR_10);

 VAR_9 = FUNC_2(FUNC_5(VAR_11 - VAR_10,
     VAR_8), 1000 * VAR_7);
 VAR_9 = FUNC_4(VAR_9, VAR_6 - 1);
 VAR_9 = (VAR_9 + VAR_5) % VAR_6;

 return VAR_9;
}
