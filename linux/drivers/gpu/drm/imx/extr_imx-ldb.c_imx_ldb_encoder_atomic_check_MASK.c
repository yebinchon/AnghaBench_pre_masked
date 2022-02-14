
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imx_ldb_channel {int bus_format; int bus_flags; } ;
struct imx_crtc_state {int di_hsync_pin; int di_vsync_pin; int bus_format; int bus_flags; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_info {int* bus_formats; int bus_flags; scalar_t__ num_bus_formats; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 struct imx_ldb_channel* FUNC_0 (struct drm_encoder*) ;
 struct imx_crtc_state* FUNC_1 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_2(struct drm_encoder *VAR_3,
     struct drm_crtc_state *VAR_4,
     struct drm_connector_state *VAR_5)
{
 struct imx_crtc_state *VAR_6 = FUNC_1(VAR_4);
 struct imx_ldb_channel *VAR_7 = FUNC_0(VAR_3);
 struct drm_display_info *VAR_8 = &VAR_5->connector->display_info;
 u32 VAR_9 = VAR_7->bus_format;


 if (!VAR_9 && VAR_8->num_bus_formats) {
  VAR_9 = VAR_8->bus_formats[0];
  VAR_6->bus_flags = VAR_8->bus_flags;
 } else {
  VAR_9 = VAR_7->bus_format;
  VAR_6->bus_flags = VAR_7->bus_flags;
 }
 switch (VAR_9) {
 case 130:
  VAR_6->bus_format = VAR_1;
  break;
 case 128:
 case 129:
  VAR_6->bus_format = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_6->di_hsync_pin = 2;
 VAR_6->di_vsync_pin = 3;

 return 0;
}
