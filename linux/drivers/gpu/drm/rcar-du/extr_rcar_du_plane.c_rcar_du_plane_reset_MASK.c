
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zpos; } ;
struct rcar_du_plane_state {int hwindex; TYPE_1__ state; int colorkey; int source; } ;
struct drm_plane {scalar_t__ type; int * state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_plane*,TYPE_1__*) ;
 struct rcar_du_plane_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_plane*,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_4)
{
 struct rcar_du_plane_state *VAR_5;

 if (VAR_4->state) {
  FUNC_2(VAR_4, VAR_4->state);
  VAR_4->state = ((void*)0);
 }

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_0(VAR_4, &VAR_5->state);

 VAR_5->hwindex = -1;
 VAR_5->source = VAR_3;
 VAR_5->colorkey = VAR_2;
 VAR_5->state.zpos = VAR_4->type == VAR_0 ? 0 : 1;
}
