
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int pixel_clk; } ;
struct drm_device {struct ltdc_device* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct ltdc_device *VAR_1 = VAR_0->dev_private;

 FUNC_0("\n");
 FUNC_1(VAR_1->pixel_clk);
}
