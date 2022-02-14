
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {scalar_t__ state; } ;
struct dpu_crtc_state {int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*,scalar_t__) ;
 struct dpu_crtc_state* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1)
{
 struct dpu_crtc_state *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (VAR_1->state)
  FUNC_1(VAR_1, VAR_1->state);

 FUNC_0(VAR_1, &VAR_2->base);
}
