
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int hdisplay; unsigned int hsync_start; int hsync_end; unsigned int htotal; unsigned int vdisplay; unsigned int vsync_start; int vsync_end; unsigned int vtotal; unsigned int clock; int flags; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_display_mode*) ;

struct drm_display_mode *
FUNC_2(struct drm_device *VAR_13, int VAR_14, int VAR_15,
       int VAR_16, bool VAR_17, int VAR_18,
       int VAR_19, int VAR_20, int VAR_21, int VAR_22)
{
 struct drm_display_mode *VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;
 unsigned int VAR_30;
 int VAR_31, VAR_32;
 unsigned int VAR_33, VAR_34, VAR_35;
 unsigned int VAR_36, VAR_37;
 int VAR_38, VAR_39;
 unsigned int VAR_40, VAR_41;
 unsigned int VAR_42, VAR_43, VAR_44;
 int VAR_45, VAR_46, VAR_47;
 unsigned int VAR_48, VAR_49;

 if (!VAR_14 || !VAR_15)
  return ((void*)0);

 VAR_23 = FUNC_0(VAR_13);
 if (!VAR_23)
  return ((void*)0);






 VAR_24 = (VAR_14 + 8 / 2) / 8;
 VAR_24 = VAR_24 * 8;





 if (VAR_17)
  VAR_25 = VAR_15 / 2;
 else
  VAR_25 = VAR_15;


 if (VAR_17)
  VAR_26 = VAR_16 * 2;
 else
  VAR_26 = VAR_16;


 VAR_27 = 0;
 if (VAR_18)
  VAR_27 = (VAR_25 * 18 + 500) /
    1000;

 VAR_28 = VAR_27;


 if (VAR_17)
  VAR_29 = 1;
 else
  VAR_29 = 0;


 {
  VAR_48 = (1000000 - 550 * VAR_26) / 500;
  VAR_49 = (VAR_25 + 2 * VAR_27 + 1) *
    2 + VAR_29;
  VAR_30 = (VAR_49 * 1000 * VAR_26) / VAR_48;
 }



 VAR_31 = 550 * VAR_30 / 1000;
 VAR_31 = (VAR_31 + 500) / 1000;

 VAR_32 = VAR_31 - 3;

 VAR_33 = VAR_25 + VAR_27 + VAR_28 +
   VAR_31 + 1;

 VAR_34 = VAR_30 / VAR_33;

 VAR_35 = 1000000 / (VAR_26 * VAR_33);


 VAR_36 = VAR_30 / VAR_33;

 if (VAR_17)
  VAR_37 = VAR_36 / 2;
 else
  VAR_37 = VAR_36;

 if (VAR_18)
  VAR_38 = (VAR_24 * 18 + 500) /
    1000;
 else
  VAR_38 = 0;


 VAR_39 = VAR_38;

 VAR_40 = VAR_24 + VAR_38 + VAR_39;

 VAR_41 = ((((VAR_20 - VAR_22) * VAR_21 / 256) + VAR_22) / 2) * 1000 -
    ((VAR_21 * VAR_19 / 256) * 1000000 / VAR_30);


 VAR_42 = VAR_40 * VAR_41 /
   (100000 - VAR_41);
 VAR_42 = (VAR_42 + 8) / (2 * 8);
 VAR_42 = VAR_42 * 2 * 8;

 VAR_43 = VAR_40 + VAR_42;

 VAR_44 = VAR_43 * VAR_30 / 1000;





 VAR_45 = 8 * VAR_43 / 100;
 VAR_45 = (VAR_45 + 8 / 2) / 8;
 VAR_45 = VAR_45 * 8;

 VAR_46 = VAR_42 / 2 - VAR_45;

 VAR_47 = 1 ;


 VAR_23->hdisplay = VAR_24;
 VAR_23->hsync_start = VAR_24 + VAR_46;
 VAR_23->hsync_end = VAR_23->hsync_start + VAR_45;
 VAR_23->htotal = VAR_43;
 VAR_23->vdisplay = VAR_25;
 VAR_23->vsync_start = VAR_25 + VAR_47;
 VAR_23->vsync_end = VAR_23->vsync_start + 3;
 VAR_23->vtotal = VAR_33;

 VAR_23->clock = VAR_44;

 if (VAR_17) {
  VAR_23->vtotal *= 2;
  VAR_23->flags |= VAR_0;
 }

 FUNC_1(VAR_23);
 if (VAR_19 == 600 && VAR_20 == 80 && VAR_21 == 128 && VAR_22 == 40)
  VAR_23->flags = VAR_1 | VAR_4;
 else
  VAR_23->flags = VAR_3 | VAR_2;

 return VAR_23;
}
