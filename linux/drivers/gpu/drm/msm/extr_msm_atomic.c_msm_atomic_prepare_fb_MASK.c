
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int aspace; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_plane_state {int fb; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct msm_kms *VAR_3 = VAR_2->kms;

 if (!VAR_1->fb)
  return 0;

 FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_1->fb, VAR_3->aspace);
}
