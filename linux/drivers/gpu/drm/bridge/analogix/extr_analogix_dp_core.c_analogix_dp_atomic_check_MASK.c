
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {scalar_t__ self_refresh_active; } ;
struct drm_connector_state {int self_refresh_aware; int crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct analogix_dp_device {int psr_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,int ) ;
 struct analogix_dp_device* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_2,
        struct drm_atomic_state *VAR_3)
{
 struct analogix_dp_device *VAR_4 = FUNC_3(VAR_2);
 struct drm_connector_state *VAR_5;
 struct drm_crtc_state *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (FUNC_0(!VAR_5))
  return -VAR_1;

 VAR_5->self_refresh_aware = 1;

 if (!VAR_5->crtc)
  return 0;

 VAR_6 = FUNC_2(VAR_3, VAR_5->crtc);
 if (!VAR_6)
  return 0;

 if (VAR_6->self_refresh_active && !VAR_4->psr_supported)
  return -VAR_0;

 return 0;
}
