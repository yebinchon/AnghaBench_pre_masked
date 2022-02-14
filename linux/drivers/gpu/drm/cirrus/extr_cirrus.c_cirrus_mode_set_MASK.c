
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int htotal; int hsync_end; int hsync_start; int hdisplay; int vtotal; int vdisplay; } ;
struct cirrus_device {int cpp; int pitch; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct cirrus_device*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct cirrus_device*,int) ;
 int FUNC_5 (struct cirrus_device*,int,int) ;
 int FUNC_6 (struct cirrus_device*,int ,int) ;
 int FUNC_7 (struct cirrus_device*,int) ;
 int FUNC_8 (struct cirrus_device*,int,int) ;

__attribute__((used)) static int FUNC_9(struct cirrus_device *VAR_14,
      struct drm_display_mode *VAR_15,
      struct drm_framebuffer *VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;
 int VAR_24 = 0, VAR_25 = 0;

 VAR_19 = VAR_15->htotal / 8;
 VAR_18 = VAR_15->hsync_end / 8;
 VAR_17 = VAR_15->hsync_start / 8;
 VAR_20 = VAR_15->hdisplay / 8;

 VAR_21 = VAR_15->vtotal;
 VAR_22 = VAR_15->vdisplay;

 VAR_22 -= 1;
 VAR_21 -= 2;

 VAR_19 -= 5;
 VAR_20 -= 1;
 VAR_17 += 1;
 VAR_18 += 1;

 FUNC_5(VAR_14, VAR_10, 0x20);
 FUNC_5(VAR_14, VAR_4, VAR_19);
 FUNC_5(VAR_14, VAR_1, VAR_20);
 FUNC_5(VAR_14, VAR_3, VAR_17);
 FUNC_5(VAR_14, VAR_2, VAR_18);
 FUNC_5(VAR_14, VAR_11, VAR_21 & 0xff);
 FUNC_5(VAR_14, VAR_9, VAR_22 & 0xff);

 VAR_23 = 0x40;
 if ((VAR_22 + 1) & 512)
  VAR_23 |= 0x20;
 FUNC_5(VAR_14, VAR_5, VAR_23);




 VAR_23 = 0x10;
 if (VAR_21 & 0x100)
  VAR_23 |= 0x01;
 if (VAR_22 & 0x100)
  VAR_23 |= 0x02;
 if ((VAR_22 + 1) & 0x100)
  VAR_23 |= 0x08;
 if (VAR_21 & 0x200)
  VAR_23 |= 0x20;
 if (VAR_22 & 0x200)
  VAR_23 |= 0x40;
 FUNC_5(VAR_14, VAR_8, VAR_23);

 VAR_23 = 0;



 if ((VAR_19 + 5) & 0x40)
  VAR_23 |= 0x10;
 if ((VAR_19 + 5) & 0x80)
  VAR_23 |= 0x20;
 if (VAR_21 & 0x100)
  VAR_23 |= 0x40;
 if (VAR_21 & 0x200)
  VAR_23 |= 0x80;

 FUNC_5(VAR_14, VAR_0, VAR_23);


 FUNC_5(VAR_14, VAR_6, 0x03);

 VAR_24 = FUNC_4(VAR_14, 0x07);
 VAR_24 &= 0xe0;
 VAR_25 = 0;

 VAR_14->cpp = FUNC_0(VAR_16);
 switch (VAR_14->cpp * 8) {
 case 8:
  VAR_24 |= 0x11;
  break;
 case 16:
  VAR_24 |= 0x17;
  VAR_25 = 0xc1;
  break;
 case 24:
  VAR_24 |= 0x15;
  VAR_25 = 0xc5;
  break;
 case 32:
  VAR_24 |= 0x19;
  VAR_25 = 0xc5;
  break;
 default:
  return -1;
 }

 FUNC_8(VAR_14, 0x7, VAR_24);


 VAR_14->pitch = FUNC_1(VAR_16);
 VAR_23 = VAR_14->pitch / 8;
 FUNC_5(VAR_14, VAR_7, VAR_23);


 VAR_23 = 0x22;
 VAR_23 |= (VAR_14->pitch >> 7) & 0x10;
 VAR_23 |= (VAR_14->pitch >> 6) & 0x40;
 FUNC_5(VAR_14, 0x1b, VAR_23);


 FUNC_6(VAR_14, VAR_13, 0x40);


 FUNC_6(VAR_14, VAR_12, 0x01);

 FUNC_7(VAR_14, VAR_25);

 FUNC_2(VAR_14, 0);


 FUNC_3(0x20, 0x3c0);
 return 0;
}
