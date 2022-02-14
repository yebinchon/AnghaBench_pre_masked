
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UWORD ;
typedef int UBYTE ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 size_t VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;

void FUNC_2()
{
  UWORD VAR_20;

  VAR_1;

  VAR_4 = (UBYTE *)VAR_5;
  if (*VAR_4 == VAR_8)
  {

    VAR_4++;
    VAR_14 = *VAR_4;
    VAR_12 = VAR_14 + 1;


    VAR_4++;
    VAR_10.x = 0;
    VAR_10.x = *VAR_4;
    VAR_4++;
    VAR_10.y = 0;
    VAR_10.y = *VAR_4;
    VAR_4++;
    VAR_9.x = *VAR_4 == 2 ? -1 : *VAR_4 == 4 ? 1 : 0;
    VAR_9.y = *VAR_4 == 8 ? -1 : *VAR_4 == 1 ? 1 : 0;


    VAR_4++;
    VAR_11 = *VAR_4;


    VAR_4 = (UBYTE *)VAR_6;
    for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
    {
      VAR_18[VAR_20] = VAR_4[VAR_20];
    }


    VAR_19 = VAR_7;
    VAR_13 = VAR_2;
    FUNC_1(2);
    FUNC_0();

    VAR_15 = VAR_2;
  }

  VAR_0;

  VAR_17 += 1 + VAR_16;
}
