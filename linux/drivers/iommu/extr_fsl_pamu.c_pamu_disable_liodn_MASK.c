
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paace {int addr_bitfields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct paace* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(int VAR_3)
{
 struct paace *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  FUNC_2("Invalid primary paace entry\n");
  return -VAR_0;
 }

 FUNC_3(VAR_4->addr_bitfields, VAR_1, VAR_2);
 FUNC_0();

 return 0;
}
