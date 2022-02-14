
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct meson_drm {scalar_t__ io_base; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct meson_dw_hdmi*,struct drm_display_mode*) ;
 struct meson_dw_hdmi* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct meson_drm*,int,struct drm_display_mode*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_1,
       struct drm_display_mode *VAR_2,
       struct drm_display_mode *VAR_3)
{
 struct meson_dw_hdmi *VAR_4 = FUNC_4(VAR_1);
 struct meson_drm *VAR_5 = VAR_4->priv;
 int VAR_6 = FUNC_2(VAR_2);

 FUNC_0("\"%s\" vic %d\n", VAR_2->name, VAR_6);


 FUNC_5(VAR_5, VAR_6, VAR_2);


 FUNC_3(VAR_4, VAR_2);


 FUNC_6(0, VAR_5->io_base + FUNC_1(VAR_0));
}
