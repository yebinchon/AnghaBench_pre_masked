
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_parallel_display {scalar_t__ bus_format; int bus_flags; } ;
struct imx_crtc_state {int di_hsync_pin; int di_vsync_pin; scalar_t__ bus_format; int bus_flags; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_info {scalar_t__* bus_formats; int bus_flags; scalar_t__ num_bus_formats; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;


 struct imx_parallel_display* FUNC_0 (struct drm_encoder*) ;
 struct imx_crtc_state* FUNC_1 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_2(struct drm_encoder *VAR_0,
           struct drm_crtc_state *VAR_1,
           struct drm_connector_state *VAR_2)
{
 struct imx_crtc_state *VAR_3 = FUNC_1(VAR_1);
 struct drm_display_info *VAR_4 = &VAR_2->connector->display_info;
 struct imx_parallel_display *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_5->bus_format && VAR_4->num_bus_formats) {
  VAR_3->bus_flags = VAR_4->bus_flags;
  VAR_3->bus_format = VAR_4->bus_formats[0];
 } else {
  VAR_3->bus_flags = VAR_5->bus_flags;
  VAR_3->bus_format = VAR_5->bus_format;
 }
 VAR_3->di_hsync_pin = 2;
 VAR_3->di_vsync_pin = 3;

 return 0;
}
