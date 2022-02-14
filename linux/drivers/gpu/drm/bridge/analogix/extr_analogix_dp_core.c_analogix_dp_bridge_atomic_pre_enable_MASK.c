
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {scalar_t__ self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct drm_bridge {struct analogix_dp_device* driver_private; } ;
struct drm_atomic_state {int dummy; } ;
struct analogix_dp_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct drm_crtc* FUNC_1 (struct analogix_dp_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct analogix_dp_device*,int,int) ;
 struct drm_crtc_state* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0,
       struct drm_atomic_state *VAR_1)
{
 struct analogix_dp_device *VAR_2 = VAR_0->driver_private;
 struct drm_crtc *VAR_3;
 struct drm_crtc_state *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_3);

 if (VAR_4 && VAR_4->self_refresh_active)
  return;

 VAR_5 = FUNC_2(VAR_2, 1, 1);
 if (VAR_5)
  FUNC_0("failed to setup the panel ret = %d\n", VAR_5);
}
