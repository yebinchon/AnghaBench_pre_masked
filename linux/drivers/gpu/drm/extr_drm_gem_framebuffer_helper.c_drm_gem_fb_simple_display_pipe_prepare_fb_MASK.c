
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_simple_display_pipe {int plane; } ;
struct drm_plane_state {int dummy; } ;


 int FUNC_0 (int *,struct drm_plane_state*) ;

int FUNC_1(struct drm_simple_display_pipe *VAR_0,
           struct drm_plane_state *VAR_1)
{
 return FUNC_0(&VAR_0->plane, VAR_1);
}
