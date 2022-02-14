
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pport; int (* f_xgxs_reset ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_devdata*,int,int,int) ;
 int FUNC_2 (struct qib_devdata*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void FUNC_5(struct qib_devdata *VAR_1)
{
 int VAR_2 = FUNC_0(0) | VAR_0;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 0x80);
 if (VAR_3 < 0)
  FUNC_2(VAR_1, "RCLKRLS failed to clear D7\n");
 else {
  FUNC_4(1);
  FUNC_1(VAR_1, VAR_2, 0x80, 0x80);
 }

 FUNC_4(1);
 VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 0x80);
 if (VAR_3 < 0)
  FUNC_2(VAR_1, "RCLKRLS failed to clear D7\n");
 else {
  FUNC_4(1);
  FUNC_1(VAR_1, VAR_2, 0x80, 0x80);
 }

 VAR_1->f_xgxs_reset(VAR_1->pport);
}
