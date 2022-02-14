
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



size_t FUNC_0 (u8 (*VAR_0) (const u8), const u8 *VAR_1, const size_t VAR_2, u8 *VAR_3)
{
  const u8 *VAR_4 = VAR_1;

  u8 *VAR_5 = VAR_3;

  for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 8)
  {
    const u8 VAR_7 = ((VAR_6 + 0) < VAR_2) ? VAR_4[0] : 0;
    const u8 VAR_8 = ((VAR_6 + 1) < VAR_2) ? VAR_4[1] : 0;
    const u8 VAR_9 = ((VAR_6 + 2) < VAR_2) ? VAR_4[2] : 0;
    const u8 VAR_10 = ((VAR_6 + 3) < VAR_2) ? VAR_4[3] : 0;
    const u8 VAR_11 = ((VAR_6 + 4) < VAR_2) ? VAR_4[4] : 0;
    const u8 VAR_12 = ((VAR_6 + 5) < VAR_2) ? VAR_4[5] : 0;
    const u8 VAR_13 = ((VAR_6 + 6) < VAR_2) ? VAR_4[6] : 0;
    const u8 VAR_14 = ((VAR_6 + 7) < VAR_2) ? VAR_4[7] : 0;

    const u8 VAR_15 = VAR_0 (VAR_7 & 0x7f);
    const u8 VAR_16 = VAR_0 (VAR_8 & 0x7f);
    const u8 VAR_17 = VAR_0 (VAR_9 & 0x7f);
    const u8 VAR_18 = VAR_0 (VAR_10 & 0x7f);
    const u8 VAR_19 = VAR_0 (VAR_11 & 0x7f);
    const u8 VAR_20 = VAR_0 (VAR_12 & 0x7f);
    const u8 VAR_21 = VAR_0 (VAR_13 & 0x7f);
    const u8 VAR_22 = VAR_0 (VAR_14 & 0x7f);

    VAR_5[0] = ((VAR_15 << 3) & 0xf8) | ((VAR_16 >> 2) & 0x07);
    VAR_5[1] = ((VAR_16 << 6) & 0xc0) | ((VAR_17 << 1) & 0x3e) | ((VAR_18 >> 4) & 0x01);
    VAR_5[2] = ((VAR_18 << 4) & 0xf0) | ((VAR_19 >> 1) & 0x0f);
    VAR_5[3] = ((VAR_19 << 7) & 0x80) | ((VAR_20 << 2) & 0x7c) | ((VAR_21 >> 3) & 0x03);
    VAR_5[4] = ((VAR_21 << 5) & 0xe0) | ((VAR_22 >> 0) & 0x1f);

    VAR_4 += 8;
    VAR_5 += 5;
  }

  size_t VAR_23 = 0;

  for (size_t VAR_24 = 0; VAR_24 < VAR_2; VAR_24++, VAR_23++)
  {
    if (VAR_1[VAR_24] != '=') continue;

    break;
  }

  size_t VAR_25 = (VAR_23 * 5) / 8;

  return VAR_25;
}
