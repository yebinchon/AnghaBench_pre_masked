
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_htotal; int crtc_hsync_start; int crtc_vblank_start; int flags; } ;
struct drm_vblank_crtc {int max_vblank_count; struct drm_display_mode hwmode; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {struct drm_vblank_crtc* vblank; } ;
struct drm_i915_private {TYPE_2__ uncore; TYPE_1__ drm; } ;
struct drm_crtc {int dev; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (struct drm_crtc*) ;

u32 FUNC_9(struct drm_crtc *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_7(VAR_5->dev);
 struct drm_vblank_crtc *VAR_7 = &VAR_6->drm.vblank[FUNC_4(VAR_5)];
 const struct drm_display_mode *VAR_8 = &VAR_7->hwmode;
 enum pipe VAR_9 = FUNC_8(VAR_5)->pipe;
 i915_reg_t VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;
 if (!VAR_7->max_vblank_count)
  return 0;

 VAR_18 = VAR_8->crtc_htotal;
 VAR_17 = VAR_8->crtc_hsync_start;
 VAR_16 = VAR_8->crtc_vblank_start;
 if (VAR_8->flags & VAR_0)
  VAR_16 = FUNC_0(VAR_16, 2);


 VAR_16 *= VAR_18;


 VAR_16 -= VAR_18 - VAR_17;

 VAR_10 = FUNC_2(VAR_9);
 VAR_11 = FUNC_3(VAR_9);

 FUNC_5(&VAR_6->uncore.lock, VAR_19);






 do {
  VAR_12 = FUNC_1(VAR_10) & VAR_1;
  VAR_14 = FUNC_1(VAR_11);
  VAR_13 = FUNC_1(VAR_10) & VAR_1;
 } while (VAR_12 != VAR_13);

 FUNC_6(&VAR_6->uncore.lock, VAR_19);

 VAR_12 >>= VAR_2;
 VAR_15 = VAR_14 & VAR_4;
 VAR_14 >>= VAR_3;






 return (((VAR_12 << 8) | VAR_14) + (VAR_15 >= VAR_16)) & 0xffffff;
}
