
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_plane* plane; scalar_t__ fb; } ;
struct mdp5_plane_state {int alpha; TYPE_1__ base; scalar_t__ zpos; scalar_t__ premultiplied; } ;
struct drm_plane {scalar_t__ type; TYPE_1__* state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (int ) ;
 struct mdp5_plane_state* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_4)
{
 struct mdp5_plane_state *VAR_5;

 if (VAR_4->state && VAR_4->state->fb)
  FUNC_0(VAR_4->state->fb);

 FUNC_2(FUNC_4(VAR_4->state));
 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);


 VAR_5->alpha = 255;
 VAR_5->premultiplied = 0;

 if (VAR_4->type == VAR_0)
  VAR_5->zpos = VAR_3;
 else
  VAR_5->zpos = VAR_2 + FUNC_1(VAR_4);

 VAR_5->base.plane = VAR_4;

 VAR_4->state = &VAR_5->base;
}
