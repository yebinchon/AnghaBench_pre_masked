
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;
struct drm_plane_state {int crtc_y; int crtc_x; int crtc_h; int crtc_w; } ;
struct drm_plane {scalar_t__ type; struct drm_plane_state* state; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;

int FUNC_7(struct sun4i_backend *VAR_2,
         int VAR_3, struct drm_plane *VAR_4)
{
 struct drm_plane_state *VAR_5 = VAR_4->state;

 FUNC_0("Updating layer %d\n", VAR_3);

 if (VAR_4->type == VAR_0) {
  FUNC_0("Primary layer, updating global size W: %u H: %u\n",
     VAR_5->crtc_w, VAR_5->crtc_h);
  FUNC_6(VAR_2->engine.regs, VAR_1,
        FUNC_1(VAR_5->crtc_w,
         VAR_5->crtc_h));
 }


 FUNC_0("Layer size W: %u H: %u\n",
    VAR_5->crtc_w, VAR_5->crtc_h);
 FUNC_6(VAR_2->engine.regs, FUNC_5(VAR_3),
       FUNC_4(VAR_5->crtc_w,
        VAR_5->crtc_h));


 FUNC_0("Layer coordinates X: %d Y: %d\n",
    VAR_5->crtc_x, VAR_5->crtc_y);
 FUNC_6(VAR_2->engine.regs, FUNC_3(VAR_3),
       FUNC_2(VAR_5->crtc_x,
        VAR_5->crtc_y));

 return 0;
}
