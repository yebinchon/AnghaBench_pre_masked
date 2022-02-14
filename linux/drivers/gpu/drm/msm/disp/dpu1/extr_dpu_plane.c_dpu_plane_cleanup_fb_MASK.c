
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {TYPE_2__* fb; } ;
struct drm_plane {int dummy; } ;
struct dpu_plane_state {int aspace; } ;
struct dpu_plane {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (struct dpu_plane*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 struct dpu_plane* FUNC_2 (struct drm_plane*) ;
 struct dpu_plane_state* FUNC_3 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0,
  struct drm_plane_state *VAR_1)
{
 struct dpu_plane *VAR_2 = FUNC_2(VAR_0);
 struct dpu_plane_state *VAR_3;

 if (!VAR_1 || !VAR_1->fb)
  return;

 VAR_3 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, "FB[%u]\n", VAR_1->fb->base.id);

 FUNC_1(VAR_1->fb, VAR_3->aspace);
}
