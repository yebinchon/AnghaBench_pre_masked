
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct meson_dw_hdmi {TYPE_1__* data; struct meson_drm* priv; } ;
struct TYPE_4__ {scalar_t__ hdmi_use_enci; } ;
struct meson_drm {scalar_t__ io_base; TYPE_2__ venc; int hhi; } ;
struct dw_hdmi {int dummy; } ;
struct drm_display_mode {int clock; int name; } ;
struct TYPE_3__ {int (* top_write ) (struct meson_dw_hdmi*,int ,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct meson_dw_hdmi*,char*) ;
 int FUNC_4 (struct dw_hdmi*) ;
 int FUNC_5 (struct meson_dw_hdmi*,int ,int,int) ;
 int FUNC_6 (struct meson_dw_hdmi*) ;
 int FUNC_7 (struct meson_dw_hdmi*,struct drm_display_mode*) ;
 int FUNC_8 (int) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_12 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_13 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_14 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_15 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_16 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_17 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_18 (struct meson_dw_hdmi*,int ,int) ;
 int FUNC_19 (int,unsigned int,scalar_t__) ;
 int FUNC_20 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct dw_hdmi *VAR_14, void *VAR_15,
       struct drm_display_mode *VAR_16)
{
 struct meson_dw_hdmi *VAR_17 = (struct meson_dw_hdmi *)VAR_15;
 struct meson_drm *VAR_18 = VAR_17->priv;
 unsigned int VAR_19 =
  FUNC_9(VAR_18->io_base + FUNC_2(VAR_13));

 FUNC_1("\"%s\" div%d\n", VAR_16->name,
    VAR_16->clock > 340000 ? 40 : 10);


 FUNC_10(VAR_18->hhi, VAR_8, 0xffff, 0x100);


 FUNC_10(VAR_18->hhi, VAR_10, 0xff << 8, 0);


 VAR_17->data->top_write(VAR_17, VAR_4, 0);


 FUNC_5(VAR_17, VAR_3,
          0x3, 0x3);


 FUNC_5(VAR_17, VAR_3,
          0x3 << 4, 0x3 << 4);


 VAR_17->data->top_write(VAR_17, VAR_2, FUNC_0(12));


 if (VAR_16->clock > 340000) {
  VAR_17->data->top_write(VAR_17, VAR_5,
      0);
  VAR_17->data->top_write(VAR_17, VAR_6,
      0x03ff03ff);
 } else {
  VAR_17->data->top_write(VAR_17, VAR_5,
      0x001f001f);
  VAR_17->data->top_write(VAR_17, VAR_6,
      0x001f001f);
 }


 VAR_17->data->top_write(VAR_17, VAR_7, 0x1);
 FUNC_8(20);
 VAR_17->data->top_write(VAR_17, VAR_7, 0x2);


 FUNC_7(VAR_17, VAR_16);


 FUNC_10(VAR_18->hhi, VAR_9,
      0xffff << 16, 0x0390 << 16);


 if (FUNC_3(VAR_17, "amlogic,meson-gxl-dw-hdmi") ||
     FUNC_3(VAR_17, "amlogic,meson-gxm-dw-hdmi") ||
     FUNC_3(VAR_17, "amlogic,meson-g12a-dw-hdmi"))
  FUNC_10(VAR_18->hhi, VAR_9,
       FUNC_0(17), 0);
 else
  FUNC_10(VAR_18->hhi, VAR_9,
       FUNC_0(17), FUNC_0(17));


 FUNC_10(VAR_18->hhi, VAR_9, 0xf, 0);

 FUNC_4(VAR_14);

 FUNC_8(100);


 FUNC_6(VAR_17);
 FUNC_6(VAR_17);
 FUNC_6(VAR_17);


 if (VAR_18->venc.hdmi_use_enci)
  FUNC_20(0, VAR_18->io_base + FUNC_2(VAR_0));
 else
  FUNC_20(0, VAR_18->io_base + FUNC_2(VAR_1));


 FUNC_19(0x3, 0,
       VAR_18->io_base + FUNC_2(VAR_13));
 FUNC_19(0xf << 8, 0,
       VAR_18->io_base + FUNC_2(VAR_13));


 if (VAR_18->venc.hdmi_use_enci)
  FUNC_20(1, VAR_18->io_base + FUNC_2(VAR_0));
 else
  FUNC_20(1, VAR_18->io_base + FUNC_2(VAR_1));


 FUNC_19(0xf << 8, VAR_19 & (0xf << 8),
       VAR_18->io_base + FUNC_2(VAR_13));


 if (VAR_18->venc.hdmi_use_enci)
  FUNC_19(0x3, VAR_11,
        VAR_18->io_base + FUNC_2(VAR_13));
 else
  FUNC_19(0x3, VAR_12,
        VAR_18->io_base + FUNC_2(VAR_13));

 return 0;
}
