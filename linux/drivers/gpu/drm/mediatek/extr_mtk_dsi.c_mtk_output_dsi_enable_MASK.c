
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {int enabled; scalar_t__ panel; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mtk_dsi*,int) ;
 int FUNC_3 (struct mtk_dsi*) ;
 int FUNC_4 (struct mtk_dsi*) ;
 int FUNC_5 (struct mtk_dsi*) ;
 int FUNC_6 (struct mtk_dsi*) ;
 int FUNC_7 (struct mtk_dsi*) ;

__attribute__((used)) static void FUNC_8(struct mtk_dsi *VAR_0)
{
 int VAR_1;

 if (VAR_0->enabled)
  return;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0("failed to power on dsi\n");
  return;
 }

 FUNC_5(VAR_0);
 FUNC_2(VAR_0, 1);

 FUNC_6(VAR_0);

 if (VAR_0->panel) {
  if (FUNC_1(VAR_0->panel)) {
   FUNC_0("failed to enable the panel\n");
   goto err_dsi_power_off;
  }
 }

 VAR_0->enabled = 1;

 return;
err_dsi_power_off:
 FUNC_7(VAR_0);
 FUNC_3(VAR_0);
}
