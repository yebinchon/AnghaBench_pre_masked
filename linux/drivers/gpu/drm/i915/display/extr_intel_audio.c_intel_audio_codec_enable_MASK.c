
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dev; } ;
struct intel_encoder {int port; struct drm_connector* audio_connector; TYPE_1__ base; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_10__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {int port_clock; TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct TYPE_16__ {TYPE_7__* audio_ops; } ;
struct i915_audio_component {TYPE_8__ base; } ;
struct TYPE_14__ {int (* audio_codec_enable ) (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct drm_i915_private {int av_mutex; struct intel_encoder** av_enc_map; TYPE_6__ display; struct i915_audio_component* audio_component; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct TYPE_11__ {int id; } ;
struct drm_connector {int* eld; TYPE_5__* encoder; int name; TYPE_3__ base; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_15__ {int audio_ptr; int (* pin_eld_notify ) (int ,int,int) ;} ;
struct TYPE_12__ {int id; } ;
struct TYPE_13__ {int name; TYPE_4__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode const*) ;
 int FUNC_3 (struct intel_crtc_state const*) ;
 int FUNC_4 (struct intel_crtc_state const*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int,int,int*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_9 (int ,int,int) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;

void FUNC_12(struct intel_encoder *VAR_1,
         const struct intel_crtc_state *VAR_2,
         const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_10(VAR_1->base.dev);
 struct i915_audio_component *VAR_5 = VAR_4->audio_component;
 struct intel_crtc *VAR_6 = FUNC_11(VAR_2->base.crtc);
 struct drm_connector *VAR_7 = VAR_3->connector;
 const struct drm_display_mode *VAR_8 =
  &VAR_2->base.adjusted_mode;
 enum port VAR_9 = VAR_1->port;
 enum pipe VAR_10 = VAR_6->pipe;


 if (!VAR_7->eld[0])
  FUNC_1("Bogus ELD on [CONNECTOR:%d:%s]\n",
         VAR_7->base.id, VAR_7->name);

 FUNC_0("ELD on [CONNECTOR:%d:%s], [ENCODER:%d:%s]\n",
    VAR_7->base.id,
    VAR_7->name,
    VAR_7->encoder->base.id,
    VAR_7->encoder->name);

 VAR_7->eld[6] = FUNC_2(VAR_7, VAR_8) / 2;

 if (VAR_4->display.audio_codec_enable)
  VAR_4->display.audio_codec_enable(VAR_1,
           VAR_2,
           VAR_3);

 FUNC_6(&VAR_4->av_mutex);
 VAR_1->audio_connector = VAR_7;


 VAR_4->av_enc_map[VAR_10] = VAR_1;
 FUNC_7(&VAR_4->av_mutex);

 if (VAR_5 && VAR_5->base.audio_ops &&
     VAR_5->base.audio_ops->pin_eld_notify) {

  if (!FUNC_4(VAR_2, VAR_0))
   VAR_10 = -1;
  VAR_5->base.audio_ops->pin_eld_notify(VAR_5->base.audio_ops->audio_ptr,
       (int) VAR_9, (int) VAR_10);
 }

 FUNC_5(VAR_4, VAR_10, VAR_9, VAR_7->eld,
          VAR_2->port_clock,
          FUNC_3(VAR_2));
}
