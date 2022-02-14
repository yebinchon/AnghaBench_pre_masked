
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdmi_dvi_mode; } ;
struct omap_hdmi {TYPE_1__ cfg; } ;
struct omap_dss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_hdmi* FUNC_0 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_1(struct omap_dss_device *VAR_2,
  bool VAR_3)
{
 struct omap_hdmi *VAR_4 = FUNC_0(VAR_2);

 VAR_4->cfg.hdmi_dvi_mode = VAR_3 ? VAR_1 : VAR_0;
 return 0;
}
