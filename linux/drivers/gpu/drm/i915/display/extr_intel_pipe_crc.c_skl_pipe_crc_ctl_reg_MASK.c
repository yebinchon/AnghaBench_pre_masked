
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_0(struct drm_i915_private *VAR_11,
    enum pipe VAR_12,
    enum intel_pipe_crc_source *VAR_13,
    u32 *VAR_14)
{
 if (*VAR_13 == VAR_1)
  *VAR_13 = 135;

 switch (*VAR_13) {
 case 134:
  *VAR_14 = VAR_2 | VAR_4;
  break;
 case 133:
  *VAR_14 = VAR_2 | VAR_5;
  break;
 case 132:
  *VAR_14 = VAR_2 | VAR_6;
  break;
 case 131:
  *VAR_14 = VAR_2 | VAR_7;
  break;
 case 130:
  *VAR_14 = VAR_2 | VAR_8;
  break;
 case 129:
  *VAR_14 = VAR_2 | VAR_9;
  break;
 case 128:
  *VAR_14 = VAR_2 | VAR_10;
  break;
 case 135:
  *VAR_14 = VAR_2 | VAR_3;
  break;
 case 136:
  *VAR_14 = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
