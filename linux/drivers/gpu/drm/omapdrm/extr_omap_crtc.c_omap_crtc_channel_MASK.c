
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_crtc {int channel; } ;
struct drm_crtc {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 struct omap_crtc* FUNC_0 (struct drm_crtc*) ;

enum omap_channel FUNC_1(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->channel;
}
