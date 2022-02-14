
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dispc_device *VAR_2,
         enum omap_plane_id VAR_3, int VAR_4,
         int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_5 - 1, 26, 16) | FUNC_2(VAR_4 - 1, 10, 0);

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  FUNC_3(VAR_2, FUNC_1(VAR_3), VAR_6);
 else
  FUNC_3(VAR_2, FUNC_0(VAR_3), VAR_6);
}
