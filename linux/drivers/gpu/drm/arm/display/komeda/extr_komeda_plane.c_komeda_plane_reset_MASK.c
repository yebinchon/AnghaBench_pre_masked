
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct drm_plane* plane; int color_range; int color_encoding; int zpos; int alpha; int pixel_blend_mode; int rotation; } ;
struct komeda_plane_state {TYPE_3__ base; } ;
struct komeda_plane {TYPE_2__* layer; } ;
struct drm_plane {TYPE_3__* state; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct komeda_plane_state* FUNC_2 (int,int ) ;
 struct komeda_plane* FUNC_3 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_6)
{
 struct komeda_plane_state *VAR_7;
 struct komeda_plane *VAR_8 = FUNC_3(VAR_6);

 if (VAR_6->state)
  FUNC_0(VAR_6->state);

 FUNC_1(VAR_6->state);
 VAR_6->state = ((void*)0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_5);
 if (VAR_7) {
  VAR_7->base.rotation = VAR_4;
  VAR_7->base.pixel_blend_mode = VAR_3;
  VAR_7->base.alpha = VAR_0;
  VAR_7->base.zpos = VAR_8->layer->base.id;
  VAR_7->base.color_encoding = VAR_1;
  VAR_7->base.color_range = VAR_2;
  VAR_6->state = &VAR_7->base;
  VAR_6->state->plane = VAR_6;
 }
}
