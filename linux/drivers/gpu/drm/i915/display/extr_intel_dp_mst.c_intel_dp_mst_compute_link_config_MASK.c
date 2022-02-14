
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_config_limits {int max_bpp; int min_bpp; int max_clock; int max_lane_count; } ;
struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {TYPE_1__* primary; } ;
struct intel_dp {int mst_mgr; int desc; } ;
struct TYPE_6__ {int tu; } ;
struct drm_display_mode {int crtc_clock; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; struct drm_atomic_state* state; } ;
struct intel_crtc_state {int pipe_bpp; TYPE_3__ dp_m_n; int fec_enable; int port_clock; int lane_count; int pbn; TYPE_2__ base; } ;
struct intel_connector {void* port; } ;
struct drm_connector_state {int connector; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_4__ {struct intel_dp dp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_atomic_state*,int *,void*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ) ;
 struct intel_dp_mst_encoder* FUNC_4 (int *) ;
 int FUNC_5 (int,int ,int ,int ,TYPE_3__*,int,int ) ;
 struct intel_connector* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_encoder *VAR_3,
         struct intel_crtc_state *VAR_4,
         struct drm_connector_state *VAR_5,
         struct link_config_limits *VAR_6)
{
 struct drm_atomic_state *VAR_7 = VAR_4->base.state;
 struct intel_dp_mst_encoder *VAR_8 = FUNC_4(&VAR_3->base);
 struct intel_dp *VAR_9 = &VAR_8->primary->dp;
 struct intel_connector *VAR_10 =
  FUNC_6(VAR_5->connector);
 const struct drm_display_mode *VAR_11 =
  &VAR_4->base.adjusted_mode;
 void *VAR_12 = VAR_10->port;
 bool VAR_13 = FUNC_3(&VAR_9->desc,
        VAR_0);
 int VAR_14, VAR_15 = -VAR_2;

 VAR_4->lane_count = VAR_6->max_lane_count;
 VAR_4->port_clock = VAR_6->max_clock;

 for (VAR_14 = VAR_6->max_bpp; VAR_14 >= VAR_6->min_bpp; VAR_14 -= 2 * 3) {
  VAR_4->pipe_bpp = VAR_14;

  VAR_4->pbn = FUNC_2(VAR_11->crtc_clock,
             VAR_4->pipe_bpp);

  VAR_15 = FUNC_1(VAR_7, &VAR_9->mst_mgr,
            VAR_12, VAR_4->pbn);
  if (VAR_15 == -VAR_1)
   return VAR_15;
  if (VAR_15 >= 0)
   break;
 }

 if (VAR_15 < 0) {
  FUNC_0("failed finding vcpi slots:%d\n", VAR_15);
  return VAR_15;
 }

 FUNC_5(VAR_4->pipe_bpp,
          VAR_4->lane_count,
          VAR_11->crtc_clock,
          VAR_4->port_clock,
          &VAR_4->dp_m_n,
          VAR_13, VAR_4->fec_enable);
 VAR_4->dp_m_n.tu = VAR_15;

 return 0;
}
