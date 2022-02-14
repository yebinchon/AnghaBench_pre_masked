
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gma_crtc {int active; } ;
struct drm_psb_private {struct drm_crtc** pipe_to_crtc_mapping; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; } ;
struct TYPE_2__ {int * fb; } ;


 struct gma_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_crtc *VAR_2;
 struct drm_psb_private *VAR_3 = VAR_0->dev_private;
 struct gma_crtc *VAR_4 = ((void*)0);

 VAR_2 = VAR_3->pipe_to_crtc_mapping[VAR_1];
 VAR_4 = FUNC_0(VAR_2);

 if (VAR_2->primary->fb == ((void*)0) || !VAR_4->active)
  return 0;
 return 1;
}
