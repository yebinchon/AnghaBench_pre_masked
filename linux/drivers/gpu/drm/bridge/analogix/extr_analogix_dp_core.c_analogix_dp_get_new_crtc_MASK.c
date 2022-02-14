
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {struct drm_crtc* crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct analogix_dp_device {struct drm_encoder* encoder; } ;


 struct drm_connector* FUNC_0 (struct drm_atomic_state*,struct drm_encoder*) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;

__attribute__((used)) static
struct drm_crtc *FUNC_2(struct analogix_dp_device *VAR_0,
       struct drm_atomic_state *VAR_1)
{
 struct drm_encoder *VAR_2 = VAR_0->encoder;
 struct drm_connector *VAR_3;
 struct drm_connector_state *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 return VAR_4->crtc;
}
