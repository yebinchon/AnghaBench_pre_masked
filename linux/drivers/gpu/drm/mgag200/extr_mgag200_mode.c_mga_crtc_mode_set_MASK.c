
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mga_device {int* bpp_shifts; int type; int unique_rev_id; int mode; int has_sdram; } ;
struct drm_framebuffer {int* pitches; TYPE_2__* format; } ;
struct drm_display_mode {int flags; int hdisplay; int hsync_start; int hsync_end; int htotal; int vdisplay; int vsync_start; int vsync_end; int vtotal; int clock; } ;
struct drm_device {int pdev; struct mga_device* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
typedef int dacvalue ;
struct TYPE_4__ {int* cpp; int depth; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mga_device*) ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 size_t VAR_12 ;
 unsigned char VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,unsigned char) ;
 int FUNC_7 (int,unsigned char) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int *,struct drm_display_mode*,int) ;
 int FUNC_11 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;
 int FUNC_12 (struct mga_device*,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct drm_crtc *VAR_23,
    struct drm_display_mode *VAR_24,
    struct drm_display_mode *VAR_25,
    int VAR_26, int VAR_27, struct drm_framebuffer *VAR_28)
{
 struct drm_device *VAR_29 = VAR_23->dev;
 struct mga_device *VAR_30 = VAR_29->dev_private;
 const struct drm_framebuffer *VAR_31 = VAR_23->primary->fb;
 int VAR_32, VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40;
 int VAR_41 = 0, VAR_42 = 0;
 int VAR_43;
 unsigned char VAR_44 = 0;
 unsigned char VAR_45[6];
 u8 VAR_46;

 static unsigned char VAR_47[] = {
                     0, 0, 0, 0, 0, 0, 0x00, 0,
                     0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0,
                  0x00, 0, 0xC9, 0xFF, 0xBF, 0x20, 0x1F, 0x20,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0, 0, 0, 0x40,
                  0x00, 0xB0, 0x00, 0xC2, 0x34, 0x14, 0x02, 0x83,
                  0x00, 0x93, 0x00, 0x77, 0x00, 0x00, 0x00, 0x3A,
                     0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0
 };

 VAR_46 = VAR_30->bpp_shifts[VAR_31->format->cpp[0] - 1];

 switch (VAR_30->type) {
 case 130:
 case 129:
  VAR_47[VAR_14] = 0x03;
  VAR_47[VAR_12] = VAR_13;
  VAR_47[VAR_2] = VAR_3 |
          VAR_5 |
          VAR_4;
  if (VAR_30->has_sdram)
   VAR_41 = 0x40049120;
  else
   VAR_41 = 0x4004d120;
  VAR_42 = 0x00008000;
  break;
 case 128:
 case 131:
  VAR_47[VAR_14] = 0x07;
  VAR_41 = 0x41049120;
  VAR_42 = 0x0000b000;
  break;
 case 132:
  VAR_47[VAR_12] = VAR_13;
  VAR_47[VAR_2] = VAR_5 |
          VAR_4;
  VAR_41 = 0x00000120;
  VAR_42 = 0x0000b000;
  break;
 case 135:
 case 134:
  VAR_47[VAR_2] = VAR_5 |
          VAR_4;
  VAR_41 = 0x00000120;
  VAR_42 = 0x0000b000;
  break;
 case 133:
  break;
 }

 switch (VAR_31->format->cpp[0] * 8) {
 case 8:
  VAR_47[VAR_6] = VAR_11;
  break;
 case 16:
  if (VAR_31->format->depth == 15)
   VAR_47[VAR_6] = VAR_7;
  else
   VAR_47[VAR_6] = VAR_8;
  break;
 case 24:
  VAR_47[VAR_6] = VAR_9;
  break;
 case 32:
  VAR_47[VAR_6] = VAR_10;
  break;
 }

 if (VAR_24->flags & VAR_0)
  VAR_44 |= 0x40;
 if (VAR_24->flags & VAR_1)
  VAR_44 |= 0x80;


 for (VAR_43 = 0; VAR_43 < sizeof(VAR_47); VAR_43++) {
  if ((VAR_43 <= 0x17) ||
      (VAR_43 == 0x1b) ||
      (VAR_43 == 0x1c) ||
      ((VAR_43 >= 0x1f) && (VAR_43 <= 0x29)) ||
      ((VAR_43 >= 0x30) && (VAR_43 <= 0x37)))
   continue;
  if (FUNC_0(VAR_30) &&
      ((VAR_43 == 0x2c) || (VAR_43 == 0x2d) || (VAR_43 == 0x2e)))
   continue;
  if ((VAR_30->type == 132 ||
      VAR_30->type == 128 ||
      VAR_30->type == 135 ||
      VAR_30->type == 131 ||
      VAR_30->type == 134) &&
      (VAR_43 >= 0x44) && (VAR_43 <= 0x4e))
   continue;

  FUNC_6(VAR_43, VAR_47[VAR_43]);
 }

 if (VAR_30->type == 133)
  FUNC_6(0x90, 0);

 if (VAR_41)
  FUNC_13(VAR_29->pdev, VAR_21, VAR_41);
 if (VAR_42)
  FUNC_13(VAR_29->pdev, VAR_22, VAR_42);

 FUNC_9(2, 0xf);
 FUNC_9(3, 0);
 FUNC_9(4, 0xe);

 VAR_40 = VAR_31->pitches[0] / VAR_31->format->cpp[0];
 if (VAR_31->format->cpp[0] * 8 == 24)
  VAR_40 = (VAR_40 * 3) >> (4 - VAR_46);
 else
  VAR_40 = VAR_40 >> (4 - VAR_46);

 VAR_32 = VAR_24->hdisplay / 8 - 1;
 VAR_33 = VAR_24->hsync_start / 8 - 1;
 VAR_34 = VAR_24->hsync_end / 8 - 1;
 VAR_35 = VAR_24->htotal / 8 - 1;


 if ((VAR_35 & 0x07) == 0x06 || (VAR_35 & 0x07) == 0x04)
  VAR_35++;

 VAR_36 = VAR_24->vdisplay - 1;
 VAR_37 = VAR_24->vsync_start - 1;
 VAR_38 = VAR_24->vsync_end - 1;
 VAR_39 = VAR_24->vtotal - 2;

 FUNC_8(0, 0);
 FUNC_8(1, 0);
 FUNC_8(2, 0);
 FUNC_8(3, 0);
 FUNC_8(4, 0);
 FUNC_8(5, 0x40);
 FUNC_8(6, 0x5);
 FUNC_8(7, 0xf);
 FUNC_8(8, 0xf);

 FUNC_5(0, VAR_35 - 4);
 FUNC_5(1, VAR_32);
 FUNC_5(2, VAR_32);
 FUNC_5(3, (VAR_35 & 0x1F) | 0x80);
 FUNC_5(4, VAR_33);
 FUNC_5(5, ((VAR_35 & 0x20) << 2) | (VAR_34 & 0x1F));
 FUNC_5(6, VAR_39 & 0xFF);
 FUNC_5(7, ((VAR_39 & 0x100) >> 8) |
   ((VAR_36 & 0x100) >> 7) |
   ((VAR_37 & 0x100) >> 6) |
   ((VAR_36 & 0x100) >> 5) |
   ((VAR_36 & 0x100) >> 4) |
   ((VAR_39 & 0x200) >> 4)|
   ((VAR_36 & 0x200) >> 3) |
   ((VAR_37 & 0x200) >> 2));
 FUNC_5(9, ((VAR_36 & 0x200) >> 4) |
   ((VAR_36 & 0x200) >> 3));
 FUNC_5(10, 0);
 FUNC_5(11, 0);
 FUNC_5(12, 0);
 FUNC_5(13, 0);
 FUNC_5(14, 0);
 FUNC_5(15, 0);
 FUNC_5(16, VAR_37 & 0xFF);
 FUNC_5(17, (VAR_38 & 0x0F) | 0x20);
 FUNC_5(18, VAR_36 & 0xFF);
 FUNC_5(19, VAR_40 & 0xFF);
 FUNC_5(20, 0);
 FUNC_5(21, VAR_36 & 0xFF);
 FUNC_5(22, (VAR_39 + 1) & 0xFF);
 FUNC_5(23, 0xc3);
 FUNC_5(24, VAR_36 & 0xFF);

 VAR_45[0] = 0;
 VAR_45[5] = 0;



 VAR_45[0] |= (VAR_40 & 0x300) >> 4;
 VAR_45[1] = (((VAR_35 - 4) & 0x100) >> 8) |
  ((VAR_32 & 0x100) >> 7) |
  ((VAR_33 & 0x100) >> 6) |
  (VAR_35 & 0x40);
 VAR_45[2] = ((VAR_39 & 0xc00) >> 10) |
  ((VAR_36 & 0x400) >> 8) |
  ((VAR_36 & 0xc00) >> 7) |
  ((VAR_37 & 0xc00) >> 5) |
  ((VAR_36 & 0x400) >> 3);
 if (VAR_31->format->cpp[0] * 8 == 24)
  VAR_45[3] = (((1 << VAR_46) * 3) - 1) | 0x80;
 else
  VAR_45[3] = ((1 << VAR_46) - 1) | 0x80;
 VAR_45[4] = 0;
 if (VAR_30->type == 128 || VAR_30->type == 131)
  VAR_45[1] |= 0x88;


 VAR_44 = 0x2d;
 FUNC_4(VAR_20, VAR_44);

 FUNC_12(VAR_30, VAR_24->clock);

 for (VAR_43 = 0; VAR_43 < 6; VAR_43++) {
  FUNC_7(VAR_43, VAR_45[VAR_43]);
 }

 if (VAR_30->type == 133)
  FUNC_7(0x24, 0x5);

 if (VAR_30->type == 131)
  FUNC_7(0x34, 0x5);

 if (VAR_30->type == 132) {
  FUNC_7(6, 0);
 }

 FUNC_7(0, VAR_45[0]);

 VAR_44 = 0x2d;

 FUNC_4(VAR_20, VAR_44);

 if (VAR_25)
  FUNC_10(&VAR_30->mode, VAR_24, sizeof(struct drm_display_mode));

 FUNC_11(VAR_23, VAR_28, VAR_26, VAR_27, 0);


 if (VAR_30->type == 133) {
  u32 VAR_48 = FUNC_1(VAR_17);
  u8 VAR_49;


  FUNC_4(VAR_19, 0x01);
  VAR_49 = FUNC_2(VAR_18) | 0x20;
  FUNC_4(VAR_18, VAR_49);

  FUNC_3(VAR_17, VAR_48 | 0x00200000);
  FUNC_14(1000);
  FUNC_3(VAR_17, VAR_48 & ~0x00200000);

  FUNC_4(VAR_18, VAR_49 & ~0x20);
 }


 if (FUNC_0(VAR_30)) {
  if (VAR_30->unique_rev_id >= 0x04) {
   FUNC_4(VAR_16, 0x06);
   FUNC_4(VAR_15, 0);
  } else if (VAR_30->unique_rev_id >= 0x02) {
   u8 VAR_50;
   u32 VAR_51;
   u32 VAR_52;

   if (VAR_31->format->cpp[0] * 8 > 16)
    VAR_51 = 32;
   else if (VAR_31->format->cpp[0] * 8 > 8)
    VAR_51 = 16;
   else
    VAR_51 = 8;

   VAR_52 = (VAR_24->clock * VAR_51) / 1000;
   if (VAR_52 > 3100)
    VAR_50 = 0;
   else if (VAR_52 > 2600)
    VAR_50 = 1;
   else if (VAR_52 > 1900)
    VAR_50 = 2;
   else if (VAR_52 > 1160)
    VAR_50 = 3;
   else if (VAR_52 > 440)
    VAR_50 = 4;
   else
    VAR_50 = 5;

   FUNC_4(VAR_16, 0x06);
   FUNC_4(VAR_15, VAR_50);
  } else {
   FUNC_4(VAR_16, 0x06);
   if (VAR_30->unique_rev_id >= 0x01)
    FUNC_4(VAR_15, 0x03);
   else
    FUNC_4(VAR_15, 0x04);
  }
 }
 return 0;
}
