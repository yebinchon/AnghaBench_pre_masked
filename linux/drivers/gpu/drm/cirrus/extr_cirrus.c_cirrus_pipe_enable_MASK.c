
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_simple_display_pipe {TYPE_2__ crtc; } ;
struct drm_plane_state {int fb; } ;
struct drm_crtc_state {int mode; } ;
struct cirrus_device {int dummy; } ;
struct TYPE_3__ {struct cirrus_device* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cirrus_device*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_simple_display_pipe *VAR_0,
          struct drm_crtc_state *VAR_1,
          struct drm_plane_state *VAR_2)
{
 struct cirrus_device *VAR_3 = VAR_0->crtc.dev->dev_private;

 FUNC_1(VAR_3, &VAR_1->mode, VAR_2->fb);
 FUNC_0(VAR_2->fb);
}
