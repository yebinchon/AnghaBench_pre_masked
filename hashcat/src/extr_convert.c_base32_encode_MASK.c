
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



size_t FUNC_0 (u8 (*VAR_0) (const u8), const u8 *VAR_1, const size_t VAR_2, u8 *VAR_3)
{
  const u8 *VAR_4 = VAR_1;

  u8 *VAR_5 = VAR_3;

  for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 5)
  {
    const u8 VAR_7 = ((VAR_6 + 0) < VAR_2) ? VAR_4[0] : 0;
    const u8 VAR_8 = ((VAR_6 + 1) < VAR_2) ? VAR_4[1] : 0;
    const u8 VAR_9 = ((VAR_6 + 2) < VAR_2) ? VAR_4[2] : 0;
    const u8 VAR_10 = ((VAR_6 + 3) < VAR_2) ? VAR_4[3] : 0;
    const u8 VAR_11 = ((VAR_6 + 4) < VAR_2) ? VAR_4[4] : 0;

    const u8 VAR_12 = VAR_0 ( ((VAR_7 >> 3) & 0x1f));
    const u8 VAR_13 = VAR_0 (((VAR_7 << 2) & 0x1c) | ((VAR_8 >> 6) & 0x03));
    const u8 VAR_14 = VAR_0 ( ((VAR_8 >> 1) & 0x1f));
    const u8 VAR_15 = VAR_0 (((VAR_8 << 4) & 0x10) | ((VAR_9 >> 4) & 0x0f));
    const u8 VAR_16 = VAR_0 (((VAR_9 << 1) & 0x1e) | ((VAR_10 >> 7) & 0x01));
    const u8 VAR_17 = VAR_0 ( ((VAR_10 >> 2) & 0x1f));
    const u8 VAR_18 = VAR_0 (((VAR_10 << 3) & 0x18) | ((VAR_11 >> 5) & 0x07));
    const u8 VAR_19 = VAR_0 ( ((VAR_11 >> 0) & 0x1f));

    VAR_5[0] = VAR_12 & 0x7f;
    VAR_5[1] = VAR_13 & 0x7f;
    VAR_5[2] = VAR_14 & 0x7f;
    VAR_5[3] = VAR_15 & 0x7f;
    VAR_5[4] = VAR_16 & 0x7f;
    VAR_5[5] = VAR_17 & 0x7f;
    VAR_5[6] = VAR_18 & 0x7f;
    VAR_5[7] = VAR_19 & 0x7f;

    VAR_4 += 5;
    VAR_5 += 8;
  }

  int VAR_20 = (int) (((0.5 + VAR_2) * 8) / 5);

  while (VAR_20 % 8)
  {
    VAR_3[VAR_20] = '=';

    VAR_20++;
  }

  return VAR_20;
}
