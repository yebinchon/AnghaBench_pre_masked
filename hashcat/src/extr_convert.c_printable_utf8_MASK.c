
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;



__attribute__((used)) static bool FUNC_0 (const u8 *VAR_0, const size_t VAR_1)
{


  const int VAR_2[256] =
  {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
     2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5,
     6, 7, 7, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
  };



  const size_t VAR_3[9] = { 1, 2, 3, 3, 3, 3, 4, 4, 4 };

  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    const u8 VAR_5 = VAR_0[VAR_4];

    const int VAR_6 = VAR_2[VAR_5];

    if (VAR_6 == -1) return 0;



    const size_t VAR_7 = VAR_3[VAR_6];

    if ((VAR_4 + VAR_7) > VAR_1) return 0;



    if (VAR_7 >= 2)
    {
      VAR_4++;

      const u8 VAR_8 = VAR_0[VAR_4];

      switch (VAR_6)
      {
        case 2: if ((VAR_8 < 0xa0) || (VAR_8 > 0xbf)) return 0; break;
        case 4: if ((VAR_8 < 0x80) || (VAR_8 > 0x9f)) return 0; break;
        case 6: if ((VAR_8 < 0x90) || (VAR_8 > 0xbf)) return 0; break;
        case 8: if ((VAR_8 < 0x80) || (VAR_8 > 0x8f)) return 0; break;
        default: if ((VAR_8 < 0x80) || (VAR_8 > 0xbf)) return 0; break;
      }

      for (size_t VAR_9 = 2; VAR_9 < VAR_7; VAR_9++)
      {
        VAR_4++;

        const u8 VAR_10 = VAR_0[VAR_4];

        if ((VAR_10 < 0x80) || (VAR_10 > 0xbf)) return 0;
      }
    }
  }

  return 1;
}
