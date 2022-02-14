
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;
typedef int ACTOR ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_11()
{
  UBYTE VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  UBYTE *VAR_14;

  if (VAR_1)
  {
    VAR_14 = VAR_5;
    VAR_13 = sizeof(ACTOR);

    for (VAR_9 = 0; VAR_9 != VAR_6; ++VAR_9)
    {
      VAR_10 = FUNC_7(VAR_9) + VAR_0;
      VAR_11 = FUNC_8(FUNC_4(VAR_14) + FUNC_2(VAR_14) + FUNC_3(VAR_14));
      if (FUNC_1(VAR_14))
      {
        FUNC_10(VAR_10 + 1, VAR_11);
        FUNC_10(VAR_10, VAR_11 + 2);
      }
      else
      {
        FUNC_10(VAR_10, VAR_11);
        FUNC_10(VAR_10 + 1, VAR_11 + 2);
      }

      VAR_14 += VAR_13;
    }
  }

  VAR_14 = VAR_5;
  VAR_13 = sizeof(ACTOR);

  for (VAR_9 = 0; VAR_9 != VAR_6; ++VAR_9)
  {
    VAR_10 = FUNC_7(VAR_9) + VAR_0;
    VAR_11 = FUNC_5(VAR_14) - VAR_3;
    VAR_12 = FUNC_6(VAR_14) - VAR_4;

    if (FUNC_0(VAR_14) && (VAR_8 == VAR_2 || (VAR_12 < VAR_8 + 16 || VAR_11 < VAR_7 + 8)))
    {
      FUNC_9(VAR_10, VAR_11, VAR_12);
      FUNC_9(VAR_10 + 1, VAR_11 + 8, VAR_12);
    }
    else
    {
      FUNC_9(VAR_10, 0, 0);
      FUNC_9(VAR_10 + 1, 0, 0);
    }
    VAR_14 += VAR_13;
  }
}
