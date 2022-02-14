
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acx565akm_panel {int enabled; int reset_gpio; } ;


 int FUNC_0 (struct acx565akm_panel*,int ) ;
 int FUNC_1 (struct acx565akm_panel*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct acx565akm_panel *VAR_0)
{
 if (!VAR_0->enabled)
  return;

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 1);
 VAR_0->enabled = 0;






 FUNC_3(50);

 FUNC_2(VAR_0->reset_gpio, 0);


 FUNC_3(100);
}
