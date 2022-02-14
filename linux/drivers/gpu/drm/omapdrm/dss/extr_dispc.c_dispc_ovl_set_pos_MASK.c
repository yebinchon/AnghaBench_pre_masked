
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_1,
         enum omap_plane_id VAR_2,
         enum omap_overlay_caps VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6;

 if ((VAR_3 & VAR_0) == 0)
  return;

 VAR_6 = FUNC_1(VAR_5, 26, 16) | FUNC_1(VAR_4, 10, 0);

 FUNC_2(VAR_1, FUNC_0(VAR_2), VAR_6);
}
