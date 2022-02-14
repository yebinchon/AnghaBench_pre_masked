
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {struct drm_crtc* crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct drm_connector* FUNC_0 (struct drm_atomic_state*,struct drm_encoder*) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;

__attribute__((used)) static
struct drm_crtc *FUNC_2(struct drm_encoder *VAR_0,
           struct drm_atomic_state *VAR_1)
{
 struct drm_connector *VAR_2;
 struct drm_connector_state *VAR_3;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return VAR_3->crtc;
}
