
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dispc_device {int* fifo_assignment; scalar_t__* fifo_size; TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {int num_fifos; } ;



__attribute__((used)) static u32 FUNC_0(struct dispc_device *VAR_0,
       enum omap_plane_id VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->feat->num_fifos; ++VAR_2) {
  if (VAR_0->fifo_assignment[VAR_2] == VAR_1)
   VAR_3 += VAR_0->fifo_size[VAR_2];
 }

 return VAR_3;
}
