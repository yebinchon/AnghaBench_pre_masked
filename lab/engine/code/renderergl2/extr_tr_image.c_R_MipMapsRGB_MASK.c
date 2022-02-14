
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* in2 ;
typedef int* in ;
typedef size_t byte ;


 float FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1( byte *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 const byte *VAR_7;
 float VAR_8;
 static float VAR_9[256];
 static int VAR_10 = 0;
 byte *VAR_11 = VAR_0;

 if (!VAR_10) {
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
   VAR_9[VAR_3] = FUNC_0(VAR_3 / 255.0f, 2.2f) * 0.25f;
  VAR_10 = 1;
 }

 if (VAR_1 == 1 && VAR_2 == 1)
  return;

 if (VAR_1 == 1 || VAR_2 == 1) {
  for (VAR_3 = (VAR_1 * VAR_2) >> 1; VAR_3; VAR_3--) {
   for (VAR_5 = 3; VAR_5; VAR_5--, VAR_0++) {
    VAR_8 = (VAR_9[*(VAR_0)] + VAR_9[*(VAR_0 + 4)]) * 2.0f;

    *VAR_11++ = (byte)(FUNC_0(VAR_8, 1.0f / 2.2f) * 255.0f);
   }
   *VAR_11++ = (*(VAR_0) + *(VAR_0 + 4)) >> 1; VAR_0 += 5;
  }

  return;
 }

 VAR_6 = VAR_1 * 4;
 VAR_1 >>= 1; VAR_2 >>= 1;

 VAR_7 = VAR_0 + VAR_6;
 for (VAR_4 = VAR_2; VAR_4; VAR_4--, VAR_0 += VAR_6, VAR_7 += VAR_6) {
  for (VAR_3 = VAR_1; VAR_3; VAR_3--) {
   for (VAR_5 = 3; VAR_5; VAR_5--, VAR_0++, VAR_7++) {
    VAR_8 = VAR_9[*(VAR_0)] + VAR_9[*(VAR_0 + 4)]
          + VAR_9[*(VAR_7)] + VAR_9[*(VAR_7 + 4)];

    *VAR_11++ = (byte)(FUNC_0(VAR_8, 1.0f / 2.2f) * 255.0f);
   }

   *VAR_11++ = (*(VAR_0) + *(VAR_0 + 4) + *(VAR_7) + *(VAR_7 + 4)) >> 2; VAR_0 += 5, VAR_7 += 5;
  }
 }
}
