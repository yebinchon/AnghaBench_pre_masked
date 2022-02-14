
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct vmw_plane_state {struct drm_plane_state base; scalar_t__ bo; scalar_t__ surf; scalar_t__ cpp; scalar_t__ pinned; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct vmw_plane_state* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

struct drm_plane_state *
FUNC_4(struct drm_plane *VAR_1)
{
 struct drm_plane_state *VAR_2;
 struct vmw_plane_state *VAR_3;

 VAR_3 = FUNC_1(VAR_1->state, sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_3->pinned = 0;
 VAR_3->cpp = 0;


 if (VAR_3->surf)
  (void) FUNC_3(VAR_3->surf);

 if (VAR_3->bo)
  (void) FUNC_2(VAR_3->bo);

 VAR_2 = &VAR_3->base;

 FUNC_0(VAR_1, VAR_2);

 return VAR_2;
}
