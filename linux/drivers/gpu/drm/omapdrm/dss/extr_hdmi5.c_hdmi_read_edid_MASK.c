
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_hdmi {int core_enabled; } ;
struct omap_dss_device {int dummy; } ;


 struct omap_hdmi* FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_hdmi*) ;
 int FUNC_2 (struct omap_hdmi*) ;
 int FUNC_3 (struct omap_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_0,
  u8 *VAR_1, int VAR_2)
{
 struct omap_hdmi *VAR_3 = FUNC_0(VAR_0);
 bool VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->core_enabled == 0;

 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_2);

 if (VAR_4)
  FUNC_1(VAR_3);

 return VAR_5;
}
