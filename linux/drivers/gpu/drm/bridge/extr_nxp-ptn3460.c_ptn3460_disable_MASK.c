
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn3460_bridge {int enabled; int gpio_pd_n; int gpio_rst_n; int panel; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 struct ptn3460_bridge* FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0)
{
 struct ptn3460_bridge *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->enabled)
  return;

 VAR_1->enabled = 0;

 if (FUNC_2(VAR_1->panel)) {
  FUNC_0("failed to disable panel\n");
  return;
 }

 FUNC_3(VAR_1->gpio_rst_n, 1);
 FUNC_3(VAR_1->gpio_pd_n, 0);
}
