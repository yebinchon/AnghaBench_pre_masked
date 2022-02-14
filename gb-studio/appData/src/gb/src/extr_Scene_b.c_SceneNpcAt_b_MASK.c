
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;
typedef int ACTOR ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;

UBYTE FUNC_4(UBYTE VAR_2, UBYTE VAR_3, UBYTE VAR_4)
{
  UBYTE VAR_5, VAR_6, VAR_7, VAR_8;
  UBYTE *VAR_9;

  VAR_9 = VAR_0;
  VAR_8 = sizeof(ACTOR);

  for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++)
  {
    if (VAR_5 == VAR_2 || !FUNC_0(VAR_9))
    {
      VAR_9 += VAR_8;
      continue;
    }
    VAR_6 = FUNC_3(FUNC_1(VAR_9));
    VAR_7 = FUNC_3(FUNC_2(VAR_9));
    if (VAR_7 == 0)
    {


      VAR_7 = 32;
    }
    if ((VAR_4 == VAR_7 || VAR_4 == VAR_7 - 1) &&
        (VAR_3 == VAR_6 || VAR_3 == VAR_6 + 1 || VAR_3 + 1 == VAR_6))
    {
      return VAR_5;
    }
    VAR_9 += VAR_8;
  }
  return VAR_1;
}
