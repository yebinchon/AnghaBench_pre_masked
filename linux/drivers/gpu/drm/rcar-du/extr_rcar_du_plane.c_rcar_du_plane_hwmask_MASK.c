
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_plane_state {int hwindex; TYPE_1__* format; } ;
struct TYPE_2__ {int planes; } ;



__attribute__((used)) static unsigned int FUNC_0(struct rcar_du_plane_state *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->hwindex == -1)
  return 0;

 VAR_1 = 1 << VAR_0->hwindex;
 if (VAR_0->format->planes == 2)
  VAR_1 |= 1 << ((VAR_0->hwindex + 1) % 8);

 return VAR_1;
}
