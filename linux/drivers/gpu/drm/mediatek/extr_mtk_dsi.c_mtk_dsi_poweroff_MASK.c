
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {scalar_t__ refcount; int phy; int digital_clk; int engine_clk; scalar_t__ panel; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mtk_dsi*) ;
 int FUNC_5 (struct mtk_dsi*) ;
 int FUNC_6 (struct mtk_dsi*) ;
 int FUNC_7 (struct mtk_dsi*) ;
 int FUNC_8 (struct mtk_dsi*) ;
 int FUNC_9 (struct mtk_dsi*,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct mtk_dsi *VAR_1)
{
 if (FUNC_1(VAR_1->refcount == 0))
  return;

 if (--VAR_1->refcount != 0)
  return;
 FUNC_8(VAR_1);

 if (!FUNC_9(VAR_1, VAR_0, 500)) {
  if (VAR_1->panel) {
   if (FUNC_3(VAR_1->panel)) {
    FUNC_0("failed to unprepare the panel\n");
    return;
   }
  }
 }

 FUNC_7(VAR_1);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);

 FUNC_5(VAR_1);

 FUNC_2(VAR_1->engine_clk);
 FUNC_2(VAR_1->digital_clk);

 FUNC_10(VAR_1->phy);
}
