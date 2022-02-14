
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_plane_state {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct rcar_du_plane {int group; TYPE_1__ plane; } ;


 void FUNC_0 (int ,struct rcar_du_plane_state*) ;
 struct rcar_du_plane_state* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct rcar_du_plane *VAR_0)
{
 struct rcar_du_plane_state *VAR_1 =
  FUNC_1(VAR_0->plane.state);

 return FUNC_0(VAR_0->group, VAR_1);
}
