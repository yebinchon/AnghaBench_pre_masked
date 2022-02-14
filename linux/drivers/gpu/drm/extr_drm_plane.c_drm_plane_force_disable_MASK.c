
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int * crtc; int * fb; int * old_fb; TYPE_1__* funcs; int dev; } ;
struct TYPE_2__ {int (* disable_plane ) (struct drm_plane*,int *) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_plane*,int *) ;

void FUNC_5(struct drm_plane *VAR_0)
{
 int VAR_1;

 if (!VAR_0->fb)
  return;

 FUNC_1(FUNC_2(VAR_0->dev));

 VAR_0->old_fb = VAR_0->fb;
 VAR_1 = VAR_0->funcs->disable_plane(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_0("failed to disable plane with busy fb\n");
  VAR_0->old_fb = ((void*)0);
  return;
 }

 FUNC_3(VAR_0->old_fb);
 VAR_0->old_fb = ((void*)0);
 VAR_0->fb = ((void*)0);
 VAR_0->crtc = ((void*)0);
}
