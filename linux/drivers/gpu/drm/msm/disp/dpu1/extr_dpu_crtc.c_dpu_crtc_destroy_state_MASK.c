
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;
struct dpu_crtc_state {int dummy; } ;
struct dpu_crtc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_crtc_state*) ;
 int FUNC_3 (struct dpu_crtc_state*) ;
 struct dpu_crtc* FUNC_4 (struct drm_crtc*) ;
 struct dpu_crtc_state* FUNC_5 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
  struct drm_crtc_state *VAR_1)
{
 struct dpu_crtc *VAR_2;
 struct dpu_crtc_state *VAR_3;

 if (!VAR_0 || !VAR_1) {
  FUNC_1("invalid argument(s)\n");
  return;
 }

 VAR_2 = FUNC_4(VAR_0);
 VAR_3 = FUNC_5(VAR_1);

 FUNC_0("crtc%d\n", VAR_0->base.id);

 FUNC_2(VAR_1);

 FUNC_3(VAR_3);
}
