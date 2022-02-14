
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_info {int num_bus_formats; int* bus_formats; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
struct TYPE_2__ {scalar_t__ connector_type; struct drm_display_info display_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int FUNC_0(struct drm_encoder *VAR_2,
         struct drm_crtc_state *VAR_3,
         struct drm_connector_state *VAR_4)
{
 struct drm_display_info *VAR_5 = &VAR_4->connector->display_info;

 if (VAR_5->num_bus_formats != 1)
  return -VAR_1;

 if (VAR_4->connector->connector_type == VAR_0)
  return 0;

 switch (*VAR_5->bus_formats) {
 case 131:
 case 130:
 case 129:
 case 128:
  return 0;
 default:
  return -VAR_1;
 }
}
