
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct dispc_device*,int) ;
 int FUNC_1 (struct dispc_device*,int) ;

__attribute__((used)) static unsigned long FUNC_2(struct dispc_device *VAR_1,
        enum omap_plane_id VAR_2)
{
 enum omap_channel VAR_3;

 if (VAR_2 == VAR_0)
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_3);
}
