
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_hdisplay; int crtc_vdisplay; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int pipe_src_h; int pipe_src_w; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_display_mode*,int) ;
 int FUNC_1 (struct drm_display_mode*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct intel_crtc_state *VAR_8,
         u32 *VAR_9, u32 *VAR_10,
         u32 *VAR_11)
{
 struct drm_display_mode *VAR_12 = &VAR_8->base.adjusted_mode;
 u32 VAR_13 = VAR_12->crtc_hdisplay *
  VAR_8->pipe_src_h;
 u32 VAR_14 = VAR_8->pipe_src_w *
  VAR_12->crtc_vdisplay;
 u32 VAR_15;






 if (VAR_13 > VAR_14) {
  FUNC_0(VAR_12,
        VAR_14 /
        VAR_8->pipe_src_h);

  *VAR_11 = VAR_2;
  if (VAR_8->pipe_src_h != VAR_12->crtc_vdisplay) {
   VAR_15 = FUNC_2(VAR_8->pipe_src_h,
          VAR_12->crtc_vdisplay);

   *VAR_10 |= (VAR_15 << VAR_4 |
          VAR_15 << VAR_5);
   *VAR_9 |= (VAR_3 |
       VAR_7 |
       VAR_1);
  }
 } else if (VAR_13 < VAR_14) {
  FUNC_1(VAR_12,
      VAR_13 /
      VAR_8->pipe_src_w);

  *VAR_11 = VAR_2;
  if (VAR_8->pipe_src_w != VAR_12->crtc_hdisplay) {
   VAR_15 = FUNC_2(VAR_8->pipe_src_w,
          VAR_12->crtc_hdisplay);

   *VAR_10 |= (VAR_15 << VAR_4 |
          VAR_15 << VAR_5);
   *VAR_9 |= (VAR_3 |
       VAR_7 |
       VAR_1);
  }
 } else {

  *VAR_9 |= (VAR_3 |
      VAR_6 | VAR_0 |
      VAR_7 |
      VAR_1);
 }
}
