
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dispc_device*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct dispc_device *VAR_2,
      enum omap_plane_id VAR_3,
      enum omap_overlay_caps VAR_4,
      u8 VAR_5)
{
 static const unsigned int VAR_6[] = { 0, 8, 16, 24, };
 int VAR_7;

 if ((VAR_4 & VAR_1) == 0)
  return;

 VAR_7 = VAR_6[VAR_3];
 FUNC_0(VAR_2, VAR_0, VAR_5, VAR_7 + 7, VAR_7);
}
