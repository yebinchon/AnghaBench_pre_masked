
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int,char*,int) ;

int FUNC_4(int VAR_0)
{
 FUNC_2("0000", 4, 1);
 if (FUNC_3(VAR_0, "0000", 4) < 0)
  return FUNC_1(FUNC_0("flush packet write failed"));
 return 0;
}
