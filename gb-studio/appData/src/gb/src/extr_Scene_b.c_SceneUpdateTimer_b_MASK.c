
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_3()
{

  if (!VAR_4 || !VAR_3)
  {
    return;
  }


  if (VAR_5 != 0 || VAR_0 != 0 || VAR_1)
  {
    return;
  }


  if (!FUNC_2())
  {
     return;
  }


  if (VAR_7 != 0)
  {
    if (VAR_9 == 0)
    {

      if (!FUNC_0(0))
      {
        return;
      }

      VAR_2 = VAR_2 & 0xF0;
      FUNC_1(&VAR_8);


      VAR_9 = VAR_7;
    }
    else
    {

      if ((VAR_6 & 0x0F) == 0x00)
      {
        --VAR_9;
      }
    }
  }
}
