
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int pixel_clk; } ;
struct drm_device {struct ltdc_device* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drm_device *VAR_0)
{
 struct ltdc_device *VAR_1 = VAR_0->dev_private;
 int VAR_2;

 FUNC_0("\n");

 VAR_2 = FUNC_2(VAR_1->pixel_clk);
 if (VAR_2) {
  FUNC_1("failed to enable pixel clock (%d)\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
