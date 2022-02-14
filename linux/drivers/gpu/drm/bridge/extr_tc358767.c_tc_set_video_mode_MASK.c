
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_lanes; int rate; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct tc_data {int regmap; int dev; TYPE_2__ link; } ;
struct drm_display_mode {int htotal; int hsync_end; int hsync_start; int hdisplay; int vtotal; int vsync_end; int vsync_start; int vdisplay; int clock; int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct tc_data *VAR_56,
        const struct drm_display_mode *VAR_57)
{
 int VAR_58;
 int VAR_59;
 int VAR_60;

 int VAR_61 = VAR_57->htotal - VAR_57->hsync_end;
 int VAR_62 = VAR_57->hsync_start - VAR_57->hdisplay;
 int VAR_63 = VAR_57->hsync_end - VAR_57->hsync_start;
 int VAR_64 = VAR_57->vtotal - VAR_57->vsync_end;
 int VAR_65 = VAR_57->vsync_start - VAR_57->vdisplay;
 int VAR_66 = VAR_57->vsync_end - VAR_57->vsync_start;
 u32 VAR_67;
 u32 VAR_68 = 24;
 u32 VAR_69, VAR_70;
 VAR_69 = VAR_57->clock * VAR_68 / 8;
 VAR_70 = VAR_56->link.base.num_lanes * VAR_56->link.base.rate;
 VAR_60 = FUNC_1(VAR_69 * VAR_39, VAR_70);

 FUNC_3(VAR_56->dev, "set mode %dx%d\n",
  VAR_57->hdisplay, VAR_57->vdisplay);
 FUNC_3(VAR_56->dev, "H margin %d,%d sync %d\n",
  VAR_61, VAR_62, VAR_63);
 FUNC_3(VAR_56->dev, "V margin %d,%d sync %d\n",
  VAR_64, VAR_65, VAR_66);
 FUNC_3(VAR_56->dev, "total: %dx%d\n", VAR_57->htotal, VAR_57->vtotal);
 VAR_58 = FUNC_4(VAR_56->regmap, VAR_46,
      FUNC_2(VAR_47, 0) |
      VAR_32 | VAR_18 | VAR_31);
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_25,
      FUNC_2(VAR_19, FUNC_0(VAR_61, 2)) |
      FUNC_2(VAR_22, FUNC_0(VAR_63, 2)));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_26,
      FUNC_2(VAR_20, FUNC_0(VAR_57->hdisplay, 2)) |
      FUNC_2(VAR_21, FUNC_0(VAR_62, 2)));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_51,
      FUNC_2(VAR_40, VAR_64) |
      FUNC_2(VAR_48, VAR_66));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_52,
      FUNC_2(VAR_42, VAR_65) |
      FUNC_2(VAR_41, VAR_57->vdisplay));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_44, VAR_43);
 if (VAR_58)
  return VAR_58;


 VAR_58 = FUNC_4(VAR_56->regmap, VAR_37,
      FUNC_2(VAR_5, 120) |
      FUNC_2(VAR_4, 20) |
      FUNC_2(VAR_1, 99) |
      VAR_17 |
      FUNC_2(VAR_2, VAR_3));
 if (VAR_58)
  return VAR_58;


 VAR_59 = VAR_63 + VAR_61 + VAR_57->hdisplay;
 VAR_58 = FUNC_4(VAR_56->regmap, VAR_12,
   FUNC_2(VAR_36, VAR_60) |
   FUNC_2(VAR_45, VAR_59));

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_11,
      FUNC_2(VAR_29, VAR_57->htotal) |
      FUNC_2(VAR_55, VAR_57->vtotal));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_9,
      FUNC_2(VAR_28, VAR_61 + VAR_63) |
      FUNC_2(VAR_54, VAR_64 + VAR_66));
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_7,
      FUNC_2(VAR_53, VAR_57->vdisplay) |
      FUNC_2(VAR_27, VAR_57->hdisplay));
 if (VAR_58)
  return VAR_58;

 VAR_67 = FUNC_2(VAR_50, VAR_66) |
        FUNC_2(VAR_24, VAR_63);

 if (VAR_57->flags & VAR_16)
  VAR_67 |= VAR_35;

 if (VAR_57->flags & VAR_15)
  VAR_67 |= VAR_34;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_10, VAR_67);
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_13,
      VAR_49 | VAR_23 |
      VAR_6 | VAR_33 |
      VAR_14);
 if (VAR_58)
  return VAR_58;

 VAR_58 = FUNC_4(VAR_56->regmap, VAR_8,
      FUNC_2(VAR_30, VAR_60) |
      FUNC_2(VAR_38, VAR_39) |
      VAR_0);
 if (VAR_58)
  return VAR_58;

 return 0;
}
