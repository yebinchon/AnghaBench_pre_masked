
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct meson_drm {scalar_t__ io_base; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 struct meson_dw_hdmi* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_3)
{
 struct meson_dw_hdmi *VAR_4 = FUNC_2(VAR_3);
 struct meson_drm *VAR_5 = VAR_4->priv;

 FUNC_0("\n");

 FUNC_3(0x3, 0,
       VAR_5->io_base + FUNC_1(VAR_2));

 FUNC_4(0, VAR_5->io_base + FUNC_1(VAR_0));
 FUNC_4(0, VAR_5->io_base + FUNC_1(VAR_1));
}
