
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_10__ {int id; } ;
struct drm_crtc {TYPE_5__ base; } ;
struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_9__ {unsigned long long fix_core_ab_vote; unsigned long long fix_core_ib_vote; scalar_t__ fix_core_clk_rate; TYPE_3__ perf_tune; scalar_t__ max_core_clk_rate; } ;
struct dpu_kms {TYPE_4__ perf; TYPE_2__* catalog; } ;
struct dpu_crtc_state {int bw_control; } ;
struct dpu_core_perf_params {unsigned long long bw_ctl; unsigned long long max_per_pipe_ib; scalar_t__ core_clk_rate; } ;
struct TYPE_6__ {unsigned long long max_bw_high; } ;
struct TYPE_7__ {TYPE_1__ perf; } ;


 int FUNC_0 (char*,int ,scalar_t__,unsigned long long,unsigned long long) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct dpu_core_perf_params*,int ,int) ;
 struct dpu_crtc_state* FUNC_3 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_4(struct dpu_kms *VAR_2,
  struct drm_crtc *VAR_3,
  struct drm_crtc_state *VAR_4,
  struct dpu_core_perf_params *VAR_5)
{
 struct dpu_crtc_state *VAR_6;

 if (!VAR_2 || !VAR_2->catalog || !VAR_3 || !VAR_4 || !VAR_5) {
  FUNC_1("invalid parameters\n");
  return;
 }

 VAR_6 = FUNC_3(VAR_4);
 FUNC_2(VAR_5, 0, sizeof(struct dpu_core_perf_params));

 if (!VAR_6->bw_control) {
  VAR_5->bw_ctl = VAR_2->catalog->perf.max_bw_high *
     1000ULL;
  VAR_5->max_per_pipe_ib = VAR_5->bw_ctl;
  VAR_5->core_clk_rate = VAR_2->perf.max_core_clk_rate;
 } else if (VAR_2->perf.perf_tune.mode == VAR_1) {
  VAR_5->bw_ctl = 0;
  VAR_5->max_per_pipe_ib = 0;
  VAR_5->core_clk_rate = 0;
 } else if (VAR_2->perf.perf_tune.mode == VAR_0) {
  VAR_5->bw_ctl = VAR_2->perf.fix_core_ab_vote;
  VAR_5->max_per_pipe_ib = VAR_2->perf.fix_core_ib_vote;
  VAR_5->core_clk_rate = VAR_2->perf.fix_core_clk_rate;
 }

 FUNC_0(
  "crtc=%d clk_rate=%llu core_ib=%llu core_ab=%llu\n",
   VAR_3->base.id, VAR_5->core_clk_rate,
   VAR_5->max_per_pipe_ib, VAR_5->bw_ctl);
}
