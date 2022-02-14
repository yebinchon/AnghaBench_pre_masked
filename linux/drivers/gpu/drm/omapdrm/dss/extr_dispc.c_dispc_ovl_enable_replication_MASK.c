
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_1,
      enum omap_plane_id VAR_2,
      enum omap_overlay_caps VAR_3,
      bool VAR_4)
{
 static const unsigned int VAR_5[] = { 5, 10, 10, 10 };
 int VAR_6;

 if ((VAR_3 & VAR_0) == 0)
  return;

 VAR_6 = VAR_5[VAR_2];
 FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_4, VAR_6, VAR_6);
}
