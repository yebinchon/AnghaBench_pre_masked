
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {scalar_t__ i80_mode; struct decon_context* ctx; } ;
struct drm_display_mode {int dummy; } ;
struct decon_context {int dev; scalar_t__ irq; scalar_t__ irq_vsync; scalar_t__ irq_lcd_sys; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct exynos_drm_crtc *VAR_2,
  const struct drm_display_mode *VAR_3)
{
 struct decon_context *VAR_4 = VAR_2->ctx;

 VAR_4->irq = VAR_2->i80_mode ? VAR_4->irq_lcd_sys : VAR_4->irq_vsync;

 if (VAR_4->irq)
  return VAR_1;

 FUNC_0(VAR_4->dev, "Sink requires %s mode, but appropriate interrupt is not provided.\n",
   VAR_2->i80_mode ? "command" : "video");

 return VAR_0;
}
