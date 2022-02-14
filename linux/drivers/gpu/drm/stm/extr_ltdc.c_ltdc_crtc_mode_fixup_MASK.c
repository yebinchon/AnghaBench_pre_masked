
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int pixel_clk; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {int dev; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 struct ltdc_device* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct drm_crtc *VAR_0,
     const struct drm_display_mode *VAR_1,
     struct drm_display_mode *VAR_2)
{
 struct ltdc_device *VAR_3 = FUNC_4(VAR_0);
 struct drm_device *VAR_4 = VAR_0->dev;
 int VAR_5 = VAR_1->clock * 1000;
 bool VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4->dev);

 if (VAR_6)
  FUNC_7(VAR_4->dev);

 if (FUNC_3(VAR_3->pixel_clk, VAR_5) < 0) {
  FUNC_1("Cannot set rate (%dHz) for pixel clk\n", VAR_5);
  return 0;
 }

 VAR_2->clock = FUNC_2(VAR_3->pixel_clk) / 1000;

 if (VAR_6) {
  VAR_7 = FUNC_6(VAR_4->dev);
  if (VAR_7) {
   FUNC_1("Failed to fixup mode, cannot get sync\n");
   return 0;
  }
 }

 FUNC_0("requested clock %dkHz, adjusted clock %dkHz\n",
    VAR_1->clock, VAR_2->clock);

 return 1;
}
