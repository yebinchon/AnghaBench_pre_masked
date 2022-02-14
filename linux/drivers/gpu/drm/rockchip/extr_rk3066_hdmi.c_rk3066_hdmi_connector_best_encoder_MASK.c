
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct rk3066_hdmi {struct drm_encoder encoder; } ;
struct drm_connector {int dummy; } ;


 struct rk3066_hdmi* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *
FUNC_1(struct drm_connector *VAR_0)
{
 struct rk3066_hdmi *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->encoder;
}
