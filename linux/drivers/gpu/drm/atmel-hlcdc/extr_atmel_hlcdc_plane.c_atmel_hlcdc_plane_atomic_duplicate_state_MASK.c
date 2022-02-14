
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {int state; } ;
struct atmel_hlcdc_plane_state {struct drm_plane_state base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_plane*,struct atmel_hlcdc_plane_state*) ;
 int FUNC_1 (scalar_t__) ;
 struct atmel_hlcdc_plane_state* FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_hlcdc_plane_state*) ;
 struct atmel_hlcdc_plane_state* FUNC_4 (struct atmel_hlcdc_plane_state*,int,int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_5(struct drm_plane *VAR_1)
{
 struct atmel_hlcdc_plane_state *VAR_2 =
   FUNC_2(VAR_1->state);
 struct atmel_hlcdc_plane_state *VAR_3;

 VAR_3 = FUNC_4(VAR_2, sizeof(*VAR_2), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_0(VAR_1, VAR_3)) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 if (VAR_3->base.fb)
  FUNC_1(VAR_3->base.fb);

 return &VAR_3->base;
}
