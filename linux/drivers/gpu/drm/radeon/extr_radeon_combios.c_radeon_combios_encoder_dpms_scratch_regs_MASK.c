
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int devices; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void
FUNC_3(struct drm_encoder *VAR_9, bool VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_2(VAR_9);
 uint32_t VAR_14 = FUNC_0(VAR_4);

 if (VAR_13->devices & (VAR_3)) {
  if (VAR_10)
   VAR_14 |= VAR_8;
  else
   VAR_14 &= ~VAR_8;
 }
 if (VAR_13->devices & (VAR_0)) {
  if (VAR_10)
   VAR_14 |= VAR_5;
  else
   VAR_14 &= ~VAR_5;
 }
 if (VAR_13->devices & (VAR_2)) {
  if (VAR_10)
   VAR_14 |= VAR_7;
  else
   VAR_14 &= ~VAR_7;
 }
 if (VAR_13->devices & (VAR_1)) {
  if (VAR_10)
   VAR_14 |= VAR_6;
  else
   VAR_14 &= ~VAR_6;
 }
 FUNC_1(VAR_4, VAR_14);
}
