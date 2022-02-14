
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

bool FUNC_3(u8 VAR_0)
{
 bool VAR_1 = FUNC_1();







 if (VAR_1 && !FUNC_2(VAR_0)) {
  FUNC_0("Skip bridge registration for slave DSI->id: %d\n", VAR_0);
  return 0;
 }
 return 1;
}
