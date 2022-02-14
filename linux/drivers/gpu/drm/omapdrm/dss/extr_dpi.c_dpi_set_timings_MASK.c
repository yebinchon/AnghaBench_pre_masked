
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct dpi_data {int pixelclock; int lock; } ;


 int FUNC_0 (char*) ;
 struct dpi_data* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct omap_dss_device *VAR_0,
       const struct drm_display_mode *VAR_1)
{
 struct dpi_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_0("dpi_set_timings\n");

 FUNC_2(&VAR_2->lock);

 VAR_2->pixelclock = VAR_1->clock * 1000;

 FUNC_3(&VAR_2->lock);
}
