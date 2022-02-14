
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct dispc_device*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dispc_device *VAR_0,
       enum omap_plane_id VAR_1, bool VAR_2)
{
 FUNC_1("dispc_enable_plane %d, %d\n", VAR_1, VAR_2);

 FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_2 ? 1 : 0, 0, 0);

 return 0;
}
