
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc {int config; } ;
struct i915_audio_component {int* aud_sample_rate; } ;
struct drm_i915_private {int av_mutex; struct i915_audio_component* audio_component; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct intel_encoder* FUNC_2 (struct drm_i915_private*,int,int) ;
 int FUNC_3 (struct intel_encoder*,int ) ;
 unsigned long FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,unsigned long) ;
 struct drm_i915_private* FUNC_6 (struct device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 struct intel_crtc* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_1);
 struct i915_audio_component *VAR_6 = VAR_5->audio_component;
 struct intel_encoder *VAR_7;
 struct intel_crtc *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 if (!FUNC_1(VAR_5))
  return 0;

 VAR_9 = FUNC_4(VAR_1);
 FUNC_7(&VAR_5->av_mutex);


 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_3);
 if (!VAR_7 || !VAR_7->base.crtc) {
  FUNC_0("Not valid for port %c\n", FUNC_9(VAR_2));
  VAR_10 = -VAR_0;
  goto unlock;
 }

 VAR_8 = FUNC_10(VAR_7->base.crtc);


 VAR_6->aud_sample_rate[VAR_2] = VAR_4;

 FUNC_3(VAR_7, VAR_8->config);

 unlock:
 FUNC_8(&VAR_5->av_mutex);
 FUNC_5(VAR_1, VAR_9);
 return VAR_10;
}
