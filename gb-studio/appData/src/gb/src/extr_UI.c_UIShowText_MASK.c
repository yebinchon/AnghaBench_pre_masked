
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UWORD ;
typedef int UBYTE ;
struct TYPE_3__ {size_t bank; size_t offset; } ;
typedef TYPE_1__ BANK_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char,int) ;
 int VAR_4 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,char*) ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;

void FUNC_9(UWORD VAR_18)
{
  BANK_PTR VAR_19;
  UWORD VAR_20, VAR_21;
  unsigned char VAR_22[6];
  UBYTE VAR_23, VAR_24, VAR_25;
  UBYTE VAR_26;

  FUNC_8(VAR_17, "");

  FUNC_2(VAR_0, &VAR_19, &VAR_8[VAR_18]);
  VAR_20 = ((UWORD)VAR_5[VAR_19.bank]) + VAR_19.offset;

  FUNC_1(VAR_19.bank);
  FUNC_7(VAR_17, VAR_20);
  VAR_4;

  for (VAR_23 = 1, VAR_25 = 0; VAR_23 < 81; VAR_23++)
  {

    if (VAR_17[VAR_23] == '$')
    {
      if(VAR_17[VAR_23 + 3] == '$') {
        VAR_21 = (10 * (VAR_17[VAR_23 + 1] - '0')) + (VAR_17[VAR_23 + 2] - '0');
      } else if(VAR_17[VAR_23 + 4] == '$') {
        VAR_21 = (100 * (VAR_17[VAR_23 + 1] - '0')) + (10 * (VAR_17[VAR_23 + 2] - '0')) + (VAR_17[VAR_23 + 3] - '0');
      } else {
        VAR_12[VAR_25] = VAR_17[VAR_23];
        ++VAR_25;
        continue;
      }

      VAR_26 = VAR_7[VAR_21];
      VAR_24 = 0;

      if (VAR_26 == 0)
      {
        VAR_12[VAR_25] = '0';
      }
      else
      {

        while (VAR_26 != 0)
        {
          VAR_22[VAR_24++] = '0' + (VAR_26 % 10);
          VAR_26 /= 10;
        }
        VAR_24--;
        while (VAR_24 != 255)
        {
          VAR_12[VAR_25] = VAR_22[VAR_24];
          VAR_25++;
          VAR_24--;
        }
        VAR_25--;
      }

      if(VAR_21 >= 100) {
        VAR_23 += 4;
      } else {
        VAR_23 += 3;
      }
    }
    else
    {
      VAR_12[VAR_25] = VAR_17[VAR_23];
    }
    ++VAR_25;
  }

  if (VAR_6)
  {
    VAR_13 = VAR_17[0];
    FUNC_4(0, 0, 8, VAR_13);
    FUNC_6(VAR_3, VAR_2);
    FUNC_5(VAR_3, VAR_2 - ((VAR_13 + 2) << 3), VAR_11);
  }
  else
  {
    VAR_13 = FUNC_0(VAR_17[0], 4);
    FUNC_3(VAR_13);
    FUNC_6(0, VAR_2);
    FUNC_5(0, VAR_2 - ((VAR_13 + 2) << 3), VAR_11);
  }
  VAR_10 = VAR_1;
  VAR_15 = 0;
  VAR_16 = 0;
  VAR_9 = 0;
  VAR_14 = 0;
}
