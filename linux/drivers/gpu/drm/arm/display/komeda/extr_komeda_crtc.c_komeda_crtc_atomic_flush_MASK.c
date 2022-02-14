
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;

__attribute__((used)) static void
FUNC_2(struct drm_crtc *VAR_0,
    struct drm_crtc_state *VAR_1)
{

 if (FUNC_0(VAR_0->state))
  return;

 FUNC_1(VAR_0, VAR_1);
}
