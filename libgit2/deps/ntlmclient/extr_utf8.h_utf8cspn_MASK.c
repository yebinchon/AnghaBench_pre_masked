
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const void *VAR_0, const void *VAR_1) {
  const char *VAR_2 = (const char *)VAR_0;
  size_t VAR_3 = 0;

  while ('\0' != *VAR_2) {
    const char *VAR_4 = (const char *)VAR_1;
    size_t VAR_5 = 0;

    while ('\0' != *VAR_4) {



      if ((0x80 != (0xc0 & *VAR_4)) && (0 < VAR_5)) {
        return VAR_3;
      } else {
        if (*VAR_4 == VAR_2[VAR_5]) {


          VAR_5++;
          VAR_4++;
        } else {



          do {
            VAR_4++;
          } while (0x80 == (0xc0 & *VAR_4));


          VAR_5 = 0;
        }
      }
    }




    do {
      VAR_2++;
    } while ((0x80 == (0xc0 & *VAR_2)));
    VAR_3++;
  }

  return VAR_3;
}
