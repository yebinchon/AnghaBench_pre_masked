
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_layer_state {int state; } ;
struct sun4i_layer {int id; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_2__ {int zpos; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (struct sun4i_layer_state*) ;
 struct sun4i_layer_state* FUNC_3 (int,int ) ;
 struct sun4i_layer* FUNC_4 (struct drm_plane*) ;
 struct sun4i_layer_state* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_1)
{
 struct sun4i_layer *VAR_2 = FUNC_4(VAR_1);
 struct sun4i_layer_state *VAR_3;

 if (VAR_1->state) {
  VAR_3 = FUNC_5(VAR_1->state);

  FUNC_0(&VAR_3->state);

  FUNC_2(VAR_3);
  VAR_1->state = ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_1, &VAR_3->state);
  VAR_1->state->zpos = VAR_2->id;
 }
}
