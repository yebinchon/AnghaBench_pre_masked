
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



size_t FUNC_0 (u8 (*VAR_0) (const u8), const u8 *VAR_1, const size_t VAR_2, u8 *VAR_3)
{
  const u8 *VAR_4 = VAR_1;

  u8 *VAR_5 = VAR_3;

  for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 3)
  {
    const u8 VAR_7 = ((VAR_6 + 0) < VAR_2) ? VAR_4[0] : 0;
    const u8 VAR_8 = ((VAR_6 + 1) < VAR_2) ? VAR_4[1] : 0;
    const u8 VAR_9 = ((VAR_6 + 2) < VAR_2) ? VAR_4[2] : 0;

    const u8 VAR_10 = VAR_0 ( ((VAR_7 >> 2) & 0x3f));
    const u8 VAR_11 = VAR_0 (((VAR_7 << 4) & 0x30) | ((VAR_8 >> 4) & 0x0f));
    const u8 VAR_12 = VAR_0 (((VAR_8 << 2) & 0x3c) | ((VAR_9 >> 6) & 0x03));
    const u8 VAR_13 = VAR_0 ( ((VAR_9 >> 0) & 0x3f));

    VAR_5[0] = VAR_10 & 0x7f;
    VAR_5[1] = VAR_11 & 0x7f;
    VAR_5[2] = VAR_12 & 0x7f;
    VAR_5[3] = VAR_13 & 0x7f;

    VAR_4 += 3;
    VAR_5 += 4;
  }

  int VAR_14 = (int) (((0.5 + VAR_2) * 8) / 6);

  while (VAR_14 % 4)
  {
    VAR_3[VAR_14] = '=';

    VAR_14++;
  }

  return VAR_14;
}
