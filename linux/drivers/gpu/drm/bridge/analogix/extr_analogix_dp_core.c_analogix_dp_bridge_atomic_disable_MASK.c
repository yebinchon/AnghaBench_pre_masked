
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {scalar_t__ self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct drm_bridge {struct analogix_dp_device* driver_private; } ;
struct drm_atomic_state {int dummy; } ;
struct analogix_dp_device {int dummy; } ;


 int FUNC_0 (struct drm_bridge*) ;
 struct drm_crtc* FUNC_1 (struct analogix_dp_device*,struct drm_atomic_state*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0,
           struct drm_atomic_state *VAR_1)
{
 struct analogix_dp_device *VAR_2 = VAR_0->driver_private;
 struct drm_crtc *VAR_3;
 struct drm_crtc_state *VAR_4 = ((void*)0);

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4)
  goto out;


 if (VAR_4->self_refresh_active)
  return;

out:
 FUNC_0(VAR_0);
}
