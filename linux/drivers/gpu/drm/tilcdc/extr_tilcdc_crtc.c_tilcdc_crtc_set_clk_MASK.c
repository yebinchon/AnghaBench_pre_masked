
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tilcdc_drm_private {int rev; int clk; } ;
struct tilcdc_crtc {unsigned long lcd_fck_rate; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc {TYPE_1__ mode; struct drm_device* dev; } ;


 int FUNC_0 (char*,unsigned long,int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (struct drm_device*,int ,int) ;
 int FUNC_9 (struct drm_device*,int ,int) ;
 struct tilcdc_crtc* FUNC_10 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct tilcdc_drm_private *VAR_8 = VAR_7->dev_private;
 struct tilcdc_crtc *VAR_9 = FUNC_10(VAR_6);
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_13 = 2;


 VAR_12 = VAR_6->mode.clock * 1000;

 VAR_14 = FUNC_4(VAR_8->clk, VAR_12 * VAR_13);
 VAR_10 = FUNC_3(VAR_8->clk);
 if (VAR_14 < 0 || FUNC_7(VAR_12, VAR_10) > 5) {







  if (!VAR_10) {

   FUNC_5(VAR_7->dev,
    "failed to set the pixel clock - unable to read current lcdc clock rate\n");
   return;
  }

  VAR_13 = FUNC_1(VAR_10, VAR_12);
  VAR_11 = VAR_13 * VAR_12;

  if (FUNC_7(VAR_10, VAR_11) > 5) {
   FUNC_6(VAR_7->dev,
     "effective pixel clock rate (%luHz) differs from the calculated rate (%luHz)\n",
     VAR_10, VAR_11);
  }
 }

 VAR_9->lcd_fck_rate = VAR_10;

 FUNC_0("lcd_clk=%u, mode clock=%d, div=%u",
     VAR_9->lcd_fck_rate, VAR_6->mode.clock, VAR_13);


 FUNC_9(VAR_7, VAR_1, FUNC_2(VAR_13) |
       VAR_2);

 if (VAR_8->rev == 2)
  FUNC_8(VAR_7, VAR_0,
    VAR_4 | VAR_5 |
    VAR_3);
}
