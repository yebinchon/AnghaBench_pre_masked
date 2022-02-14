
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char*) ;
 size_t FUNC_2 (int*,int,scalar_t__,int *) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int FUNC_5 (const char *VAR_2, u8 VAR_3[64])
{
  u32 VAR_4 = ~0U;

  HCFILE VAR_5;

  FUNC_1 (&VAR_5, VAR_2, "rb");



  u8 *VAR_6 = (u8 *) FUNC_4 ((1024 * 1024) + 1);

  size_t VAR_7 = FUNC_2 (VAR_6, sizeof (u8), (1024 * 1024), &VAR_5);

  FUNC_0 (&VAR_5);

  size_t VAR_8 = 0;

  for (size_t VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
    VAR_4 = VAR_1[(VAR_4 ^ VAR_6[VAR_9]) & 0xff] ^ (VAR_4 >> 8);

    VAR_3[VAR_8++] += (VAR_4 >> 24) & 0xff; if (VAR_8 >= 64) VAR_8 = 0;
    VAR_3[VAR_8++] += (VAR_4 >> 16) & 0xff; if (VAR_8 >= 64) VAR_8 = 0;
    VAR_3[VAR_8++] += (VAR_4 >> 8) & 0xff; if (VAR_8 >= 64) VAR_8 = 0;
    VAR_3[VAR_8++] += (VAR_4 >> 0) & 0xff; if (VAR_8 >= 64) VAR_8 = 0;
  }

  FUNC_3 (VAR_6);

  return 0;
}
