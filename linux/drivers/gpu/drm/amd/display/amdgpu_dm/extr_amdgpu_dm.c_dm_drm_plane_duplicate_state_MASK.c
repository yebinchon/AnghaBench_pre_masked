
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {int state; } ;
struct dm_plane_state {struct drm_plane_state base; scalar_t__ dc_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_1 (scalar_t__) ;
 struct dm_plane_state* FUNC_2 (int,int ) ;
 struct dm_plane_state* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_4(struct drm_plane *VAR_1)
{
 struct dm_plane_state *VAR_2, *VAR_3;

 VAR_3 = FUNC_3(VAR_1->state);
 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_2->base);

 if (VAR_3->dc_state) {
  VAR_2->dc_state = VAR_3->dc_state;
  FUNC_1(VAR_2->dc_state);
 }

 return &VAR_2->base;
}
