
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int) ;

__attribute__((used)) static void FUNC_2(byte VAR_0[8], const byte VAR_1[16])
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 byte *VAR_9 = VAR_0;

 VAR_2 = VAR_3 = VAR_1[0];
 for (VAR_8 = 1; VAR_8 < 16; VAR_8++)
 {
  VAR_2 = FUNC_0(VAR_1[VAR_8], VAR_2);
  VAR_3 = FUNC_1(VAR_1[VAR_8], VAR_3);
 }

 *VAR_9++ = VAR_2;
 *VAR_9++ = VAR_3;

 VAR_4 = VAR_2 - VAR_3;

 if (VAR_4 == 0)
 {
  VAR_6 = (VAR_2 == 255) ? 255 : 0;

  for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
   *VAR_9++ = VAR_6;

  return;
 }

 VAR_5 = VAR_4 / 2 - VAR_3 * 7;
 VAR_6 = VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
 {
  const byte VAR_10[8] = { 1, 7, 6, 5, 4, 3, 2, 0 };
  byte VAR_11 = VAR_10[(VAR_1[VAR_8] * 7 + VAR_5) / VAR_4];

  VAR_6 |= VAR_11 << VAR_7;
  VAR_7 += 3;
  if (VAR_7 >= 8)
  {
   *VAR_9++ = VAR_6 & 0xff;
   VAR_7 -= 8;
   VAR_6 >>= 8;
  }
 }
}
