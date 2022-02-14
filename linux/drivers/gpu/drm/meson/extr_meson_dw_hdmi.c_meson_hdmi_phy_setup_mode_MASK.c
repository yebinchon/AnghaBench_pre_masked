
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct meson_drm {int hhi; } ;
struct drm_display_mode {unsigned int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct meson_dw_hdmi*,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct meson_dw_hdmi *VAR_3,
          struct drm_display_mode *VAR_4)
{
 struct meson_drm *VAR_5 = VAR_3->priv;
 unsigned int VAR_6 = VAR_4->clock;

 if (FUNC_0(VAR_3, "amlogic,meson-gxl-dw-hdmi") ||
     FUNC_0(VAR_3, "amlogic,meson-gxm-dw-hdmi")) {
  if (VAR_6 >= 371250) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x333d3282);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2136315b);
  } else if (VAR_6 >= 297000) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33303382);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2036315b);
  } else if (VAR_6 >= 148500) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33303362);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2016315b);
  } else {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33604142);
   FUNC_1(VAR_5->hhi, VAR_1, 0x0016315b);
  }
 } else if (FUNC_0(VAR_3,
      "amlogic,meson-gxbb-dw-hdmi")) {
  if (VAR_6 >= 371250) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33353245);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2100115b);
  } else if (VAR_6 >= 297000) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33634283);
   FUNC_1(VAR_5->hhi, VAR_1, 0xb000115b);
  } else {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33632122);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2000115b);
  }
 } else if (FUNC_0(VAR_3,
      "amlogic,meson-g12a-dw-hdmi")) {
  if (VAR_6 >= 371250) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x37eb65c4);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2ab0ff3b);
   FUNC_1(VAR_5->hhi, VAR_2, 0x0000080b);
  } else if (VAR_6 >= 297000) {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33eb6262);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2ab0ff3b);
   FUNC_1(VAR_5->hhi, VAR_2, 0x00000003);
  } else {

   FUNC_1(VAR_5->hhi, VAR_0, 0x33eb4242);
   FUNC_1(VAR_5->hhi, VAR_1, 0x2ab0ff3b);
   FUNC_1(VAR_5->hhi, VAR_2, 0x00000003);
  }
 }
}
