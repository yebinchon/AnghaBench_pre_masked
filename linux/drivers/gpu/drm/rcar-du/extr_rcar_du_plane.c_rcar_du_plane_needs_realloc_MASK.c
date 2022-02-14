
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_plane_state {scalar_t__ source; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ planes; } ;



__attribute__((used)) static bool FUNC_0(
    const struct rcar_du_plane_state *VAR_0,
    const struct rcar_du_plane_state *VAR_1)
{





 if (!VAR_0->format ||
     VAR_0->format->planes != VAR_1->format->planes)
  return 1;


 if (VAR_0->source != VAR_1->source)
  return 1;

 return 0;
}
