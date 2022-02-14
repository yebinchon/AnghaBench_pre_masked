
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {scalar_t__** supported_color_modes; } ;



__attribute__((used)) static bool FUNC_0(struct dispc_device *VAR_0,
        enum omap_plane_id VAR_1, u32 VAR_2)
{
 const u32 *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_0->feat->supported_color_modes[VAR_1];

 for (VAR_4 = 0; VAR_3[VAR_4]; ++VAR_4) {
  if (VAR_3[VAR_4] == VAR_2)
   return 1;
 }

 return 0;
}
