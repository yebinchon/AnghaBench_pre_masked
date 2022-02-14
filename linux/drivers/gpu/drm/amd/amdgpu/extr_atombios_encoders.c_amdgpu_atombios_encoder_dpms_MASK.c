
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct amdgpu_encoder {int encoder_id; int active_device; int devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ,int ) ;
 int FUNC_1 (struct drm_encoder*,int ) ;
 int FUNC_2 (struct drm_encoder*,int ) ;
 int FUNC_3 (struct drm_encoder*,int ) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

void
FUNC_5(struct drm_encoder *VAR_2, int VAR_3)
{
 struct amdgpu_encoder *VAR_4 = FUNC_4(VAR_2);

 FUNC_0("encoder dpms %d to mode %d, devices %08x, active_devices %08x\n",
    VAR_4->encoder_id, VAR_3, VAR_4->devices,
    VAR_4->active_device);
 switch (VAR_4->encoder_id) {
 case 131:
 case 130:
 case 129:
 case 128:
  switch (VAR_3) {
  case 136:
   FUNC_2(VAR_2, VAR_1);
   break;
  case 135:
  case 134:
  case 137:
   FUNC_2(VAR_2, VAR_0);
   break;
  }
  break;
 case 132:
  switch (VAR_3) {
  case 136:
   FUNC_3(VAR_2, VAR_1);
   break;
  case 135:
  case 134:
  case 137:
   FUNC_3(VAR_2, VAR_0);
   break;
  }
  break;
 case 133:
  switch (VAR_3) {
  case 136:
   FUNC_1(VAR_2, VAR_1);
   break;
  case 135:
  case 134:
  case 137:
   FUNC_1(VAR_2, VAR_0);
   break;
  }
  break;
 default:
  return;
 }
}
