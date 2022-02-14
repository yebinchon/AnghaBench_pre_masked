
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int backlight_off_delay; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (struct gma_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct cdv_intel_dp *VAR_4 = VAR_2->dev_priv;
 u32 VAR_5;

 FUNC_0("\n");
 FUNC_3(VAR_3);
 FUNC_4(10);
 VAR_5 = FUNC_1(VAR_1);

 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_1, VAR_5);
 FUNC_4(VAR_4->backlight_off_delay);
}
