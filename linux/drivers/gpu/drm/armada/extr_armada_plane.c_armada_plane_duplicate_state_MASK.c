
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {int state; } ;
struct armada_plane_state {struct drm_plane_state base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct armada_plane_state* FUNC_2 (int ,int,int ) ;

struct drm_plane_state *FUNC_3(struct drm_plane *VAR_1)
{
 struct armada_plane_state *VAR_2;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1, &VAR_2->base);

 return &VAR_2->base;
}
