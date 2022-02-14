
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;
typedef scalar_t__ qboolean ;
typedef int byte ;


 int FUNC_0 (int,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(const byte *VAR_0, byte *VAR_1, int VAR_2, int VAR_3, qboolean VAR_4)
{
 int VAR_5, VAR_6, VAR_7;



 VAR_7 = 1;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  const byte *VAR_8 = VAR_0 + VAR_6 * VAR_2 * 4;
  byte *VAR_9 = VAR_1 + VAR_6 * VAR_2 * 4 + 3;

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
   byte VAR_10 = (VAR_8[0] >> 2) + (VAR_8[1] >> 1) + (VAR_8[2] >> 2);
   VAR_10 = VAR_10 * VAR_10 / 255;
   *VAR_9 = VAR_10;
   VAR_7 = FUNC_2(VAR_7, *VAR_9);
   VAR_9 += 4;
   VAR_8 += 4;
  }
 }


 if (VAR_7 < 255)
 {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  {
   byte *VAR_11 = VAR_1 + VAR_6 * VAR_2 * 4 + 3;

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
    *VAR_11 = *VAR_11 + (255 - VAR_7);
    VAR_11 += 4;
   }
  }
 }




 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  byte *VAR_12 = VAR_1 + VAR_6 * VAR_2 * 4;

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {




   byte VAR_13[9];
   int VAR_14, VAR_15, VAR_16;
   vec3_t VAR_17;

   VAR_16 = 0;
   for (VAR_15 = -1; VAR_15 <= 1; VAR_15++)
   {
    int VAR_18 = VAR_6 + VAR_15;

    if (VAR_4)
    {
     VAR_18 = FUNC_0(VAR_18, 0, VAR_3 - 1);
    }
    else
    {
     VAR_18 = (VAR_18 + VAR_3) % VAR_3;
    }


    for (VAR_14 = -1; VAR_14 <= 1; VAR_14++)
    {
     int VAR_19 = VAR_5 + VAR_14;

     if (VAR_4)
     {
      VAR_19 = FUNC_0(VAR_19, 0, VAR_2 - 1);
     }
     else
     {
      VAR_19 = (VAR_19 + VAR_2) % VAR_2;
     }

     VAR_13[VAR_16++] = *(VAR_1 + (VAR_18 * VAR_2 + VAR_19) * 4 + 3);
    }
   }

   VAR_17[0] = VAR_13[0] - VAR_13[2]
       + 2 * VAR_13[3] - 2 * VAR_13[5]
       + VAR_13[6] - VAR_13[8];

   VAR_17[1] = VAR_13[0] + 2 * VAR_13[1] + VAR_13[2]

       - VAR_13[6] - 2 * VAR_13[7] - VAR_13[8];

   VAR_17[2] = VAR_13[4] * 4;

   if (!FUNC_3(VAR_17, VAR_17))
   {
    FUNC_4(VAR_17, 0, 0, 1);
   }

   *VAR_12++ = FUNC_1(VAR_17[0]);
   *VAR_12++ = FUNC_1(VAR_17[1]);
   *VAR_12++ = FUNC_1(VAR_17[2]);
   VAR_12++;
  }
 }
}
