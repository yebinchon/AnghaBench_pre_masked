
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int dst_char; int dst_len; } ;
typedef TYPE_1__ keyboard_layout_mapping_t ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int,TYPE_1__ const*,int const) ;

int FUNC_2 (u32 VAR_0[64], const int VAR_1, const keyboard_layout_mapping_t *VAR_2, const int VAR_3)
{
  u32 VAR_4[16] = { 0 };

  u8 *VAR_5 = (u8 *) VAR_4;

  int VAR_6 = 0;

  u8 *VAR_7 = (u8 *) VAR_0;

  int VAR_8 = 0;

  while (VAR_8 < VAR_1)
  {
    u32 VAR_9 = 0;
    u32 VAR_10 = 0;
    u32 VAR_11 = 0;
    u32 VAR_12 = 0;

    const int VAR_13 = FUNC_0 (VAR_1 - VAR_8, 4);

    if (VAR_13 > 0) VAR_9 = VAR_7[VAR_8 + 0];
    if (VAR_13 > 1) VAR_10 = VAR_7[VAR_8 + 1];
    if (VAR_13 > 2) VAR_11 = VAR_7[VAR_8 + 2];
    if (VAR_13 > 3) VAR_12 = VAR_7[VAR_8 + 3];

    const u32 VAR_14 = (VAR_9 << 0)
                  | (VAR_10 << 8)
                  | (VAR_11 << 16)
                  | (VAR_12 << 24);

    int VAR_15;

    for (VAR_15 = VAR_13; VAR_15 > 0; VAR_15--)
    {
      const int VAR_16 = FUNC_1 (VAR_14, VAR_15, VAR_2, VAR_3);

      if (VAR_16 == -1) continue;

      u32 VAR_17 = VAR_2[VAR_16].dst_char;
      int VAR_18 = VAR_2[VAR_16].dst_len;

      switch (VAR_18)
      {
        case 1:
          VAR_5[VAR_6++] = (VAR_17 >> 0) & 0xff;
          break;
        case 2:
          VAR_5[VAR_6++] = (VAR_17 >> 0) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 8) & 0xff;
          break;
        case 3:
          VAR_5[VAR_6++] = (VAR_17 >> 0) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 8) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 16) & 0xff;
          break;
        case 4:
          VAR_5[VAR_6++] = (VAR_17 >> 0) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 8) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 16) & 0xff;
          VAR_5[VAR_6++] = (VAR_17 >> 24) & 0xff;
          break;
      }

      VAR_8 += VAR_15;

      break;
    }



    if (VAR_15 == 0)
    {
      VAR_5[VAR_6] = VAR_7[VAR_8];

      VAR_6++;

      VAR_8++;
    }
  }

  VAR_0[ 0] = VAR_4[ 0];
  VAR_0[ 1] = VAR_4[ 1];
  VAR_0[ 2] = VAR_4[ 2];
  VAR_0[ 3] = VAR_4[ 3];
  VAR_0[ 4] = VAR_4[ 4];
  VAR_0[ 5] = VAR_4[ 5];
  VAR_0[ 6] = VAR_4[ 6];
  VAR_0[ 7] = VAR_4[ 7];
  VAR_0[ 8] = VAR_4[ 8];
  VAR_0[ 9] = VAR_4[ 9];
  VAR_0[10] = VAR_4[10];
  VAR_0[11] = VAR_4[11];
  VAR_0[12] = VAR_4[12];
  VAR_0[13] = VAR_4[13];
  VAR_0[14] = VAR_4[14];
  VAR_0[15] = VAR_4[15];

  return VAR_6;
}
