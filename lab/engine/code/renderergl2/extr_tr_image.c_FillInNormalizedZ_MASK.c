
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* byte ;


 void* FUNC_0 (float) ;
 float FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(const byte *VAR_0, byte *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  const byte *VAR_6 = VAR_0 + VAR_5 * VAR_2 * 4;
  byte *VAR_7 = VAR_1 + VAR_5 * VAR_2 * 4;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   byte VAR_8, VAR_9, VAR_10, VAR_11;
   float VAR_12, VAR_13, VAR_14, VAR_15;

   VAR_8 = *VAR_6++;
   VAR_9 = *VAR_6++;
   VAR_6++;
   VAR_11 = *VAR_6++;

   VAR_12 = FUNC_1(VAR_8);
   VAR_13 = FUNC_1(VAR_9);
   VAR_14 = 1.0f - VAR_12 * VAR_12 - VAR_13 * VAR_13;
   if (VAR_14 >= 0.0f)
    VAR_15 = (float)FUNC_2(VAR_14);
   else
    VAR_15 = 0.0f;

   VAR_10 = FUNC_0(VAR_15);

   *VAR_7++ = VAR_8;
   *VAR_7++ = VAR_9;
   *VAR_7++ = VAR_10;
   *VAR_7++ = VAR_11;
  }
 }
}
