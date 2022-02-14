
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ adjusted_mode; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (struct drm_encoder*,struct drm_crtc_state*,struct drm_connector_state*) ;

__attribute__((used)) static int
FUNC_1(struct drm_encoder *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_connector_state *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_1->adjusted_mode.clock *= 2;
 return 0;
}
