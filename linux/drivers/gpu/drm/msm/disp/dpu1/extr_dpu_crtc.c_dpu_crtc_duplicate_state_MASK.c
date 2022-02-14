
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;
struct dpu_crtc_state {struct drm_crtc_state base; } ;
struct dpu_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct dpu_crtc_state* FUNC_2 (struct dpu_crtc_state*,int,int ) ;
 struct dpu_crtc* FUNC_3 (struct drm_crtc*) ;
 struct dpu_crtc_state* FUNC_4 (int ) ;

__attribute__((used)) static struct drm_crtc_state *FUNC_5(struct drm_crtc *VAR_1)
{
 struct dpu_crtc *VAR_2;
 struct dpu_crtc_state *VAR_3, *VAR_4;

 if (!VAR_1 || !VAR_1->state) {
  FUNC_0("invalid argument(s)\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_3(VAR_1);
 VAR_4 = FUNC_4(VAR_1->state);
 VAR_3 = FUNC_2(VAR_4, sizeof(*VAR_4), VAR_0);
 if (!VAR_3) {
  FUNC_0("failed to allocate state\n");
  return ((void*)0);
 }


 FUNC_1(VAR_1, &VAR_3->base);

 return &VAR_3->base;
}
