
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_5,
     enum pipe VAR_6,
     enum intel_pipe_crc_source *VAR_7,
     u32 *VAR_8)
{
 if (*VAR_7 == VAR_1) {
  int VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 switch (*VAR_7) {
 case 129:
  *VAR_8 = VAR_2 | VAR_3;
  break;
 case 128:
  if (!FUNC_0(VAR_5))
   return -VAR_0;
  *VAR_8 = VAR_2 | VAR_4;
  break;
 case 130:
  *VAR_8 = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
