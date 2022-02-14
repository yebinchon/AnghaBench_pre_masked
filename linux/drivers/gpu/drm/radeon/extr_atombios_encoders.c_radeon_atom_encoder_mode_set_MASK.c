
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int active_device; int encoder_id; int devices; int pixel_clock; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,int ) ;
 int FUNC_6 (struct drm_encoder*,int ) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*,int ) ;
 int FUNC_9 (struct drm_encoder*,int) ;
 int FUNC_10 (struct drm_encoder*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (struct drm_encoder*,struct drm_display_mode*) ;
 struct drm_connector* FUNC_12 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_14(struct drm_encoder *VAR_8,
        struct drm_display_mode *VAR_9,
        struct drm_display_mode *VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_13(VAR_8);
 struct drm_connector *VAR_14 = FUNC_12(VAR_8);
 int VAR_15;

 VAR_13->pixel_clock = VAR_10->clock;


 FUNC_10(VAR_8, VAR_5);

 if (FUNC_0(VAR_12) && !FUNC_1(VAR_12)) {
  if (VAR_13->active_device & (VAR_0 | VAR_1))
   FUNC_9(VAR_8, 1);
  else
   FUNC_9(VAR_8, 0);
 }

 switch (VAR_13->encoder_id) {
 case 132:
 case 135:
 case 134:
 case 133:
  FUNC_5(VAR_8, VAR_6);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 136:

  break;
 case 141:
 case 140:
 case 137:
  FUNC_6(VAR_8, VAR_3);
  break;
 case 143:
 case 139:
 case 142:
 case 138:
  FUNC_4(VAR_8, VAR_3);
  if (VAR_13->devices & (VAR_1 | VAR_0)) {
   if (VAR_13->active_device & (VAR_1 | VAR_0))
    FUNC_8(VAR_8, VAR_3);
   else
    FUNC_8(VAR_8, VAR_2);
  }
  break;
 }

 FUNC_3(VAR_8, VAR_10);

 VAR_15 = FUNC_7(VAR_8);
 if (VAR_14 && (VAR_7 != 0) &&
     ((VAR_15 == VAR_4) ||
      FUNC_2(VAR_15)))
  FUNC_11(VAR_8, VAR_10);
}
