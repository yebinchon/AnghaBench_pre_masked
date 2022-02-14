
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_3 (struct dispc_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct dispc_device *VAR_2)
{
 enum omap_plane_id VAR_3 = VAR_1;
 bool VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_3), 0, 0) == 1;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_3(VAR_2, VAR_0, 6, 6) == 1;
 if (VAR_5) {
  FUNC_1("GO bit not down for WB\n");
  return;
 }

 FUNC_2(VAR_2, VAR_0, 1, 6, 6);
}
