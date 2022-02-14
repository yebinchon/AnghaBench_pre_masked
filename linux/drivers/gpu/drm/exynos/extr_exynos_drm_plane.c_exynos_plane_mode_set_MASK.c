
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; unsigned int w; unsigned int h; } ;
struct TYPE_4__ {unsigned int x; unsigned int y; unsigned int w; unsigned int h; } ;
struct drm_plane_state {int crtc_x; int crtc_y; unsigned int crtc_w; unsigned int crtc_h; int src_x; int src_y; int src_w; int src_h; int state; struct drm_crtc* crtc; } ;
struct exynos_drm_plane_state {unsigned int h_ratio; unsigned int v_ratio; TYPE_3__ crtc; TYPE_1__ src; struct drm_plane_state base; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;
struct drm_crtc {TYPE_2__* dev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ,char*,int,int,unsigned int,unsigned int) ;
 struct drm_crtc_state* FUNC_1 (int ,struct drm_crtc*) ;
 unsigned int FUNC_2 (int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct exynos_drm_plane_state *VAR_0)
{
 struct drm_plane_state *VAR_1 = &VAR_0->base;
 struct drm_crtc *VAR_2 = VAR_1->crtc;
 struct drm_crtc_state *VAR_3 =
   FUNC_1(VAR_1->state, VAR_2);
 struct drm_display_mode *VAR_4 = &VAR_3->adjusted_mode;
 int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;







 VAR_5 = VAR_1->crtc_x;
 VAR_6 = VAR_1->crtc_y;
 VAR_7 = VAR_1->crtc_w;
 VAR_8 = VAR_1->crtc_h;

 VAR_9 = VAR_1->src_x >> 16;
 VAR_10 = VAR_1->src_y >> 16;
 VAR_11 = VAR_1->src_w >> 16;
 VAR_12 = VAR_1->src_h >> 16;


 VAR_0->h_ratio = (VAR_11 << 16) / VAR_7;
 VAR_0->v_ratio = (VAR_12 << 16) / VAR_8;


 VAR_13 = FUNC_2(VAR_5, VAR_7, VAR_4->hdisplay);
 VAR_14 = FUNC_2(VAR_6, VAR_8, VAR_4->vdisplay);

 if (VAR_5 < 0) {
  if (VAR_13)
   VAR_9 += ((-VAR_5) * VAR_0->h_ratio) >> 16;
  VAR_5 = 0;
 }

 if (VAR_6 < 0) {
  if (VAR_14)
   VAR_10 += ((-VAR_6) * VAR_0->v_ratio) >> 16;
  VAR_6 = 0;
 }


 VAR_0->src.x = VAR_9;
 VAR_0->src.y = VAR_10;
 VAR_0->src.w = (VAR_13 * VAR_0->h_ratio) >> 16;
 VAR_0->src.h = (VAR_14 * VAR_0->v_ratio) >> 16;


 VAR_0->crtc.x = VAR_5;
 VAR_0->crtc.y = VAR_6;
 VAR_0->crtc.w = VAR_13;
 VAR_0->crtc.h = VAR_14;

 FUNC_0(VAR_2->dev->dev,
     "plane : offset_x/y(%d,%d), width/height(%d,%d)",
     VAR_0->crtc.x, VAR_0->crtc.y,
     VAR_0->crtc.w, VAR_0->crtc.h);
}
