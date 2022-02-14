
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paace {int addr_bitfields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 struct paace* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(int VAR_5)
{
 struct paace *VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6) {
  FUNC_3("Invalid primary paace entry\n");
  return -VAR_1;
 }

 if (!FUNC_0(VAR_6->addr_bitfields, VAR_4)) {
  FUNC_3("liodn %d not configured\n", VAR_5);
  return -VAR_0;
 }


 FUNC_1();

 FUNC_4(VAR_6->addr_bitfields, VAR_2, VAR_3);
 FUNC_1();

 return 0;
}
