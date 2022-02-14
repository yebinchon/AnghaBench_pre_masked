
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane_state {scalar_t__ use_pre; } ;
struct ipu_plane {int ipu_ch; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int FUNC_0 (int ) ;
 struct ipu_plane* FUNC_1 (struct drm_plane*) ;
 struct ipu_plane_state* FUNC_2 (struct drm_plane_state*) ;

bool FUNC_3(struct drm_plane *VAR_0)
{
 struct ipu_plane *VAR_1 = FUNC_1(VAR_0);
 struct drm_plane_state *VAR_2 = VAR_0->state;
 struct ipu_plane_state *VAR_3 = FUNC_2(VAR_2);


 if (!VAR_2->crtc)
  return 0;

 if (VAR_3->use_pre)
  return FUNC_0(VAR_1->ipu_ch);
 return 0;
}
