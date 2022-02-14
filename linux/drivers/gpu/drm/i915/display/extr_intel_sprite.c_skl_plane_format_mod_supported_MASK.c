
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_plane {int has_ccs; } ;
struct drm_plane {int dummy; } ;
 int FUNC_0 (int) ;
 struct intel_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static bool FUNC_2(struct drm_plane *VAR_0,
        u32 VAR_1, u64 VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 154:
 case 132:
 case 131:
 case 129:
  break;
 case 130:
 case 128:
  if (!VAR_3->has_ccs)
   return 0;
  break;
 default:
  return 0;
 }

 switch (VAR_1) {
 case 141:
 case 144:
 case 156:
 case 158:
  if (FUNC_0(VAR_2))
   return 1;

 case 149:
 case 142:
 case 145:
 case 134:
 case 133:
 case 148:
 case 147:
 case 153:
 case 152:
 case 151:
 case 150:
 case 138:
  if (VAR_2 == 129)
   return 1;

 case 155:
 case 146:
 case 159:
 case 143:
 case 157:
 case 137:
 case 136:
 case 135:
 case 140:
 case 139:
  if (VAR_2 == 154 ||
      VAR_2 == 132 ||
      VAR_2 == 131)
   return 1;

 default:
  return 0;
 }
}
