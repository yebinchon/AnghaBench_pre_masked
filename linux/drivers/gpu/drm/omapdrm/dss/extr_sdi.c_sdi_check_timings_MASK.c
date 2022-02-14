
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdi_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct dispc_clock_info {unsigned long lck_div; unsigned long pck_div; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 struct sdi_device* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct sdi_device*,unsigned long,unsigned long*,struct dispc_clock_info*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct sdi_device *VAR_3 = FUNC_1(VAR_1);
 struct dispc_clock_info VAR_4;
 unsigned long VAR_5 = VAR_2->clock * 1000;
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_5 == 0)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_5, &VAR_6, &VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_6 / VAR_4.lck_div / VAR_4.pck_div;

 if (VAR_7 != VAR_5) {
  FUNC_0("Pixel clock adjusted from %lu Hz to %lu Hz\n",
   VAR_5, VAR_7);

  VAR_2->clock = VAR_7 / 1000;
 }

 return 0;
}
