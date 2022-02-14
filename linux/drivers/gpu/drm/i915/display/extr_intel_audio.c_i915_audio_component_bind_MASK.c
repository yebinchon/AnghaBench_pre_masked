
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; int * ops; } ;
struct i915_audio_component {scalar_t__* aud_sample_rate; TYPE_1__ base; } ;
struct drm_i915_private {int drm; struct i915_audio_component* audio_component; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*,struct device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 struct drm_i915_private* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6,
         struct device *VAR_7, void *VAR_8)
{
 struct i915_audio_component *VAR_9 = VAR_8;
 struct drm_i915_private *VAR_10 = FUNC_6(VAR_6);
 int VAR_11;

 if (FUNC_2(VAR_9->base.ops || VAR_9->base.dev))
  return -VAR_1;

 if (FUNC_2(!FUNC_3(VAR_7, VAR_6, VAR_0)))
  return -VAR_2;

 FUNC_4(&VAR_10->drm);
 VAR_9->base.ops = &VAR_5;
 VAR_9->base.dev = VAR_6;
 FUNC_1(VAR_4 != VAR_3);
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9->aud_sample_rate); VAR_11++)
  VAR_9->aud_sample_rate[VAR_11] = 0;
 VAR_10->audio_component = VAR_9;
 FUNC_5(&VAR_10->drm);

 return 0;
}
