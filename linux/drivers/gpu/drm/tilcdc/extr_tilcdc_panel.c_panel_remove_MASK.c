
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_module {int dummy; } ;
struct platform_device {int dev; } ;
struct panel_module {int info; int timings; struct backlight_device* backlight; } ;
struct backlight_device {int dev; } ;


 struct tilcdc_module* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tilcdc_module*) ;
 struct panel_module* FUNC_5 (struct tilcdc_module*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tilcdc_module *VAR_1 = FUNC_0(&VAR_0->dev);
 struct panel_module *VAR_2 = FUNC_5(VAR_1);
 struct backlight_device *VAR_3 = VAR_2->backlight;

 if (VAR_3)
  FUNC_3(&VAR_3->dev);

 FUNC_1(VAR_2->timings);

 FUNC_4(VAR_1);
 FUNC_2(VAR_2->info);

 return 0;
}
