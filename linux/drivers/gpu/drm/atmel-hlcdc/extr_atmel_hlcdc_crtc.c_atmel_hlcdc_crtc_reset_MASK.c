
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct atmel_hlcdc_crtc_state {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct atmel_hlcdc_crtc_state* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct atmel_hlcdc_crtc_state*) ;
 struct atmel_hlcdc_crtc_state* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_1)
{
 struct atmel_hlcdc_crtc_state *VAR_2;

 if (VAR_1->state) {
  FUNC_0(VAR_1->state);
  VAR_2 = FUNC_1(VAR_1->state);
  FUNC_2(VAR_2);
  VAR_1->state = ((void*)0);
 }

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_1->state = &VAR_2->base;
  VAR_1->state->crtc = VAR_1;
 }
}
