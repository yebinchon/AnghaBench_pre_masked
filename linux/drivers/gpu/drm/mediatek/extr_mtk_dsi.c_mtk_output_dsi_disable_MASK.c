
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {int enabled; scalar_t__ panel; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mtk_dsi*) ;

__attribute__((used)) static void FUNC_3(struct mtk_dsi *VAR_0)
{
 if (!VAR_0->enabled)
  return;

 if (VAR_0->panel) {
  if (FUNC_1(VAR_0->panel)) {
   FUNC_0("failed to disable the panel\n");
   return;
  }
 }

 FUNC_2(VAR_0);

 VAR_0->enabled = 0;
}
