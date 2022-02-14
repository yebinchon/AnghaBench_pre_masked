
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_crtc_state {int cpu_transcoder; } ;
struct i915_audio_component {int* aud_sample_rate; } ;
struct drm_i915_private {struct i915_audio_component* audio_component; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct intel_crtc_state const*,int) ;
 int FUNC_7 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct intel_encoder *VAR_6,
        const struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_8(VAR_6->base.dev);
 struct i915_audio_component *VAR_9 = VAR_8->audio_component;
 enum transcoder VAR_10 = VAR_7->cpu_transcoder;
 enum port VAR_11 = VAR_6->port;
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_13 = VAR_9 ? VAR_9->aud_sample_rate[VAR_11] : 0;

 VAR_14 = FUNC_4(FUNC_2(VAR_10));
 VAR_14 &= ~VAR_2;
 VAR_14 &= ~VAR_3;
 VAR_14 &= ~VAR_1;
 VAR_14 |= FUNC_7(VAR_7);

 VAR_12 = FUNC_6(VAR_7, VAR_13);
 if (VAR_12 != 0) {
  FUNC_1("using N %d\n", VAR_12);

  VAR_14 &= ~VAR_0;
  VAR_14 |= FUNC_0(VAR_12);
  VAR_14 |= VAR_1;
 } else {
  FUNC_1("using automatic N\n");
 }

 FUNC_5(FUNC_2(VAR_10), VAR_14);





 VAR_14 = FUNC_4(FUNC_3(VAR_10));
 VAR_14 &= ~VAR_4;
 VAR_14 &= ~VAR_5;
 FUNC_5(FUNC_3(VAR_10), VAR_14);
}
