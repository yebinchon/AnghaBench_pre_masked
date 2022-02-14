
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct TYPE_2__ {scalar_t__ hdmi_use_enci; } ;
struct meson_drm {scalar_t__ io_base; TYPE_1__ venc; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct meson_dw_hdmi* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_2)
{
 struct meson_dw_hdmi *VAR_3 = FUNC_2(VAR_2);
 struct meson_drm *VAR_4 = VAR_3->priv;

 FUNC_0("%s\n", VAR_4->venc.hdmi_use_enci ? "VENCI" : "VENCP");

 if (VAR_4->venc.hdmi_use_enci)
  FUNC_3(1, VAR_4->io_base + FUNC_1(VAR_0));
 else
  FUNC_3(1, VAR_4->io_base + FUNC_1(VAR_1));
}
