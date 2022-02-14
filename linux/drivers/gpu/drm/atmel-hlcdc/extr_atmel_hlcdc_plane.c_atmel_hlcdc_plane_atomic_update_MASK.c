
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_2__* state; } ;
struct TYPE_3__ {int visible; } ;
struct atmel_hlcdc_plane_state {TYPE_1__ base; } ;
struct atmel_hlcdc_plane {int layer; } ;
struct TYPE_4__ {int fb; int crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_4 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_5 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_6 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_7 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_8 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_9 (struct atmel_hlcdc_plane*,struct atmel_hlcdc_plane_state*) ;
 struct atmel_hlcdc_plane_state* FUNC_10 (TYPE_2__*) ;
 struct atmel_hlcdc_plane* FUNC_11 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_12(struct drm_plane *VAR_6,
         struct drm_plane_state *VAR_7)
{
 struct atmel_hlcdc_plane *VAR_8 = FUNC_11(VAR_6);
 struct atmel_hlcdc_plane_state *VAR_9 =
   FUNC_10(VAR_6->state);
 u32 VAR_10;

 if (!VAR_6->state->crtc || !VAR_6->state->fb)
  return;

 if (!VAR_9->base.visible) {
  FUNC_3(VAR_6, VAR_7);
  return;
 }

 FUNC_9(VAR_8, VAR_9);
 FUNC_8(VAR_8, VAR_9);
 FUNC_7(VAR_8, VAR_9);
 FUNC_5(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_9);
 FUNC_6(VAR_8, VAR_9);


 FUNC_2(&VAR_8->layer, VAR_4,
        FUNC_0(0) |
        FUNC_0(1) |
        FUNC_0(2));


 VAR_10 = FUNC_1(&VAR_8->layer, VAR_2);
 FUNC_2(&VAR_8->layer, VAR_1,
   VAR_5 |
   (VAR_10 & VAR_3 ?
    VAR_0 : VAR_3));
}
