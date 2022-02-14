
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
typedef enum omap_burst_size { ____Placeholder_omap_burst_size } omap_burst_size ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_0,
         enum omap_plane_id VAR_1,
         enum omap_burst_size VAR_2)
{
 static const unsigned int VAR_3[] = { 6, 14, 14, 14, 14, };
 int VAR_4;

 VAR_4 = VAR_3[VAR_1];
 FUNC_1(VAR_0, FUNC_0(VAR_1), VAR_2,
      VAR_4 + 1, VAR_4);
}
