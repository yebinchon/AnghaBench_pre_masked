
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static u64 FUNC_6(unsigned int VAR_0)
{
 VAR_0 = FUNC_1(VAR_0);

 switch (VAR_0) {
 case 0:
  return FUNC_2();
 case 1:
  return FUNC_3();
 case 2:
  return FUNC_4();
 case 3:
  return FUNC_5();
 default:
  FUNC_0(1, "Invalid performance counter number (%d)\n", VAR_0);
  return 0;
 }
}
