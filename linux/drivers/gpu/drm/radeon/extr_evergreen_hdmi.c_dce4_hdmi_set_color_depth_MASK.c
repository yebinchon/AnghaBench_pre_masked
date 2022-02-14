
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int name; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;

void FUNC_5(struct drm_encoder *VAR_5, u32 VAR_6, int VAR_7)
{
 struct drm_device *VAR_8 = VAR_5->dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 struct drm_connector *VAR_10 = FUNC_4(VAR_5);
 uint32_t VAR_11;

 VAR_11 = FUNC_2(VAR_2 + VAR_6);
 VAR_11 &= ~VAR_4;
 VAR_11 &= ~VAR_3;

 switch (VAR_7) {
  case 0:
  case 6:
  case 8:
  case 16:
  default:
   FUNC_0("%s: Disabling hdmi deep color for %d bpc.\n",
      VAR_10->name, VAR_7);
   break;
  case 10:
   VAR_11 |= VAR_4;
   VAR_11 |= FUNC_1(VAR_0);
   FUNC_0("%s: Enabling hdmi deep color 30 for 10 bpc.\n",
      VAR_10->name);
   break;
  case 12:
   VAR_11 |= VAR_4;
   VAR_11 |= FUNC_1(VAR_1);
   FUNC_0("%s: Enabling hdmi deep color 36 for 12 bpc.\n",
      VAR_10->name);
   break;
 }

 FUNC_3(VAR_2 + VAR_6, VAR_11);
}
