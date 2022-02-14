
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_fb_par {scalar_t__ vmw_bo; struct drm_framebuffer* set_fb; int * set_mode; TYPE_1__* vmw_priv; int con; int crtc; } ;
struct drm_mode_set {int * connectors; scalar_t__ num_connectors; int * fb; int * mode; scalar_t__ y; scalar_t__ x; int crtc; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct drm_mode_set*) ;

__attribute__((used)) static int FUNC_5(struct vmw_fb_par *VAR_0,
        bool VAR_1,
        bool VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_0->set_fb;
 int VAR_4;


 if (VAR_0->set_mode) {
  struct drm_mode_set VAR_5;

  VAR_5.crtc = VAR_0->crtc;
  VAR_5.x = 0;
  VAR_5.y = 0;
  VAR_5.mode = ((void*)0);
  VAR_5.fb = ((void*)0);
  VAR_5.num_connectors = 0;
  VAR_5.connectors = &VAR_0->con;
  VAR_4 = FUNC_4(&VAR_5);
  if (VAR_4) {
   FUNC_0("Could not unset a mode.\n");
   return VAR_4;
  }
  FUNC_2(VAR_0->vmw_priv->dev, VAR_0->set_mode);
  VAR_0->set_mode = ((void*)0);
 }

 if (VAR_3) {
  FUNC_1(VAR_3);
  VAR_0->set_fb = ((void*)0);
 }

 if (VAR_0->vmw_bo && VAR_1 && VAR_2)
  FUNC_3(&VAR_0->vmw_bo);

 return 0;
}
