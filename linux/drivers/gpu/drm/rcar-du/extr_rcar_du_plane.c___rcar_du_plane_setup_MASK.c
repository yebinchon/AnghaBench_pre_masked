
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_du_plane_state {int hwindex; scalar_t__ source; TYPE_2__* format; } ;
struct rcar_du_group {scalar_t__ index; struct rcar_du_device* dev; } ;
struct rcar_du_device {unsigned int vspd1_sink; TYPE_1__* info; } ;
struct TYPE_4__ {int planes; } ;
struct TYPE_3__ {int gen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rcar_du_group*,int,struct rcar_du_plane_state const*) ;
 int FUNC_1 (struct rcar_du_group*,struct rcar_du_plane_state const*) ;
 int FUNC_2 (struct rcar_du_device*) ;

void FUNC_3(struct rcar_du_group *VAR_1,
      const struct rcar_du_plane_state *VAR_2)
{
 struct rcar_du_device *VAR_3 = VAR_1->dev;

 FUNC_0(VAR_1, VAR_2->hwindex, VAR_2);
 if (VAR_2->format->planes == 2)
  FUNC_0(VAR_1, (VAR_2->hwindex + 1) % 8,
        VAR_2);

 if (VAR_3->info->gen < 3)
  FUNC_1(VAR_1, VAR_2);

 if (VAR_2->source == VAR_0) {
  unsigned int VAR_4 = VAR_1->index ? 2 : 0;

  if (VAR_3->vspd1_sink != VAR_4) {
   VAR_3->vspd1_sink = VAR_4;
   FUNC_2(VAR_3);
  }
 }
}
