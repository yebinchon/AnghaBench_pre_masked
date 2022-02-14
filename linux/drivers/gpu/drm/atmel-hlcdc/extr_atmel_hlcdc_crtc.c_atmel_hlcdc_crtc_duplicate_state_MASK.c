
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;
struct atmel_hlcdc_crtc_state {struct drm_crtc_state base; int output_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct atmel_hlcdc_crtc_state* FUNC_2 (int ) ;
 struct atmel_hlcdc_crtc_state* FUNC_3 (int,int ) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_4(struct drm_crtc *VAR_1)
{
 struct atmel_hlcdc_crtc_state *VAR_2, *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 FUNC_1(VAR_1, &VAR_2->base);

 VAR_3 = FUNC_2(VAR_1->state);
 VAR_2->output_mode = VAR_3->output_mode;

 return &VAR_2->base;
}
