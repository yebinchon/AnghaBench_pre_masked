
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union meson_hdmi_venc_mode {int dummy; } meson_hdmi_venc_mode ;
struct meson_hdmi_venc_vic_mode {int vic; union meson_hdmi_venc_mode* mode; } ;


 struct meson_hdmi_venc_vic_mode* VAR_0 ;

__attribute__((used)) static union meson_hdmi_venc_mode *FUNC_0(int VAR_1)
{
 struct meson_hdmi_venc_vic_mode *VAR_2 = VAR_0;

 while (VAR_2->vic && VAR_2->mode) {
  if (VAR_2->vic == VAR_1)
   return VAR_2->mode;
  VAR_2++;
 }

 return ((void*)0);
}
