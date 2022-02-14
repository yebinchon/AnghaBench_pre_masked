
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ crtc; } ;



__attribute__((used)) static bool
FUNC_0(const struct drm_plane_state *VAR_0,
       const struct drm_plane_state *VAR_1)
{
 if (!VAR_0->crtc || !VAR_1->crtc)
  return 0;

 if (VAR_0->crtc == VAR_1->crtc)
  return 0;






 return 1;
}
