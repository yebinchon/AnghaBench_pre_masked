
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct drm_encoder *VAR_2, u32 VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;

 if (VAR_4)
  FUNC_1(VAR_0 + VAR_3, VAR_1);
 else
  FUNC_0(VAR_0 + VAR_3, ~VAR_1);
}
