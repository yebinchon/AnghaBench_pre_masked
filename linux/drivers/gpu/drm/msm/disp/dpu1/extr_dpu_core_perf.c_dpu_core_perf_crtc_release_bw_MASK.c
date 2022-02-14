
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct drm_crtc {TYPE_2__ base; int state; } ;
struct TYPE_4__ {scalar_t__ enable_bw_release; } ;
struct dpu_kms {TYPE_1__ perf; int bandwidth_ref; int catalog; } ;
struct dpu_crtc_state {int dummy; } ;
struct TYPE_6__ {scalar_t__ bw_ctl; } ;
struct dpu_crtc {TYPE_3__ cur_perf; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_kms*,struct drm_crtc*) ;
 struct dpu_kms* FUNC_3 (struct drm_crtc*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct dpu_crtc* FUNC_5 (struct drm_crtc*) ;
 struct dpu_crtc_state* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct drm_crtc *VAR_0)
{
 struct dpu_crtc *VAR_1;
 struct dpu_crtc_state *VAR_2;
 struct dpu_kms *VAR_3;

 if (!VAR_0) {
  FUNC_1("invalid crtc\n");
  return;
 }

 VAR_3 = FUNC_3(VAR_0);
 if (!VAR_3 || !VAR_3->catalog) {
  FUNC_1("invalid kms\n");
  return;
 }

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = FUNC_6(VAR_0->state);

 if (FUNC_4(&VAR_3->bandwidth_ref) > 0)
  return;


 if (VAR_3->perf.enable_bw_release) {
  FUNC_7(VAR_0->base.id);
  FUNC_0("Release BW crtc=%d\n", VAR_0->base.id);
  VAR_1->cur_perf.bw_ctl = 0;
  FUNC_2(VAR_3, VAR_0);
 }
}
