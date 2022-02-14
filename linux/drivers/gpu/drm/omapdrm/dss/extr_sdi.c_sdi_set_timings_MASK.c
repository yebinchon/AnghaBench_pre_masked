
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdi_device {int pixelclock; } ;
struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int clock; } ;


 struct sdi_device* FUNC_0 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_1(struct omap_dss_device *VAR_0,
       const struct drm_display_mode *VAR_1)
{
 struct sdi_device *VAR_2 = FUNC_0(VAR_0);

 VAR_2->pixelclock = VAR_1->clock * 1000;
}
