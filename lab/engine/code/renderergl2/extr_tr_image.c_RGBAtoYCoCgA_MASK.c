
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



__attribute__((used)) static void FUNC_0(const byte *VAR_0, byte *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  const byte *VAR_6 = VAR_0 + VAR_5 * VAR_2 * 4;
  byte *VAR_7 = VAR_1 + VAR_5 * VAR_2 * 4;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   byte VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

   VAR_8 = *VAR_6++;
   VAR_9 = *VAR_6++;
   VAR_10 = *VAR_6++;
   VAR_11 = *VAR_6++;
   VAR_12 = (VAR_8 + VAR_10) >> 1;

   *VAR_7++ = (VAR_9 + VAR_12) >> 1;
   *VAR_7++ = (VAR_8 - VAR_10 + 256) >> 1;
   *VAR_7++ = (VAR_9 - VAR_12 + 256) >> 1;
   *VAR_7++ = VAR_11;
  }
 }
}
