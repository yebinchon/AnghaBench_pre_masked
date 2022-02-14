
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int encoder_id; } ;
struct drm_encoder {int dummy; } ;
 struct radeon_encoder* FUNC_0 (struct drm_encoder*) ;

bool FUNC_1(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_0(VAR_0);
 switch (VAR_1->encoder_id) {
 case 134:
 case 132:
 case 135:
 case 133:
 case 138:
 case 137:
 case 139:
 case 131:
 case 136:
 case 130:
 case 129:
 case 128:
  return 1;
 default:
  return 0;
 }
}
