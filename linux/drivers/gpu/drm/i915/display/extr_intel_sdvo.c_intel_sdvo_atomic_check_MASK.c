
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_connector_state {int tv; } ;
struct drm_crtc_state {int connectors_changed; } ;
struct drm_connector_state {scalar_t__ crtc; int tv; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct drm_connector_state* FUNC_0 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,scalar_t__) ;
 struct drm_connector_state* FUNC_2 (struct drm_atomic_state*,struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,struct drm_atomic_state*) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 struct intel_sdvo_connector_state* FUNC_5 (struct drm_connector_state*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_0,
       struct drm_atomic_state *VAR_1)
{
 struct drm_connector_state *VAR_2 =
  FUNC_0(VAR_1, VAR_0);
 struct drm_connector_state *VAR_3 =
  FUNC_2(VAR_1, VAR_0);
 struct intel_sdvo_connector_state *VAR_4 =
  FUNC_5(VAR_3);
 struct intel_sdvo_connector_state *VAR_5 =
  FUNC_5(VAR_2);

 if (VAR_2->crtc &&
     (FUNC_4(&VAR_4->tv, &VAR_5->tv, sizeof(VAR_4->tv)) ||
      FUNC_4(&VAR_3->tv, &VAR_2->tv, sizeof(VAR_3->tv)))) {
  struct drm_crtc_state *VAR_6 =
   FUNC_1(VAR_1,
            VAR_2->crtc);

  VAR_6->connectors_changed = 1;
 }

 return FUNC_3(VAR_0, VAR_1);
}
