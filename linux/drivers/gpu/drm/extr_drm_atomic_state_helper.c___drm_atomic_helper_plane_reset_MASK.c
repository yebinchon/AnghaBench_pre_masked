
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int pixel_blend_mode; int alpha; int rotation; struct drm_plane* plane; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct drm_plane *VAR_3,
         struct drm_plane_state *VAR_4)
{
 VAR_4->plane = VAR_3;
 VAR_4->rotation = VAR_2;

 VAR_4->alpha = VAR_0;
 VAR_4->pixel_blend_mode = VAR_1;

 VAR_3->state = VAR_4;
}
