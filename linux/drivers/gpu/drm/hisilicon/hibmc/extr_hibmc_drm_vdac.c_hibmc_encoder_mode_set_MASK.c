
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct hibmc_drm_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_1,
       struct drm_display_mode *VAR_2,
       struct drm_display_mode *VAR_3)
{
 u32 VAR_4;
 struct drm_device *VAR_5 = VAR_1->dev;
 struct hibmc_drm_private *VAR_6 = VAR_5->dev_private;

 VAR_4 = FUNC_4(VAR_6->mmio + VAR_0);
 VAR_4 |= FUNC_1(1);
 VAR_4 |= FUNC_2(1);
 VAR_4 |= FUNC_0(1);
 VAR_4 |= FUNC_3(1);
 FUNC_5(VAR_4, VAR_6->mmio + VAR_0);
}
