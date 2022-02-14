
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;
 scalar_t__ FUNC_2 (struct dispc_device*,int ) ;
 scalar_t__ FUNC_3 (struct dispc_device*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dispc_device *VAR_7,
      enum omap_plane_id VAR_8, u8 VAR_9,
      enum omap_dss_rotation_type VAR_10,
      u32 VAR_11)
{
 bool VAR_12 = 0;
 int VAR_13 = 0;


 if (VAR_11 == VAR_2 || VAR_11 == VAR_1) {

  if (VAR_9 & VAR_3) {
   switch (VAR_9 & VAR_4) {
   case 131:
    VAR_13 = 2;
    break;
   case 128:
    VAR_13 = 1;
    break;
   case 130:
    VAR_13 = 0;
    break;
   case 129:
    VAR_13 = 3;
    break;
   }
  } else {
   switch (VAR_9 & VAR_4) {
   case 131:
    VAR_13 = 0;
    break;
   case 128:
    VAR_13 = 3;
    break;
   case 130:
    VAR_13 = 2;
    break;
   case 129:
    VAR_13 = 1;
    break;
   }
  }

  if (FUNC_4(VAR_9))
   VAR_12 = 1;
  else
   VAR_12 = 0;
 }






 if (VAR_11 == VAR_0 && VAR_10 != VAR_6)
  VAR_13 = 1;

 FUNC_1(VAR_7, FUNC_0(VAR_8), VAR_13, 13, 12);
 if (FUNC_2(VAR_7, VAR_5))
  FUNC_1(VAR_7, FUNC_0(VAR_8),
   VAR_12 ? 1 : 0, 18, 18);

 if (FUNC_3(VAR_7, VAR_8, VAR_0)) {
  bool VAR_14 =
   VAR_11 == VAR_0 &&
   VAR_10 == VAR_6 &&
   !FUNC_4(VAR_9);


  FUNC_1(VAR_7, FUNC_0(VAR_8),
       VAR_14, 22, 22);
 }
}
