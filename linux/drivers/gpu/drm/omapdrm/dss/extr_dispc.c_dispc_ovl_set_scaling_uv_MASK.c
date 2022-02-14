
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct drm_format_info {int is_yuv; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_4 (struct dispc_device*,int ) ;
 int FUNC_5 (struct dispc_device*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_6 (struct dispc_device*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int ) ;
 struct drm_format_info* FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct dispc_device *VAR_5,
         enum omap_plane_id VAR_6,
         u16 VAR_7, u16 VAR_8,
         u16 VAR_9, u16 VAR_10,
         bool VAR_11, bool VAR_12,
         bool VAR_13, u32 VAR_14,
         u8 VAR_15)
{
 int VAR_16 = VAR_9 != VAR_7;
 int VAR_17 = VAR_10 != VAR_8;
 bool VAR_18 = VAR_6 != VAR_4;
 const struct drm_format_info *VAR_19;

 VAR_19 = FUNC_7(VAR_14);

 if (!FUNC_4(VAR_5, VAR_3))
  return;

 if (!VAR_19->is_yuv) {

  if (VAR_6 != VAR_4)
   FUNC_3(VAR_5, FUNC_2(VAR_6),
        0, 8, 8);
  return;
 }

 FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11, VAR_14, VAR_15);

 switch (VAR_14) {
 case 130:
  if (VAR_18) {

   VAR_8 >>= 1;
   VAR_7 >>= 1;
  } else {

   VAR_8 <<= 1;
   VAR_7 <<= 1;
  }

  break;
 case 128:
 case 129:

  if (!FUNC_8(VAR_15)) {
   if (VAR_18)

    VAR_7 >>= 1;
   else

    VAR_7 <<= 1;
  }


  if ((VAR_15 & VAR_2) != VAR_1)
   VAR_16 = VAR_17 = 1;

  break;
 default:
  FUNC_0();
  return;
 }

 if (VAR_9 != VAR_7)
  VAR_16 = 1;
 if (VAR_10 != VAR_8)
  VAR_17 = 1;

 FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_12,
      VAR_15, VAR_0);

 if (VAR_6 != VAR_4)
  FUNC_3(VAR_5, FUNC_2(VAR_6),
   (VAR_16 || VAR_17) ? 1 : 0, 8, 8);


 FUNC_3(VAR_5, FUNC_1(VAR_6), VAR_16 ? 1 : 0, 5, 5);

 FUNC_3(VAR_5, FUNC_1(VAR_6), VAR_17 ? 1 : 0, 6, 6);
}
