
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;

UBYTE FUNC_3(UBYTE VAR_1, UBYTE VAR_2)
{
  UBYTE VAR_3, VAR_4;
  VAR_3 = FUNC_2(FUNC_0((UBYTE *)VAR_0));
  VAR_4 = FUNC_2(FUNC_1((UBYTE *)VAR_0));
  if ((VAR_2 == VAR_4 || VAR_2 == VAR_4 - 1) &&
      (VAR_1 == VAR_3 || VAR_1 == VAR_3 + 1 || VAR_1 + 1 == VAR_3))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
