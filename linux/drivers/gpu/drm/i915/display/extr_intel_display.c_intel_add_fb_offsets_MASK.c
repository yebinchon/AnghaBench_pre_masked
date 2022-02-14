
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_plane_state {TYPE_1__* color_plane; } ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ x; } ;



void FUNC_0(int *VAR_0, int *VAR_1,
     const struct intel_plane_state *VAR_2,
     int VAR_3)

{
 *VAR_0 += VAR_2->color_plane[VAR_3].x;
 *VAR_1 += VAR_2->color_plane[VAR_3].y;
}
