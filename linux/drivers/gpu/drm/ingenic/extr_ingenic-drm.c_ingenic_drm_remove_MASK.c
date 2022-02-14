
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ingenic_drm {int drm; scalar_t__ pix_clk; scalar_t__ lcd_clk; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ingenic_drm* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ingenic_drm *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->lcd_clk)
  FUNC_0(VAR_1->lcd_clk);
 FUNC_0(VAR_1->pix_clk);

 FUNC_2(&VAR_1->drm);
 FUNC_1(&VAR_1->drm);

 return 0;
}
