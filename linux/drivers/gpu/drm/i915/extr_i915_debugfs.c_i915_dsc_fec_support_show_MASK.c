
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct drm_connector* private; } ;
struct intel_dp {int fec_capable; int force_dsc_en; int dsc_dpcd; } ;
struct TYPE_7__ {int compression_enable; } ;
struct intel_crtc_state {TYPE_3__ dsc_params; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_5__ {int connection_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_crtc {int state; int mutex; } ;
struct drm_connector {scalar_t__ status; TYPE_2__* state; struct drm_device* dev; } ;
struct TYPE_8__ {int base; } ;
struct TYPE_6__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_4 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_5 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (int *,struct drm_modeset_acquire_ctx*) ;
 struct intel_dp* FUNC_7 (int *) ;
 TYPE_4__* FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct seq_file*,char*,int ) ;
 struct intel_crtc_state* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct seq_file *VAR_4, void *VAR_5)
{
 struct drm_connector *VAR_6 = VAR_4->private;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_crtc *VAR_8;
 struct intel_dp *VAR_9;
 struct drm_modeset_acquire_ctx VAR_10;
 struct intel_crtc_state *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_3(&VAR_10, VAR_0);

 do {
  VAR_13 = 0;
  VAR_12 = FUNC_6(&VAR_7->mode_config.connection_mutex,
           &VAR_10);
  if (VAR_12) {
   if (VAR_12 == -VAR_1 && !FUNC_4(&VAR_10)) {
    VAR_13 = 1;
    continue;
   }
   break;
  }
  VAR_8 = VAR_6->state->crtc;
  if (VAR_6->status != VAR_3 || !VAR_8) {
   VAR_12 = -VAR_2;
   break;
  }
  VAR_12 = FUNC_6(&VAR_8->mutex, &VAR_10);
  if (VAR_12 == -VAR_1) {
   VAR_12 = FUNC_4(&VAR_10);
   if (!VAR_12) {
    VAR_13 = 1;
    continue;
   }
   break;
  } else if (VAR_12) {
   break;
  }
  VAR_9 = FUNC_7(&FUNC_8(VAR_6)->base);
  VAR_11 = FUNC_11(VAR_8->state);
  FUNC_10(VAR_4, "DSC_Enabled: %s\n",
      FUNC_12(VAR_11->dsc_params.compression_enable));
  FUNC_10(VAR_4, "DSC_Sink_Support: %s\n",
      FUNC_12(FUNC_0(VAR_9->dsc_dpcd)));
  FUNC_10(VAR_4, "Force_DSC_Enable: %s\n",
      FUNC_12(VAR_9->force_dsc_en));
  if (!FUNC_9(VAR_9))
   FUNC_10(VAR_4, "FEC_Sink_Support: %s\n",
       FUNC_12(FUNC_1(VAR_9->fec_capable)));
 } while (VAR_13);

 FUNC_5(&VAR_10);
 FUNC_2(&VAR_10);

 return VAR_12;
}
