
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxsfb_drm_private {int panel; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct drm_simple_display_pipe {TYPE_1__ plane; } ;
struct drm_plane_state {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mxsfb_drm_private* FUNC_2 (struct drm_simple_display_pipe*) ;
 int FUNC_3 (struct mxsfb_drm_private*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_simple_display_pipe *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_plane_state *VAR_2)
{
 struct mxsfb_drm_private *VAR_3 = FUNC_2(VAR_0);
 struct drm_device *VAR_4 = VAR_0->plane.dev;

 FUNC_4(VAR_4->dev);
 FUNC_1(VAR_3->panel);
 FUNC_3(VAR_3);
 FUNC_0(VAR_3->panel);
}
