
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ crtc; scalar_t__ fb; } ;



__attribute__((used)) static bool FUNC_0(struct drm_plane_state *VAR_0)
{
 return VAR_0->fb && VAR_0->crtc;
}
