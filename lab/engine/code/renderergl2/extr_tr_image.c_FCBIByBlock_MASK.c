
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,int,int) ;
 int FUNC_3 (int *,int *,int,int,int) ;
 int FUNC_4 (int *,int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_7(byte *VAR_4, int VAR_5, int VAR_6, qboolean VAR_7, qboolean VAR_8)
{
 byte VAR_9[VAR_1 * VAR_1 * 4];
 byte VAR_10[VAR_1 * VAR_1 * 4];
 byte *VAR_11, *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 FUNC_5(VAR_4, VAR_5, VAR_6);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14 += VAR_2)
 {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13 += VAR_2)
  {
   int VAR_17, VAR_18;
   int VAR_19, VAR_20, VAR_21, VAR_22;

   VAR_19 = FUNC_6(VAR_2, VAR_5 - VAR_13);
   VAR_20 = FUNC_6(VAR_2, VAR_6 - VAR_14);

   VAR_21 = VAR_19 + VAR_0 * 2;
   VAR_22 = VAR_20 + VAR_0 * 2;




   for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18 += 2)
   {
    VAR_16 = VAR_14 + VAR_18 - VAR_0;

    if (VAR_7)
    {
     VAR_16 = FUNC_0(VAR_16, 0, VAR_6 - 2);
    }
    else
    {
     VAR_16 = (VAR_16 + VAR_6) % VAR_6;
    }

    VAR_12 = VAR_9 + VAR_18 * VAR_21 * 4;
    VAR_11 = VAR_4 + VAR_16 * VAR_5 * 4;

    for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17 += 2)
    {
     VAR_15 = VAR_13 + VAR_17 - VAR_0;

     if (VAR_7)
     {
      VAR_15 = FUNC_0(VAR_15, 0, VAR_5 - 2);
     }
     else
     {
      VAR_15 = (VAR_15 + VAR_5) % VAR_5;
     }

     FUNC_1(VAR_12, VAR_11 + VAR_15 * 4);
     VAR_12 += 8;
    }
   }


   FUNC_4(VAR_9, VAR_10, VAR_21, VAR_22);

   if (!VAR_8)
   {
    switch (VAR_3->integer)
    {
     case 0:
      break;
     case 1:
      FUNC_3(VAR_9, VAR_10, VAR_21, VAR_22, 0);
      break;
     case 2:
     default:
      FUNC_2(VAR_9, VAR_10, VAR_21, VAR_22, 0);
      break;
    }
   }
   else
   {
    switch (VAR_3->integer)
    {
     case 0:
      break;
     case 1:
      FUNC_3(VAR_9, VAR_10, VAR_21, VAR_22, 0);
      FUNC_3(VAR_9, VAR_10, VAR_21, VAR_22, 1);
      break;
     case 2:
     default:
      FUNC_2(VAR_9, VAR_10, VAR_21, VAR_22, 0);
      FUNC_2(VAR_9, VAR_10, VAR_21, VAR_22, 1);
      break;
    }
   }


   for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
   {
    VAR_11 = VAR_10 + ((VAR_18 + VAR_0) * VAR_21 + VAR_0) * 4;
    VAR_12 = VAR_4 + ((VAR_14 + VAR_18) * VAR_5 + VAR_13) * 4;
    for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
    {
     FUNC_1(VAR_12, VAR_11);
     VAR_12 += 4;
     VAR_11 += 4;
    }
   }
  }
 }
}
