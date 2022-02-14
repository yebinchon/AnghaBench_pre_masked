
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_crtc_state {int base; } ;
struct drm_crtc {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 struct malidp_crtc_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_crtc*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1)
{
 struct malidp_crtc_state *VAR_2 =
  FUNC_1(sizeof(*VAR_2), VAR_0);

 if (VAR_1->state)
  FUNC_2(VAR_1, VAR_1->state);

 FUNC_0(VAR_1, &VAR_2->base);
}
