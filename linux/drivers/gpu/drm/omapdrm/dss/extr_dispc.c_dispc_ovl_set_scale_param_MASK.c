
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_color_component { ____Placeholder_omap_color_component } omap_color_component ;


 int FUNC_0 (struct dispc_device*,int,int,int,int) ;
 int FUNC_1 (struct dispc_device*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_0,
          enum omap_plane_id VAR_1,
          u16 VAR_2, u16 VAR_3,
          u16 VAR_4, u16 VAR_5,
          bool VAR_6, u8 VAR_7,
          enum omap_color_component VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = 1024 * VAR_2 / VAR_4;
 VAR_10 = 1024 * VAR_3 / VAR_5;

 FUNC_1(VAR_0, VAR_1, VAR_9, VAR_10, VAR_6,
     VAR_8);
 FUNC_0(VAR_0, VAR_1, VAR_9, VAR_10, VAR_8);
}
