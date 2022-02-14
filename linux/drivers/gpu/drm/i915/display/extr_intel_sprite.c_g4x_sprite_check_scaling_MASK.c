
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_rect {int x1; } ;
struct TYPE_5__ {struct drm_rect dst; struct drm_rect src; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_3__* color_plane; TYPE_1__ base; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_framebuffer {TYPE_4__* format; } ;
struct TYPE_8__ {unsigned int* cpp; } ;
struct TYPE_7__ {unsigned int stride; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_rect const*) ;
 int FUNC_2 (struct drm_rect const*) ;

__attribute__((used)) static int
FUNC_3(struct intel_crtc_state *VAR_2,
    struct intel_plane_state *VAR_3)
{
 const struct drm_framebuffer *VAR_4 = VAR_3->base.fb;
 const struct drm_rect *VAR_5 = &VAR_3->base.src;
 const struct drm_rect *VAR_6 = &VAR_3->base.dst;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 const struct drm_display_mode *VAR_12 =
  &VAR_2->base.adjusted_mode;
 unsigned int VAR_13 = VAR_3->color_plane[0].stride;
 unsigned int VAR_14 = VAR_4->format->cpp[0];
 unsigned int VAR_15;
 int VAR_16, VAR_17;

 VAR_10 = FUNC_2(VAR_6);
 VAR_11 = FUNC_1(VAR_6);

 VAR_7 = VAR_5->x1 >> 16;
 VAR_8 = FUNC_2(VAR_5) >> 16;
 VAR_9 = FUNC_1(VAR_5) >> 16;

 if (VAR_8 == VAR_10 && VAR_9 == VAR_11)
  return 0;

 VAR_16 = 3;

 if (VAR_12->flags & VAR_0) {
  if (VAR_9 & 1) {
   FUNC_0("Source height must be even with interlaced modes\n");
   return -VAR_1;
  }
  VAR_17 = 6;
 } else {
  VAR_17 = 3;
 }

 VAR_15 = ((VAR_7 * VAR_14) & 63) + VAR_8 * VAR_14;

 if (VAR_8 < VAR_16 || VAR_9 < VAR_17 ||
     VAR_8 > 2048 || VAR_9 > 2048) {
  FUNC_0("Source dimensions (%dx%d) exceed hardware limits (%dx%d - %dx%d)\n",
         VAR_8, VAR_9, VAR_16, VAR_17, 2048, 2048);
  return -VAR_1;
 }

 if (VAR_15 > 4096) {
  FUNC_0("Fetch width (%d) exceeds hardware max with scaling (%u)\n",
         VAR_15, 4096);
  return -VAR_1;
 }

 if (VAR_13 > 4096) {
  FUNC_0("Stride (%u) exceeds hardware max with scaling (%u)\n",
         VAR_13, 4096);
  return -VAR_1;
 }

 return 0;
}
