
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;





 int FUNC_2 (struct drm_i915_private*) ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct drm_i915_private*,int,int*) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_12,
    enum pipe VAR_13,
    enum intel_pipe_crc_source *VAR_14,
    u32 *VAR_15)
{
 bool VAR_16 = 0;

 if (*VAR_14 == VAR_2) {
  int VAR_17 = FUNC_3(VAR_12, VAR_13, VAR_14);
  if (VAR_17)
   return VAR_17;
 }

 switch (*VAR_14) {
 case 131:
  *VAR_15 = VAR_5 | VAR_9;
  break;
 case 135:
  *VAR_15 = VAR_5 | VAR_6;
  VAR_16 = 1;
  break;
 case 134:
  *VAR_15 = VAR_5 | VAR_7;
  VAR_16 = 1;
  break;
 case 133:
  if (!FUNC_2(VAR_12))
   return -VAR_1;
  *VAR_15 = VAR_5 | VAR_8;
  VAR_16 = 1;
  break;
 case 132:
  *VAR_15 = 0;
  break;
 default:
  return -VAR_1;
 }
 if (VAR_16) {
  u32 VAR_18 = FUNC_0(VAR_11);

  VAR_18 |= VAR_0;
  switch (VAR_13) {
  case 130:
   VAR_18 |= VAR_3;
   break;
  case 129:
   VAR_18 |= VAR_4;
   break;
  case 128:
   VAR_18 |= VAR_10;
   break;
  default:
   return -VAR_1;
  }
  FUNC_1(VAR_11, VAR_18);
 }

 return 0;
}
