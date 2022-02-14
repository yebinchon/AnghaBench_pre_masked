
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
 int FUNC_2 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_3 (struct dispc_device*,int ) ;
 int FUNC_4 (struct dispc_device*,int ) ;

__attribute__((used)) static enum omap_channel FUNC_5(struct dispc_device *VAR_6,
         enum omap_plane_id VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 switch (VAR_7) {
 case 131:
  VAR_8 = 8;
  break;
 case 130:
 case 129:
 case 128:
  VAR_8 = 16;
  break;
 default:
  FUNC_0();
  return 0;
 }

 VAR_9 = FUNC_4(VAR_6, FUNC_1(VAR_7));

 if (FUNC_2(VAR_9, VAR_8, VAR_8) == 1)
  return VAR_1;

 if (!FUNC_3(VAR_6, VAR_0))
  return VAR_2;

 switch (FUNC_2(VAR_9, 31, 30)) {
 case 0:
 default:
  return VAR_2;
 case 1:
  return VAR_3;
 case 2:
  return VAR_4;
 case 3:
  return VAR_5;
 }
}
