
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_ctrl {int phy; int aux; int panel_en_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (struct edp_ctrl*,int ) ;
 int FUNC_1 (struct edp_ctrl*,int ) ;
 int FUNC_2 (struct edp_ctrl*) ;
 int FUNC_3 (struct edp_ctrl*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct edp_ctrl *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_3(VAR_1);
  FUNC_1(VAR_1, VAR_0);
  FUNC_6(VAR_1->phy, 1);
  FUNC_5(VAR_1->aux, 1);
  FUNC_4(VAR_1->panel_en_gpio, 1);
 } else {
  FUNC_4(VAR_1->panel_en_gpio, 0);
  FUNC_5(VAR_1->aux, 0);
  FUNC_6(VAR_1->phy, 0);
  FUNC_0(VAR_1, VAR_0);
  FUNC_2(VAR_1);
 }
}
