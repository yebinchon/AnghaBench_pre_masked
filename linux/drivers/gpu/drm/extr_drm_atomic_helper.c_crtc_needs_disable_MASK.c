
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {scalar_t__ self_refresh_active; int enable; scalar_t__ active; } ;


 int FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static bool
FUNC_1(struct drm_crtc_state *VAR_0,
     struct drm_crtc_state *VAR_1)
{




 if (!VAR_1)
  return FUNC_0(VAR_0);






 return VAR_0->active ||
        (VAR_0->self_refresh_active && !VAR_1->enable) ||
        VAR_1->self_refresh_active;
}
