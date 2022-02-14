
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct intel_encoder {int port; int * audio_connector; TYPE_1__ base; } ;
struct TYPE_7__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct TYPE_10__ {TYPE_4__* audio_ops; } ;
struct i915_audio_component {TYPE_5__ base; } ;
struct TYPE_8__ {int (* audio_codec_disable ) (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct drm_i915_private {int av_mutex; int ** av_enc_map; TYPE_3__ display; struct i915_audio_component* audio_component; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_9__ {int audio_ptr; int (* pin_eld_notify ) (int ,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct intel_crtc_state const*,int ) ;
 int FUNC_1 (struct drm_i915_private*,int,int,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_5 (int ,int,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

void FUNC_8(struct intel_encoder *VAR_1,
          const struct intel_crtc_state *VAR_2,
          const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_1->base.dev);
 struct i915_audio_component *VAR_5 = VAR_4->audio_component;
 struct intel_crtc *VAR_6 = FUNC_7(VAR_2->base.crtc);
 enum port VAR_7 = VAR_1->port;
 enum pipe VAR_8 = VAR_6->pipe;

 if (VAR_4->display.audio_codec_disable)
  VAR_4->display.audio_codec_disable(VAR_1,
            VAR_2,
            VAR_3);

 FUNC_2(&VAR_4->av_mutex);
 VAR_1->audio_connector = ((void*)0);
 VAR_4->av_enc_map[VAR_8] = ((void*)0);
 FUNC_3(&VAR_4->av_mutex);

 if (VAR_5 && VAR_5->base.audio_ops &&
     VAR_5->base.audio_ops->pin_eld_notify) {

  if (!FUNC_0(VAR_2, VAR_0))
   VAR_8 = -1;
  VAR_5->base.audio_ops->pin_eld_notify(VAR_5->base.audio_ops->audio_ptr,
       (int) VAR_7, (int) VAR_8);
 }

 FUNC_1(VAR_4, VAR_8, VAR_7, ((void*)0), 0, 0);
}
