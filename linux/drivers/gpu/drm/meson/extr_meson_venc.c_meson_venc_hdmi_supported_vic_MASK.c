
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_hdmi_venc_vic_mode {int vic; scalar_t__ mode; } ;


 struct meson_hdmi_venc_vic_mode* VAR_0 ;

bool FUNC_0(int VAR_1)
{
 struct meson_hdmi_venc_vic_mode *VAR_2 = VAR_0;

 while (VAR_2->vic && VAR_2->mode) {
  if (VAR_2->vic == VAR_1)
   return 1;
  VAR_2++;
 }

 return 0;
}
