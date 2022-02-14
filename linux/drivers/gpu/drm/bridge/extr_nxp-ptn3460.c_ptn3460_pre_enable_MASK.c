
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn3460_bridge {int enabled; int panel; int gpio_rst_n; int gpio_pd_n; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*,...) ;
 struct ptn3460_bridge* FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ptn3460_bridge*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0)
{
 struct ptn3460_bridge *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if (VAR_1->enabled)
  return;

 FUNC_3(VAR_1->gpio_pd_n, 1);

 FUNC_3(VAR_1->gpio_rst_n, 0);
 FUNC_6(10, 20);
 FUNC_3(VAR_1->gpio_rst_n, 1);

 if (FUNC_2(VAR_1->panel)) {
  FUNC_0("failed to prepare panel\n");
  return;
 }






 FUNC_4(90);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  FUNC_0("Select EDID failed ret=%d\n", VAR_2);

 VAR_1->enabled = 1;
}
