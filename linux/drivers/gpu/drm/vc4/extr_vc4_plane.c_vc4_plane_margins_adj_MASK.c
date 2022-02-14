
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_plane_state {unsigned int crtc_x; unsigned int crtc_y; unsigned int crtc_w; unsigned int crtc_h; } ;
struct drm_plane_state {int crtc; int state; } ;
struct TYPE_2__ {unsigned int hdisplay; unsigned int vdisplay; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 struct drm_crtc_state* FUNC_1 (int ,int ) ;
 struct vc4_plane_state* FUNC_2 (struct drm_plane_state*) ;
 int FUNC_3 (struct drm_crtc_state*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane_state *VAR_1)
{
 struct vc4_plane_state *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct drm_crtc_state *VAR_9;

 VAR_9 = FUNC_1(VAR_1->state,
         VAR_1->crtc);

 FUNC_3(VAR_9, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (!VAR_3 && !VAR_4 && !VAR_5 && !VAR_6)
  return 0;

 if (VAR_3 + VAR_4 >= VAR_9->mode.hdisplay ||
     VAR_5 + VAR_6 >= VAR_9->mode.vdisplay)
  return -VAR_0;

 VAR_7 = VAR_9->mode.hdisplay - (VAR_3 + VAR_4);
 VAR_2->crtc_x = FUNC_0(VAR_2->crtc_x *
            VAR_7,
            VAR_9->mode.hdisplay);
 VAR_2->crtc_x += VAR_3;
 if (VAR_2->crtc_x > VAR_9->mode.hdisplay - VAR_3)
  VAR_2->crtc_x = VAR_9->mode.hdisplay - VAR_3;

 VAR_8 = VAR_9->mode.vdisplay - (VAR_5 + VAR_6);
 VAR_2->crtc_y = FUNC_0(VAR_2->crtc_y *
            VAR_8,
            VAR_9->mode.vdisplay);
 VAR_2->crtc_y += VAR_5;
 if (VAR_2->crtc_y > VAR_9->mode.vdisplay - VAR_5)
  VAR_2->crtc_y = VAR_9->mode.vdisplay - VAR_5;

 VAR_2->crtc_w = FUNC_0(VAR_2->crtc_w *
            VAR_7,
            VAR_9->mode.hdisplay);
 VAR_2->crtc_h = FUNC_0(VAR_2->crtc_h *
            VAR_8,
            VAR_9->mode.vdisplay);

 if (!VAR_2->crtc_w || !VAR_2->crtc_h)
  return -VAR_0;

 return 0;
}
