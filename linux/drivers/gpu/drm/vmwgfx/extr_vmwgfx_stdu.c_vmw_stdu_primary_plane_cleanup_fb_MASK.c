
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_plane_state {scalar_t__ cpp; int content_fb_type; int pinned; scalar_t__ surf; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct vmw_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static void
FUNC_3(struct drm_plane *VAR_1,
      struct drm_plane_state *VAR_2)
{
 struct vmw_plane_state *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->surf)
  FUNC_0(!VAR_3->pinned);

 FUNC_1(VAR_1, VAR_2);

 VAR_3->content_fb_type = VAR_0;
 VAR_3->cpp = 0;
}
