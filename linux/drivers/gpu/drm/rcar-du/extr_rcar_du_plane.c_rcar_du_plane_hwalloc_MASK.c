
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_du_plane_state {scalar_t__ source; TYPE_2__* format; } ;
struct rcar_du_plane {TYPE_1__* group; } ;
struct TYPE_4__ {unsigned int planes; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct rcar_du_plane *VAR_5,
     struct rcar_du_plane_state *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_6->format->planes;
 int VAR_9 = -1;
 int VAR_10;

 if (VAR_6->source == VAR_3) {

  if (VAR_5->group->index != 0)
   return -VAR_1;

  VAR_9 = 0;
 } else if (VAR_6->source == VAR_4) {

  VAR_9 = VAR_5->group->index == 0 ? 1 : 0;
 }

 if (VAR_9 >= 0)
  return VAR_7 & (1 << VAR_9) ? VAR_9 : -VAR_0;

 for (VAR_10 = VAR_2 - 1; VAR_10 >= 0; --VAR_10) {
  if (!(VAR_7 & (1 << VAR_10)))
   continue;

  if (VAR_8 == 1 || VAR_7 & (1 << ((VAR_10 + 1) % 8)))
   break;
 }

 return VAR_10 < 0 ? -VAR_0 : VAR_10;
}
