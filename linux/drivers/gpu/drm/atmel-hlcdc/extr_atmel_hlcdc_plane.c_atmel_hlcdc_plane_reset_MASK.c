
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {TYPE_1__* dev; int * state; } ;
struct TYPE_4__ {scalar_t__ fb; } ;
struct atmel_hlcdc_plane_state {TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct drm_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 struct atmel_hlcdc_plane_state* FUNC_4 (int *) ;
 int FUNC_5 (struct atmel_hlcdc_plane_state*) ;
 struct atmel_hlcdc_plane_state* FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_1)
{
 struct atmel_hlcdc_plane_state *VAR_2;

 if (VAR_1->state) {
  VAR_2 = FUNC_4(VAR_1->state);

  if (VAR_2->base.fb)
   FUNC_3(VAR_2->base.fb);

  FUNC_5(VAR_2);
  VAR_1->state = ((void*)0);
 }

 VAR_2 = FUNC_6(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  if (FUNC_1(VAR_1, VAR_2)) {
   FUNC_5(VAR_2);
   FUNC_2(VAR_1->dev->dev,
    "Failed to allocate initial plane state\n");
   return;
  }
  FUNC_0(VAR_1, &VAR_2->base);
 }
}
