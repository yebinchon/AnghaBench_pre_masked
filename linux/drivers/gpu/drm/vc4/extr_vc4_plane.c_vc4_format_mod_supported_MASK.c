
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint64_t ;
typedef int uint32_t ;
struct drm_plane {int dummy; } ;
 int FUNC_0 (int const) ;

__attribute__((used)) static bool FUNC_1(struct drm_plane *VAR_0,
         uint32_t VAR_1,
         uint64_t VAR_2)
{

 switch (VAR_1) {
 case 132:
 case 146:
 case 148:
 case 134:
 case 135:
 case 145:
 case 147:
 case 133:
  switch (FUNC_0(VAR_2)) {
  case 140:
  case 141:
   return 1;
  default:
   return 0;
  }
 case 139:
 case 137:
  switch (FUNC_0(VAR_2)) {
  case 140:
  case 142:
  case 144:
  case 143:
   return 1;
  default:
   return 0;
  }
 case 130:
 case 128:
 case 131:
 case 129:
 case 138:
 case 136:
 default:
  return (VAR_2 == 140);
 }
}
