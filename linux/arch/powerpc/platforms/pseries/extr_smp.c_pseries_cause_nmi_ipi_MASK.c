
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_2) {
  VAR_4 = VAR_0;
 } else {
  if (VAR_3 < 0) {
   FUNC_0(1, "incorrect cpu parameter %d", VAR_3);
   return 0;
  }

  VAR_4 = FUNC_1(VAR_3);
 }

 if (FUNC_2(VAR_4) == VAR_1)
  return 1;

 return 0;
}
