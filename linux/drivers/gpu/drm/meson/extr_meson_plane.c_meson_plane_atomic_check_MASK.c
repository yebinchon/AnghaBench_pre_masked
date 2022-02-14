
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int crtc; int state; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_1,
        struct drm_plane_state *VAR_2)
{
 struct drm_crtc_state *VAR_3;

 if (!VAR_2->crtc)
  return 0;

 VAR_3 = FUNC_3(VAR_2->state, VAR_2->crtc);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);






 return FUNC_4(VAR_2, VAR_3,
         FUNC_0(1, 5),
         VAR_0,
         0, 1);
}
