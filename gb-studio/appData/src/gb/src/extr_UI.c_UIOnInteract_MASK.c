
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_5()
{
  if (FUNC_0(VAR_0))
  {
    if (VAR_15 && VAR_14 != 0)
    {
      if (VAR_8)
      {
        if (VAR_7 && VAR_10 + 1 == VAR_12)
        {
          VAR_13[VAR_9] = 0;
        }
        else
        {
          VAR_13[VAR_9] = VAR_10 + 1;
        }
        FUNC_3();
      }
      else
      {
        FUNC_3();
      }
    }
  }
  else if (VAR_8)
  {
    if (FUNC_0(VAR_5))
    {
      VAR_10 = FUNC_1(VAR_10 - 1, 0);
      FUNC_4();
    }
    else if (FUNC_0(VAR_2))
    {
      VAR_10 = FUNC_2(VAR_10 + 1, VAR_12 - 1);
      FUNC_4();
    }
    else if (FUNC_0(VAR_3))
    {
      if(VAR_11 == 0) {
        VAR_10 = FUNC_1(VAR_10 - 4, 0);
      } else {
        VAR_10 = 0;
      }
      FUNC_4();
    }
    else if (FUNC_0(VAR_4))
    {
      if(VAR_11 == 0) {
        VAR_10 = FUNC_2(VAR_10 + 4, VAR_12 - 1);
      } else {
        VAR_10 = VAR_12 - 1;
      }
      FUNC_4();
    }
    else if (VAR_6 && FUNC_0(VAR_1))
    {
      VAR_13[VAR_9] = 0;
      FUNC_3();
    }
  }
}
