
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_avi_infoframe {int dummy; } ;
struct TYPE_2__ {struct hdmi_avi_infoframe infoframe; } ;
struct omap_hdmi {TYPE_1__ cfg; } ;
struct omap_dss_device {int dummy; } ;


 struct omap_hdmi* FUNC_0 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_1(struct omap_dss_device *VAR_0,
  const struct hdmi_avi_infoframe *VAR_1)
{
 struct omap_hdmi *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cfg.infoframe = *VAR_1;
 return 0;
}
