
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef size_t UBYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,size_t,int,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int,int,int,size_t*) ;
 size_t FUNC_2 (int*) ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

void FUNC_3()
{
  UBYTE VAR_18;
  UBYTE VAR_19, VAR_20, VAR_21;
  UBYTE VAR_22 = FUNC_2(VAR_11);
  UBYTE VAR_23;
  UWORD VAR_24;

  if (VAR_14 > 0)
  {
    VAR_14--;
    return;
  }

  if (VAR_8 < VAR_22)
  {
    VAR_17 = VAR_9;
    VAR_10 = VAR_0;

    if (VAR_8 == 0)
    {
      VAR_15 = 0;
      VAR_16 = 0;
    }

    VAR_18 = VAR_11[VAR_8] - 32;


    VAR_24 = ((UWORD)VAR_6[VAR_1]) + VAR_2;


    VAR_20 = 18 - VAR_15;
    VAR_21 = 0;
    for (VAR_19 = VAR_8; VAR_19 != VAR_22; VAR_19++)
    {
      if (VAR_11[VAR_19] == ' ' || VAR_11[VAR_19] == '\n' || VAR_11[VAR_19] == '\0')
      {
        break;
      }
      VAR_21++;
    }
    if (VAR_21 > VAR_20 && VAR_21 < 18)
    {
      VAR_15 = 0;
      VAR_16++;
    }

    if (VAR_11[VAR_8] != '\b' && VAR_11[VAR_8] != '\n')
    {
      VAR_19 = VAR_13 + VAR_5 * 4;
      FUNC_0(VAR_1, VAR_3 + VAR_19, 1, VAR_24 + ((UWORD)VAR_18 * 16));
      VAR_23 = VAR_3 + VAR_19;
      FUNC_1(VAR_15 + 1 + VAR_5 * 2 + VAR_7 + (VAR_16 >= VAR_12 ? 9 : 0), (VAR_16 % VAR_12) + 1, 1, 1, &VAR_23);
      VAR_13++;
    }

    if (VAR_11[VAR_8] == '\b')
    {
      VAR_15--;
      VAR_14 = 10;
    }

    VAR_8++;
    VAR_15++;
    if (VAR_11[VAR_8] == '\n')
    {
      VAR_15 = 0;
      VAR_16++;
      VAR_8++;
    }
    else if (VAR_15 > 17)
    {
      VAR_15 = 0;
      VAR_16++;
    }

    if (VAR_9 == 0)
    {
      FUNC_3();
    }
  }
  else
  {
    VAR_10 = VAR_4;
  }
}
