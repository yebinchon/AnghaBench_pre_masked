
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_connector {int native_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {int connector; } ;


 struct nouveau_connector* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_encoder*,struct drm_crtc_state*,struct drm_connector_state*,int ) ;

__attribute__((used)) static int
FUNC_2(struct drm_encoder *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_connector_state *VAR_2)
{
 struct nouveau_connector *VAR_3 =
  FUNC_0(VAR_2->connector);
 return FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3->native_mode);
}
