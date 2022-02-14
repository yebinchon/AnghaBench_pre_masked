
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_crtc_state {int di_hsync_pin; int di_vsync_pin; int bus_format; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 struct imx_crtc_state* FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_1(struct drm_encoder *VAR_1,
        struct drm_crtc_state *VAR_2,
        struct drm_connector_state *VAR_3)
{
 struct imx_crtc_state *VAR_4 = FUNC_0(VAR_2);

 VAR_4->bus_format = VAR_0;
 VAR_4->di_hsync_pin = 2;
 VAR_4->di_vsync_pin = 3;

 return 0;
}
