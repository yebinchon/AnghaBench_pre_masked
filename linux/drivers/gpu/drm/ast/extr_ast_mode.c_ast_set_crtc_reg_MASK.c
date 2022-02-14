
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct drm_display_mode {int crtc_htotal; int crtc_hdisplay; int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_start; int crtc_hsync_end; int crtc_vtotal; int crtc_vsync_start; int crtc_vsync_end; int crtc_vdisplay; int crtc_vblank_start; int crtc_vblank_end; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_vbios_mode_info {TYPE_2__* enh_table; } ;
struct ast_private {scalar_t__ chip; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct ast_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_3, struct drm_display_mode *VAR_4,
        struct ast_vbios_mode_info *VAR_5)
{
 struct ast_private *VAR_6 = VAR_3->dev->dev_private;
 u8 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u16 VAR_13, VAR_14 = 0;

 if ((VAR_6->chip == VAR_0) &&
     (VAR_5->enh_table->flags & VAR_1))
  VAR_14 = 40;

 FUNC_0(VAR_6, VAR_2, 0x11, 0x7f, 0x00);

 VAR_13 = (VAR_4->crtc_htotal >> 3) - 5;
 if (VAR_13 & 0x100)
  VAR_10 |= 0x01;
 FUNC_0(VAR_6, VAR_2, 0x00, 0x00, VAR_13);

 VAR_13 = (VAR_4->crtc_hdisplay >> 3) - 1;
 if (VAR_13 & 0x100)
  VAR_10 |= 0x04;
 FUNC_0(VAR_6, VAR_2, 0x01, 0x00, VAR_13);

 VAR_13 = (VAR_4->crtc_hblank_start >> 3) - 1;
 if (VAR_13 & 0x100)
  VAR_10 |= 0x10;
 FUNC_0(VAR_6, VAR_2, 0x02, 0x00, VAR_13);

 VAR_13 = ((VAR_4->crtc_hblank_end >> 3) - 1) & 0x7f;
 if (VAR_13 & 0x20)
  VAR_7 |= 0x80;
 if (VAR_13 & 0x40)
  VAR_11 |= 0x01;
 FUNC_0(VAR_6, VAR_2, 0x03, 0xE0, (VAR_13 & 0x1f));

 VAR_13 = ((VAR_4->crtc_hsync_start-VAR_14) >> 3) - 1;
 if (VAR_13 & 0x100)
  VAR_10 |= 0x40;
 FUNC_0(VAR_6, VAR_2, 0x04, 0x00, VAR_13);

 VAR_13 = (((VAR_4->crtc_hsync_end-VAR_14) >> 3) - 1) & 0x3f;
 if (VAR_13 & 0x20)
  VAR_11 |= 0x04;
 FUNC_0(VAR_6, VAR_2, 0x05, 0x60, (u8)((VAR_13 & 0x1f) | VAR_7));

 FUNC_0(VAR_6, VAR_2, 0xAC, 0x00, VAR_10);
 FUNC_0(VAR_6, VAR_2, 0xAD, 0x00, VAR_11);


 VAR_13 = (VAR_4->crtc_vtotal) - 2;
 if (VAR_13 & 0x100)
  VAR_8 |= 0x01;
 if (VAR_13 & 0x200)
  VAR_8 |= 0x20;
 if (VAR_13 & 0x400)
  VAR_12 |= 0x01;
 FUNC_0(VAR_6, VAR_2, 0x06, 0x00, VAR_13);

 VAR_13 = (VAR_4->crtc_vsync_start) - 1;
 if (VAR_13 & 0x100)
  VAR_8 |= 0x04;
 if (VAR_13 & 0x200)
  VAR_8 |= 0x80;
 if (VAR_13 & 0x400)
  VAR_12 |= 0x08;
 FUNC_0(VAR_6, VAR_2, 0x10, 0x00, VAR_13);

 VAR_13 = (VAR_4->crtc_vsync_end - 1) & 0x3f;
 if (VAR_13 & 0x10)
  VAR_12 |= 0x20;
 if (VAR_13 & 0x20)
  VAR_12 |= 0x40;
 FUNC_0(VAR_6, VAR_2, 0x11, 0x70, VAR_13 & 0xf);

 VAR_13 = VAR_4->crtc_vdisplay - 1;
 if (VAR_13 & 0x100)
  VAR_8 |= 0x02;
 if (VAR_13 & 0x200)
  VAR_8 |= 0x40;
 if (VAR_13 & 0x400)
  VAR_12 |= 0x02;
 FUNC_0(VAR_6, VAR_2, 0x12, 0x00, VAR_13);

 VAR_13 = VAR_4->crtc_vblank_start - 1;
 if (VAR_13 & 0x100)
  VAR_8 |= 0x08;
 if (VAR_13 & 0x200)
  VAR_9 |= 0x20;
 if (VAR_13 & 0x400)
  VAR_12 |= 0x04;
 FUNC_0(VAR_6, VAR_2, 0x15, 0x00, VAR_13);

 VAR_13 = VAR_4->crtc_vblank_end - 1;
 if (VAR_13 & 0x100)
  VAR_12 |= 0x10;
 FUNC_0(VAR_6, VAR_2, 0x16, 0x00, VAR_13);

 FUNC_0(VAR_6, VAR_2, 0x07, 0x00, VAR_8);
 FUNC_0(VAR_6, VAR_2, 0x09, 0xdf, VAR_9);
 FUNC_0(VAR_6, VAR_2, 0xAE, 0x00, (VAR_12 | 0x80));

 if (VAR_14)
  FUNC_0(VAR_6, VAR_2, 0xb6, 0x3f, 0x80);
 else
  FUNC_0(VAR_6, VAR_2, 0xb6, 0x3f, 0x00);

 FUNC_0(VAR_6, VAR_2, 0x11, 0x7f, 0x80);
}
