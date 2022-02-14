
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct TYPE_2__ {int hdmi_use_enci; } ;
struct meson_drm {TYPE_1__ venc; } ;
struct drm_display_mode {unsigned int clock; int flags; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_display_mode*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct meson_drm*,int ,unsigned int,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct meson_dw_hdmi *VAR_3,
        struct drm_display_mode *VAR_4)
{
 struct meson_drm *VAR_5 = VAR_3->priv;
 int VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_7 = VAR_4->clock;

 if (!VAR_6) {
  FUNC_3(VAR_5, VAR_1, VAR_7,
     VAR_7, VAR_7, 0);
  return;
 }

 if (VAR_4->flags & VAR_0)
  VAR_7 *= 2;

 VAR_8 = VAR_7;
 VAR_9 = VAR_7;

 if (FUNC_4(VAR_6))
  VAR_8 *= 2;

 VAR_7 = FUNC_2(VAR_8, VAR_9);

 if (VAR_4->flags & VAR_0)
  VAR_8 /= 2;

 FUNC_0("vclk:%d venc=%d hdmi=%d enci=%d\n",
  VAR_7, VAR_8, VAR_9,
  VAR_5->venc.hdmi_use_enci);

 FUNC_3(VAR_5, VAR_2, VAR_7,
    VAR_8, VAR_9, VAR_5->venc.hdmi_use_enci);
}
