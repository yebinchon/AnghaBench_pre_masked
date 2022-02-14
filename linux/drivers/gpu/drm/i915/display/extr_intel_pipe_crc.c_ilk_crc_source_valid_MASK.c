
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct drm_i915_private *VAR_1,
    const enum intel_pipe_crc_source VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
 case 131:
  return 0;
 default:
  return -VAR_0;
 }
}
