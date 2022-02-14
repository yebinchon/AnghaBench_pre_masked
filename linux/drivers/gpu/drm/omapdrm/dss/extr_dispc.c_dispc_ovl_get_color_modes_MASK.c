
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {int const** supported_color_modes; } ;



__attribute__((used)) static const u32 *FUNC_0(struct dispc_device *VAR_0,
         enum omap_plane_id VAR_1)
{
 return VAR_0->feat->supported_color_modes[VAR_1];
}
