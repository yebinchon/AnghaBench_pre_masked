
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct img_ascii_lcd_ctx {int timer; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct img_ascii_lcd_ctx* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct img_ascii_lcd_ctx *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_1->dev, &VAR_0);
 FUNC_0(&VAR_2->timer);
 return 0;
}
