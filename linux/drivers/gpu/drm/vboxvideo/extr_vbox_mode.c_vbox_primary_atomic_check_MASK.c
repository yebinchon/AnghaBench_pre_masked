
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ crtc; int state; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_2,
         struct drm_plane_state *VAR_3)
{
 struct drm_crtc_state *VAR_4 = ((void*)0);

 if (VAR_3->crtc) {
  VAR_4 = FUNC_1(
         VAR_3->state, VAR_3->crtc);
  if (FUNC_0(!VAR_4))
   return -VAR_1;
 }

 return FUNC_2(VAR_3, VAR_4,
         VAR_0,
         VAR_0,
         0, 1);
}
