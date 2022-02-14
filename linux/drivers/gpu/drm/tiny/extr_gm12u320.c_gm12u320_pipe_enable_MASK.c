
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gm12u320_device {int pipe_enabled; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_simple_display_pipe {TYPE_2__ crtc; } ;
struct drm_rect {int member_3; int member_2; int member_1; int member_0; } ;
struct drm_plane_state {int fb; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_3__ {struct gm12u320_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct drm_rect*) ;
 int FUNC_1 (struct gm12u320_device*) ;

__attribute__((used)) static void FUNC_2(struct drm_simple_display_pipe *VAR_2,
     struct drm_crtc_state *VAR_3,
     struct drm_plane_state *VAR_4)
{
 struct gm12u320_device *VAR_5 = VAR_2->crtc.dev->dev_private;
 struct drm_rect VAR_6 = { 0, 0, VAR_1, VAR_0 };

 FUNC_0(VAR_4->fb, &VAR_6);
 FUNC_1(VAR_5);
 VAR_5->pipe_enabled = 1;
}
