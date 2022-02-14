
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ls037v7dw01_panel {int panel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ls037v7dw01_panel* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ls037v7dw01_panel *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->panel);
 FUNC_0(&VAR_1->panel);
 FUNC_2(&VAR_1->panel);

 return 0;
}
