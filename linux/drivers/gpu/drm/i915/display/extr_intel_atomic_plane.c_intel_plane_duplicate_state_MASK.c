
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct intel_plane_state {scalar_t__ flags; int * vma; struct drm_plane_state base; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct intel_plane_state* FUNC_1 (int ,int,int ) ;

struct drm_plane_state *
FUNC_2(struct drm_plane *VAR_1)
{
 struct drm_plane_state *VAR_2;
 struct intel_plane_state *VAR_3;

 VAR_3 = FUNC_1(VAR_1->state, sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_2 = &VAR_3->base;

 FUNC_0(VAR_1, VAR_2);

 VAR_3->vma = ((void*)0);
 VAR_3->flags = 0;

 return VAR_2;
}
