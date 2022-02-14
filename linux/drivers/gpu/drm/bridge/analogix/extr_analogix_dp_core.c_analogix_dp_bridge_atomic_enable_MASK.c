
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {scalar_t__ self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct drm_bridge {struct analogix_dp_device* driver_private; } ;
struct drm_atomic_state {int dummy; } ;
struct analogix_dp_device {scalar_t__ dpms_mode; int dev; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct analogix_dp_device*) ;
 struct drm_crtc* FUNC_2 (struct analogix_dp_device*,struct drm_atomic_state*) ;
 scalar_t__ FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (int ,char*,...) ;
 struct drm_crtc_state* FUNC_5 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_2,
          struct drm_atomic_state *VAR_3)
{
 struct analogix_dp_device *VAR_4 = VAR_2->driver_private;
 struct drm_crtc *VAR_5;
 struct drm_crtc_state *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_5);

 if (VAR_6 && VAR_6->self_refresh_active) {
  VAR_8 = FUNC_1(VAR_4);
  if (VAR_8)
   FUNC_0("Failed to disable psr %d\n", VAR_8);
  return;
 }

 if (VAR_4->dpms_mode == VAR_0)
  return;

 while (VAR_7 < VAR_1) {
  if (FUNC_3(VAR_4) == 0) {
   VAR_4->dpms_mode = VAR_0;
   return;
  }
  FUNC_4(VAR_4->dev, "failed to set bridge, retry: %d\n",
   VAR_7);
  VAR_7++;
  FUNC_6(10, 11);
 }
 FUNC_4(VAR_4->dev, "too many times retry set bridge, give it up\n");
}
