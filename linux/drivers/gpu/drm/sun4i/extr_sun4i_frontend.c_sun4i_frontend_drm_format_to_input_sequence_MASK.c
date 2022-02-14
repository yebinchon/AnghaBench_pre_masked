
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_format_info {int format; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct drm_format_info const*) ;

__attribute__((used)) static int
FUNC_1(const struct drm_format_info *VAR_9,
         u32 *VAR_10)
{

 if (FUNC_0(VAR_9)) {
  *VAR_10 = 0;
  return 0;
 }

 switch (VAR_9->format) {
 case 137:
  *VAR_10 = VAR_1;
  return 0;

 case 136:
  *VAR_10 = VAR_2;
  return 0;

 case 135:
  *VAR_10 = VAR_2;
  return 0;

 case 134:
  *VAR_10 = VAR_4;
  return 0;

 case 133:
  *VAR_10 = VAR_4;
  return 0;

 case 132:
  *VAR_10 = VAR_3;
  return 0;

 case 131:
  *VAR_10 = VAR_5;
  return 0;

 case 130:
  *VAR_10 = VAR_6;
  return 0;

 case 129:
  *VAR_10 = VAR_7;
  return 0;

 case 128:
  *VAR_10 = VAR_8;
  return 0;

 default:
  return -VAR_0;
 }
}
