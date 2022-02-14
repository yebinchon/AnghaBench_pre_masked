
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



size_t FUNC_0 (u8 (*VAR_0) (const u8), const u8 *VAR_1, const size_t VAR_2, u8 *VAR_3)
{
  const u8 *VAR_4 = VAR_1;

  u8 *VAR_5 = VAR_3;

  for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 4)
  {
    const u8 VAR_7 = ((VAR_6 + 0) < VAR_2) ? VAR_4[0] : 0;
    const u8 VAR_8 = ((VAR_6 + 1) < VAR_2) ? VAR_4[1] : 0;
    const u8 VAR_9 = ((VAR_6 + 2) < VAR_2) ? VAR_4[2] : 0;
    const u8 VAR_10 = ((VAR_6 + 3) < VAR_2) ? VAR_4[3] : 0;

    const u8 VAR_11 = VAR_0 (VAR_7 & 0x7f);
    const u8 VAR_12 = VAR_0 (VAR_8 & 0x7f);
    const u8 VAR_13 = VAR_0 (VAR_9 & 0x7f);
    const u8 VAR_14 = VAR_0 (VAR_10 & 0x7f);

    VAR_5[0] = ((VAR_11 << 2) & 0xfc) | ((VAR_12 >> 4) & 0x03);
    VAR_5[1] = ((VAR_12 << 4) & 0xf0) | ((VAR_13 >> 2) & 0x0f);
    VAR_5[2] = ((VAR_13 << 6) & 0xc0) | ((VAR_14 >> 0) & 0x3f);

    VAR_4 += 4;
    VAR_5 += 3;
  }

  size_t VAR_15 = 0;

  for (size_t VAR_16 = 0; VAR_16 < VAR_2; VAR_16++, VAR_15++)
  {
    if (VAR_1[VAR_16] != '=') continue;

    break;
  }

  size_t VAR_17 = (VAR_15 * 6) / 8;

  return VAR_17;
}
