
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seiko_panel {int base; } ;
struct platform_device {int dev; } ;


 struct seiko_panel* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct seiko_panel *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->base);
}
