
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* audio_codec_disable; void* audio_codec_enable; } ;
struct drm_i915_private {TYPE_1__ display; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

void FUNC_6(struct drm_i915_private *VAR_6)
{
 if (FUNC_3(VAR_6)) {
  VAR_6->display.audio_codec_enable = VAR_1;
  VAR_6->display.audio_codec_disable = VAR_0;
 } else if (FUNC_5(VAR_6) || FUNC_2(VAR_6)) {
  VAR_6->display.audio_codec_enable = VAR_5;
  VAR_6->display.audio_codec_disable = VAR_4;
 } else if (FUNC_4(VAR_6) || FUNC_1(VAR_6) >= 8) {
  VAR_6->display.audio_codec_enable = VAR_3;
  VAR_6->display.audio_codec_disable = VAR_2;
 } else if (FUNC_0(VAR_6)) {
  VAR_6->display.audio_codec_enable = VAR_5;
  VAR_6->display.audio_codec_disable = VAR_4;
 }
}
