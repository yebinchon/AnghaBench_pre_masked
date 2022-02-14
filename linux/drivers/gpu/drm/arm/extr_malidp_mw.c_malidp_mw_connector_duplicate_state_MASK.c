
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int dummy; } ;
struct malidp_mw_connector_state {struct drm_connector_state base; int rgb2yuv_initialized; int rgb2yuv_coeffs; } ;
struct drm_connector {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_connector*,struct drm_connector_state*) ;
 struct malidp_mw_connector_state* FUNC_2 (int,int ) ;
 struct malidp_mw_connector_state* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_connector_state *
FUNC_4(struct drm_connector *VAR_1)
{
 struct malidp_mw_connector_state *VAR_2, *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_1->state);
 VAR_2->rgb2yuv_coeffs = VAR_3->rgb2yuv_coeffs;
 VAR_2->rgb2yuv_initialized = VAR_3->rgb2yuv_initialized;

 FUNC_1(VAR_1, &VAR_2->base);

 return &VAR_2->base;
}
