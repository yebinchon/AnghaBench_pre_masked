
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct videomode {int flags; unsigned long pixelclock; } ;
struct drm_format_info {scalar_t__ is_yuv; } ;
struct dispc_device {TYPE_1__* feat; } ;
typedef int s32 ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
struct TYPE_2__ {scalar_t__ last_pixel_inc_missing; scalar_t__ reverse_ilace_field_order; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int,scalar_t__,int,unsigned int,unsigned int*,unsigned int*,int*,int*,int,int,int,int ) ;
 int FUNC_3 (struct dispc_device*,int,unsigned long,unsigned long,int,struct videomode const*,int,int,int,int,scalar_t__,int*,int*,int*,int,int,int) ;
 int FUNC_4 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_5 (struct dispc_device*,int,int) ;
 int FUNC_6 (struct dispc_device*,int,int,int) ;
 int FUNC_7 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_8 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_9 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_10 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_11 (struct dispc_device*,int,scalar_t__) ;
 int FUNC_12 (struct dispc_device*,int,int,int) ;
 int FUNC_13 (struct dispc_device*,int,int,int) ;
 int FUNC_14 (struct dispc_device*,int,int) ;
 int FUNC_15 (struct dispc_device*,int,int,int,int) ;
 int FUNC_16 (struct dispc_device*,int,int,int ) ;
 int FUNC_17 (struct dispc_device*,int,int ,int,scalar_t__) ;
 int FUNC_18 (struct dispc_device*,int,int) ;
 int FUNC_19 (struct dispc_device*,int,int,int,int,int,int,int,int,scalar_t__,int ) ;
 int FUNC_20 (struct dispc_device*,int,int) ;
 int FUNC_21 (struct dispc_device*,int,int,int ) ;
 int FUNC_22 (struct dispc_device*,int,int,int ) ;
 unsigned long FUNC_23 (struct dispc_device*,int) ;
 unsigned long FUNC_24 (struct dispc_device*,int) ;
 struct drm_format_info* FUNC_25 (scalar_t__) ;
 int FUNC_26 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_27(struct dispc_device *VAR_6,
      enum omap_plane_id VAR_7,
      enum omap_overlay_caps VAR_8,
      u32 VAR_9, u32 VAR_10,
      u16 VAR_11, int VAR_12, int VAR_13,
      u16 VAR_14, u16 VAR_15,
      u16 VAR_16, u16 VAR_17,
      u32 VAR_18, u8 VAR_19, u8 VAR_20,
      u8 VAR_21, u8 VAR_22,
      enum omap_dss_rotation_type VAR_23,
      bool VAR_24, const struct videomode *VAR_25,
      bool VAR_26)
{
 bool VAR_27 = 1;
 bool VAR_28 = 0;
 int VAR_29, VAR_30 = 0;
 unsigned int VAR_31, VAR_32;
 s32 VAR_33;
 s32 VAR_34;
 u16 VAR_35;
 unsigned int VAR_36 = 0;
 u16 VAR_37 = VAR_15;
 u16 VAR_38 = VAR_14;
 int VAR_39 = 1, VAR_40 = 1;
 bool VAR_41 = !!(VAR_25->flags & VAR_0);
 unsigned long VAR_42 = FUNC_24(VAR_6, VAR_7);
 unsigned long VAR_43 = FUNC_23(VAR_6, VAR_7);
 const struct drm_format_info *VAR_44;

 VAR_44 = FUNC_25(VAR_18);


 if (VAR_7 == VAR_5)
  VAR_42 = VAR_25->pixelclock;

 if (VAR_9 == 0 && VAR_23 != VAR_4)
  return -VAR_2;

 if (VAR_44->is_yuv && (VAR_38 & 1)) {
  FUNC_1("input width %d is not even for YUV format\n", VAR_38);
  return -VAR_2;
 }

 VAR_16 = VAR_16 == 0 ? VAR_14 : VAR_16;
 VAR_17 = VAR_17 == 0 ? VAR_15 : VAR_17;

 if (VAR_7 != VAR_5) {
  if (VAR_41 && VAR_15 == VAR_17)
   VAR_28 = 1;

  if (VAR_41) {
   if (VAR_28)
    VAR_37 /= 2;
   VAR_13 /= 2;
   VAR_17 /= 2;

   FUNC_0("adjusting for ilace: height %d, pos_y %d, out_height %d\n",
    VAR_37, VAR_13, VAR_17);
  }
 }

 if (!FUNC_4(VAR_6, VAR_7, VAR_18))
  return -VAR_2;

 VAR_29 = FUNC_3(VAR_6, VAR_7, VAR_42, VAR_43, VAR_8, VAR_25, VAR_38,
       VAR_37, VAR_16, VAR_17, VAR_18,
       &VAR_27, &VAR_39, &VAR_40, VAR_12,
       VAR_23, VAR_26);
 if (VAR_29)
  return VAR_29;

 VAR_38 = VAR_38 / VAR_39;
 VAR_37 = VAR_37 / VAR_40;

 if (VAR_39 > 1 || VAR_40 > 1)
  FUNC_0("predecimation %d x %x, new input size %d x %d\n",
   VAR_39, VAR_40, VAR_38, VAR_37);

 if (VAR_44->is_yuv && (VAR_38 & 1)) {
  FUNC_0("predecimated input width is not even for YUV format\n");
  FUNC_0("adjusting input width %d -> %d\n",
   VAR_38, VAR_38 & ~1);

  VAR_38 &= ~1;
 }

 if (VAR_44->is_yuv)
  VAR_30 = 1;

 if (VAR_41 && !VAR_28) {







  if (!VAR_37 || VAR_37 == VAR_17)
   VAR_36 = 0;
  else
   VAR_36 = VAR_37 / VAR_17 / 2;
 }


 if (VAR_28)
  VAR_36 = 1;

 VAR_31 = 0;
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_34 = 0;

 if (VAR_7 == VAR_5)
  VAR_35 = VAR_16;
 else
  VAR_35 = VAR_38;

 FUNC_2(VAR_11, VAR_35,
   VAR_18, VAR_28, VAR_36,
   &VAR_31, &VAR_32, &VAR_33, &VAR_34,
   VAR_39, VAR_40,
   VAR_23, VAR_19);

 FUNC_0("offset0 %u, offset1 %u, row_inc %d, pix_inc %d\n",
   VAR_31, VAR_32, VAR_33, VAR_34);

 FUNC_11(VAR_6, VAR_7, VAR_18);

 FUNC_5(VAR_6, VAR_7, VAR_23);

 if (VAR_6->feat->reverse_ilace_field_order)
  FUNC_26(VAR_31, VAR_32);

 FUNC_7(VAR_6, VAR_7, VAR_9 + VAR_31);
 FUNC_9(VAR_6, VAR_7, VAR_9 + VAR_32);

 if (VAR_18 == VAR_1) {
  FUNC_8(VAR_6, VAR_7, VAR_10 + VAR_31);
  FUNC_10(VAR_6, VAR_7, VAR_10 + VAR_32);
 }

 if (VAR_6->feat->last_pixel_inc_missing)
  VAR_33 += VAR_34 - 1;

 FUNC_18(VAR_6, VAR_7, VAR_33);
 FUNC_14(VAR_6, VAR_7, VAR_34);

 FUNC_0("%d,%d %dx%d -> %dx%d\n", VAR_12, VAR_13, VAR_38,
   VAR_37, VAR_16, VAR_17);

 FUNC_15(VAR_6, VAR_7, VAR_8, VAR_12, VAR_13);

 FUNC_12(VAR_6, VAR_7, VAR_38, VAR_37);

 if (VAR_8 & VAR_3) {
  FUNC_19(VAR_6, VAR_7, VAR_38, VAR_37,
          VAR_16, VAR_17, VAR_41, VAR_27,
          VAR_28, VAR_18, VAR_19);
  FUNC_13(VAR_6, VAR_7, VAR_16, VAR_17);
  FUNC_20(VAR_6, VAR_7, VAR_30);
 }

 FUNC_17(VAR_6, VAR_7, VAR_19, VAR_23,
         VAR_18);

 FUNC_21(VAR_6, VAR_7, VAR_8, VAR_20);
 FUNC_16(VAR_6, VAR_7, VAR_8, VAR_21);
 FUNC_22(VAR_6, VAR_7, VAR_8, VAR_22);

 FUNC_6(VAR_6, VAR_7, VAR_8, VAR_24);

 return 0;
}
