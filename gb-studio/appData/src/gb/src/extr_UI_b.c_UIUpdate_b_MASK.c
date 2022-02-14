
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_1()
{
  UBYTE VAR_8;

  if (VAR_7 == 5 && ((VAR_2 & 0x7) != 0))
  {
    return;
  }
  else if (VAR_7 == 4 && ((VAR_2 & 0x3) != 0))
  {
    return;
  }
  else if (VAR_7 == 3 && ((VAR_2 & 0x1) != 0))
  {
    return;
  }

  if (VAR_7 == 1)
  {
    VAR_8 = 2;
  }
  else
  {
    VAR_8 = 1;
  }

  if (VAR_5 != VAR_3)
  {
    if (VAR_5 < VAR_3)
    {
      VAR_5 += VAR_8;
    }
    else
    {
      VAR_5 -= VAR_8;
    }
  }

  if (VAR_6 != VAR_4)
  {
    if (VAR_6 < VAR_4)
    {
      VAR_6 += VAR_8;
    }
    else
    {
      VAR_6 -= VAR_8;
    }
  }
  else
  {
    FUNC_0();
  }

  VAR_0 = VAR_5 + 7;
  VAR_1 = VAR_6;
}
