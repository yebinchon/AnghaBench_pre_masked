
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_context {int clkdiv; int dev; int lcd_clk; scalar_t__ i80_if; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;
struct drm_display_mode {int clock; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_crtc *VAR_1,
  struct drm_crtc_state *VAR_2)
{
 struct drm_display_mode *VAR_3 = &VAR_2->adjusted_mode;
 struct fimd_context *VAR_4 = VAR_1->ctx;
 unsigned long VAR_5, VAR_6;
 u32 VAR_7;

 if (VAR_3->clock == 0) {
  FUNC_1(VAR_4->dev, "Mode has zero clock value.\n");
  return -VAR_0;
 }

 VAR_5 = VAR_3->clock * 1000;

 if (VAR_4->i80_if) {




  VAR_5 *= 2;
 }

 VAR_6 = FUNC_2(VAR_4->lcd_clk);
 if (2 * VAR_6 < VAR_5) {
  FUNC_1(VAR_4->dev,
         "sclk_fimd clock too low(%lu) for requested pixel clock(%lu)\n",
         VAR_6, VAR_5);
  return -VAR_0;
 }


 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (VAR_7 >= 0x200) {
  FUNC_1(VAR_4->dev, "requested pixel clock(%lu) too low\n",
         VAR_5);
  return -VAR_0;
 }

 VAR_4->clkdiv = (VAR_7 < 0x100) ? VAR_7 : 0xff;

 return 0;
}
