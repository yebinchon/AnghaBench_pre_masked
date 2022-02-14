
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int active; int enable; } ;


 int FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static bool FUNC_1(struct drm_crtc_state *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return !VAR_0->enable || !VAR_0->active;
}
