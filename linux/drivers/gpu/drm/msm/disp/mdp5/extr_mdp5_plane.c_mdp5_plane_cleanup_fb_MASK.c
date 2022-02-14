
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {int aspace; } ;
struct TYPE_3__ {struct msm_kms base; } ;
struct mdp5_kms {TYPE_1__ base; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {int name; } ;
struct TYPE_4__ {int id; } ;
struct drm_framebuffer {TYPE_2__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct mdp5_kms* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_framebuffer*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_1(VAR_0);
 struct msm_kms *VAR_3 = &VAR_2->base.base;
 struct drm_framebuffer *VAR_4 = VAR_1->fb;

 if (!VAR_4)
  return;

 FUNC_0("%s: cleanup: FB[%u]", VAR_0->name, VAR_4->base.id);
 FUNC_2(VAR_4, VAR_3->aspace);
}
