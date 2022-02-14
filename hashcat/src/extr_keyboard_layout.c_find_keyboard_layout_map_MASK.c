
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int src_char; int src_len; } ;
typedef TYPE_1__ keyboard_layout_mapping_t ;



int FUNC_0 (const u32 VAR_0, const int VAR_1, const keyboard_layout_mapping_t *VAR_2, const int VAR_3)
{
  for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
    const u32 VAR_5 = VAR_2[VAR_4].src_char;
    const int VAR_6 = VAR_2[VAR_4].src_len;

    if (VAR_6 == VAR_1)
    {
      const u32 VAR_7 = 0xffffffff >> ((4 - VAR_1) * 8);

      if ((VAR_5 & VAR_7) == (VAR_0 & VAR_7)) return VAR_4;
    }
  }

  return -1;
}
