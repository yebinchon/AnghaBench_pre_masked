
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct malidp_crtc_state {struct drm_crtc_state base; scalar_t__ scaled_planes_mask; int scaler_config; int * coloradj_coeffs; int * gamma_coeffs; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct malidp_crtc_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 struct malidp_crtc_state* FUNC_4 (int ) ;

__attribute__((used)) static struct drm_crtc_state *FUNC_5(struct drm_crtc *VAR_1)
{
 struct malidp_crtc_state *VAR_2, *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_1->state);
 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_2->base);
 FUNC_3(VAR_2->gamma_coeffs, VAR_3->gamma_coeffs,
        sizeof(VAR_2->gamma_coeffs));
 FUNC_3(VAR_2->coloradj_coeffs, VAR_3->coloradj_coeffs,
        sizeof(VAR_2->coloradj_coeffs));
 FUNC_3(&VAR_2->scaler_config, &VAR_3->scaler_config,
        sizeof(VAR_2->scaler_config));
 VAR_2->scaled_planes_mask = 0;

 return &VAR_2->base;
}
