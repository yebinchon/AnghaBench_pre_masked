
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;
 scalar_t__ FUNC_2 (struct dispc_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_2,
        enum omap_plane_id VAR_3,
        enum omap_dss_rotation_type VAR_4)
{
 if (FUNC_2(VAR_2, VAR_0) == 0)
  return;

 if (VAR_4 == VAR_1)
  FUNC_1(VAR_2, FUNC_0(VAR_3), 1, 29, 29);
 else
  FUNC_1(VAR_2, FUNC_0(VAR_3), 0, 29, 29);
}
