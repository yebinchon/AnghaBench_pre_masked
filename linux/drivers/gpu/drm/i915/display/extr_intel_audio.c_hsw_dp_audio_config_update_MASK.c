
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
struct dp_aud_n_m {int m; int n; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct dp_aud_n_m* FUNC_6 (struct intel_crtc_state const*,int) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct intel_encoder *VAR_7,
      const struct intel_crtc_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_7(VAR_7->base.dev);
 struct i915_audio_component *VAR_10 = VAR_9->audio_component;
 enum transcoder VAR_11 = VAR_8->cpu_transcoder;
 enum port VAR_12 = VAR_7->port;
 const struct dp_aud_n_m *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_14 = VAR_10 ? VAR_10->aud_sample_rate[VAR_12] : 0;
 VAR_13 = FUNC_6(VAR_8, VAR_14);
 if (VAR_13)
  FUNC_1("using Maud %u, Naud %u\n", VAR_13->m, VAR_13->n);
 else
  FUNC_1("using automatic Maud, Naud\n");

 VAR_15 = FUNC_4(FUNC_2(VAR_11));
 VAR_15 &= ~VAR_3;
 VAR_15 &= ~VAR_4;
 VAR_15 &= ~VAR_2;
 VAR_15 |= VAR_3;

 if (VAR_13) {
  VAR_15 &= ~VAR_1;
  VAR_15 |= FUNC_0(VAR_13->n);
  VAR_15 |= VAR_2;
 }

 FUNC_5(FUNC_2(VAR_11), VAR_15);

 VAR_15 = FUNC_4(FUNC_3(VAR_11));
 VAR_15 &= ~VAR_0;
 VAR_15 &= ~VAR_6;
 VAR_15 &= ~VAR_5;

 if (VAR_13) {
  VAR_15 |= VAR_13->m;
  VAR_15 |= VAR_6;
  VAR_15 |= VAR_5;
 }

 FUNC_5(FUNC_3(VAR_11), VAR_15);
}
