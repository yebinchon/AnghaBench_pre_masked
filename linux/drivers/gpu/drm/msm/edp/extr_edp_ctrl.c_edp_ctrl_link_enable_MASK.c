
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {int phy; int pixel_rate; int lane_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct edp_ctrl*,int ) ;
 int FUNC_1 (struct edp_ctrl*,int ) ;
 int FUNC_2 (struct edp_ctrl*) ;
 int FUNC_3 (struct edp_ctrl*,int) ;
 int FUNC_4 (struct edp_ctrl*,int ,int ) ;
 int FUNC_5 (struct edp_ctrl*,int ,int *,int *) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct edp_ctrl *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;

 if (VAR_2) {

  FUNC_1(VAR_1, VAR_0);

  FUNC_6(VAR_1->phy, 1, VAR_1->lane_cnt);

  FUNC_8(VAR_1->phy);


  FUNC_9();
  FUNC_7(VAR_1->phy);

  FUNC_2(VAR_1);
  FUNC_5(VAR_1, VAR_1->pixel_rate, &VAR_3, &VAR_4);
  FUNC_4(VAR_1, VAR_3, VAR_4);
  FUNC_3(VAR_1, 1);
 } else {
  FUNC_3(VAR_1, 0);

  FUNC_6(VAR_1->phy, 0, 0);
  FUNC_0(VAR_1, VAR_0);
 }
}
