
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_ctrl {int phy; int power_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct edp_ctrl*,int) ;
 int FUNC_1 (struct edp_ctrl*,int) ;
 int FUNC_2 (struct edp_ctrl*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct edp_ctrl *VAR_2)
{
 int VAR_3;


 if (!VAR_2->power_on)
  return -VAR_1;

train_start:
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == VAR_0) {

  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2, 0);
  FUNC_3(VAR_2->phy, 0);


  FUNC_5();
  FUNC_4(500, 1000);

  FUNC_3(VAR_2->phy, 1);
  FUNC_1(VAR_2, 1);
  FUNC_0(VAR_2, 1);
  goto train_start;
 }

 return VAR_3;
}
