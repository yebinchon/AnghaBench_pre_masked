
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct dm_crtc_state {scalar_t__ active_planes; int interrupts_enabled; int stream; } ;


 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 struct dm_crtc_state* FUNC_1 (struct drm_crtc_state*) ;

__attribute__((used)) static void
FUNC_2(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 struct dm_crtc_state *VAR_2 =
  FUNC_1(VAR_1);

 VAR_2->active_planes = 0;
 VAR_2->interrupts_enabled = 0;

 if (!VAR_2->stream)
  return;

 VAR_2->active_planes =
  FUNC_0(VAR_1);

 VAR_2->interrupts_enabled =
  VAR_2->active_planes > 0;
}
