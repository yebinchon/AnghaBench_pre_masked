
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int encoder_id; int active_device; int devices; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int,int ,int ) ;




 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,int ) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 int FUNC_8 (struct drm_encoder*,int) ;
 int FUNC_9 (struct drm_encoder*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_12(struct drm_encoder *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_encoder *VAR_8 = FUNC_11(VAR_4);
 int VAR_9 = FUNC_6(VAR_4);

 FUNC_2("encoder dpms %d to mode %d, devices %08x, active_devices %08x\n",
    VAR_8->encoder_id, VAR_5, VAR_8->devices,
    VAR_8->active_device);

 if ((VAR_3 != 0) &&
     ((VAR_9 == VAR_2) ||
      FUNC_3(VAR_9)))
  FUNC_10(VAR_4, VAR_5);

 switch (VAR_8->encoder_id) {
 case 132:
 case 135:
 case 134:
 case 133:
 case 140:
 case 141:
 case 142:
 case 138:
  FUNC_7(VAR_4, VAR_5);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 136:
  FUNC_8(VAR_4, VAR_5);
  break;
 case 137:
  if (FUNC_1(VAR_7)) {
   switch (VAR_5) {
   case 146:
    FUNC_5(VAR_4, VAR_1);
    break;
   case 145:
   case 144:
   case 147:
    FUNC_5(VAR_4, VAR_0);
    break;
   }
  } else if (FUNC_0(VAR_7))
   FUNC_8(VAR_4, VAR_5);
  else
   FUNC_7(VAR_4, VAR_5);
  break;
 case 143:
 case 139:
  if (FUNC_1(VAR_7)) {
   switch (VAR_5) {
   case 146:
    FUNC_4(VAR_4, VAR_1);
    break;
   case 145:
   case 144:
   case 147:
    FUNC_4(VAR_4, VAR_0);
    break;
   }
  } else
   FUNC_7(VAR_4, VAR_5);
  break;
 default:
  return;
 }

 FUNC_9(VAR_4, (VAR_5 == 146) ? 1 : 0);

}
