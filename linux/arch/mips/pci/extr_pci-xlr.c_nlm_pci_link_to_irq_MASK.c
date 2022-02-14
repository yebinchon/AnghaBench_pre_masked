
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_6)
{
 switch (VAR_6) {
 case 0:
  return VAR_0;
 case 1:
  return VAR_1;
 case 2:
  if (FUNC_1())
   return VAR_4;
  else
   return VAR_2;
 case 3:
  if (FUNC_1())
   return VAR_5;
  else
   return VAR_3;
 }
 FUNC_0(1, "Unexpected link %d\n", VAR_6);
 return 0;
}
