
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_color_component { ____Placeholder_omap_color_component } omap_color_component ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct dispc_device*,int ,int*,int*) ;
 int FUNC_4 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dispc_device *VAR_3,
         enum omap_plane_id VAR_4,
         int VAR_5, int VAR_6,
         enum omap_color_component VAR_7)
{
 u32 VAR_8;

 if (VAR_7 == VAR_0) {
  u8 VAR_9, VAR_10, VAR_11, VAR_12;

  FUNC_3(VAR_3, VAR_1,
        &VAR_9, &VAR_10);
  FUNC_3(VAR_3, VAR_2,
        &VAR_11, &VAR_12);
  VAR_8 = FUNC_2(VAR_6, VAR_11, VAR_12) |
    FUNC_2(VAR_5, VAR_9, VAR_10);

  FUNC_4(VAR_3, FUNC_0(VAR_4), VAR_8);
 } else {
  VAR_8 = FUNC_2(VAR_6, 28, 16) | FUNC_2(VAR_5, 12, 0);
  FUNC_4(VAR_3, FUNC_1(VAR_4), VAR_8);
 }
}
