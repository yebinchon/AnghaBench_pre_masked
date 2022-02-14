
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_0,
          enum omap_plane_id VAR_1, int VAR_2,
          int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, 26, 16) | FUNC_1(VAR_2, 10, 0);
 FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_4);
}
