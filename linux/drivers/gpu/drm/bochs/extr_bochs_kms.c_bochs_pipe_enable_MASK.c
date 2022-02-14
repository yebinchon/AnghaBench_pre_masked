
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_simple_display_pipe {TYPE_2__ crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_crtc_state {int mode; } ;
struct bochs_device {int dummy; } ;
struct TYPE_3__ {struct bochs_device* dev_private; } ;


 int FUNC_0 (struct bochs_device*,int *) ;
 int FUNC_1 (struct bochs_device*,struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_2(struct drm_simple_display_pipe *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_plane_state *VAR_2)
{
 struct bochs_device *VAR_3 = VAR_0->crtc.dev->dev_private;

 FUNC_0(VAR_3, &VAR_1->mode);
 FUNC_1(VAR_3, VAR_2);
}
