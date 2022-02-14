
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int,int) ;
 scalar_t__ FUNC_3 (struct dispc_device*,int ) ;
 int FUNC_4 (struct dispc_device*,int ) ;
 int FUNC_5 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dispc_device *VAR_2,
          enum omap_plane_id VAR_3,
          enum omap_channel VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 switch (VAR_3) {
 case 131:
  VAR_5 = 8;
  break;
 case 130:
 case 129:
 case 128:
  VAR_5 = 16;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_6 = FUNC_4(VAR_2, FUNC_1(VAR_3));
 if (FUNC_3(VAR_2, VAR_0)) {
  switch (VAR_4) {
  case 135:
   VAR_7 = 0;
   VAR_8 = 0;
   break;
  case 136:
   VAR_7 = 1;
   VAR_8 = 0;
   break;
  case 134:
   VAR_7 = 0;
   VAR_8 = 1;
   break;
  case 133:
   if (FUNC_3(VAR_2, VAR_1)) {
    VAR_7 = 0;
    VAR_8 = 2;
   } else {
    FUNC_0();
    return;
   }
   break;
  case 132:
   VAR_7 = 0;
   VAR_8 = 3;
   break;
  default:
   FUNC_0();
   return;
  }

  VAR_6 = FUNC_2(VAR_6, VAR_7, VAR_5, VAR_5);
  VAR_6 = FUNC_2(VAR_6, VAR_8, 31, 30);
 } else {
  VAR_6 = FUNC_2(VAR_6, VAR_4, VAR_5, VAR_5);
 }
 FUNC_5(VAR_2, FUNC_1(VAR_3), VAR_6);
}
