
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

void *FUNC_0(const void *VAR_1, int VAR_2) {
  const char *VAR_3 = (const char *)VAR_1;
  const char *VAR_4 = VAR_0;
  char VAR_5[5] = {'\0', '\0', '\0', '\0', '\0'};

  if (0 == VAR_2) {


    while ('\0' != *VAR_3) {
      VAR_3++;
    }
    return (void *)VAR_3;
  } else if (0 == ((int)0xffffff80 & VAR_2)) {


    VAR_5[0] = (char)VAR_2;
  } else if (0 == ((int)0xfffff800 & VAR_2)) {


    VAR_5[0] = 0xc0 | (char)(VAR_2 >> 6);
    VAR_5[1] = 0x80 | (char)(VAR_2 & 0x3f);
  } else if (0 == ((int)0xffff0000 & VAR_2)) {


    VAR_5[0] = 0xe0 | (char)(VAR_2 >> 12);
    VAR_5[1] = 0x80 | (char)((VAR_2 >> 6) & 0x3f);
    VAR_5[2] = 0x80 | (char)(VAR_2 & 0x3f);
  } else {


    VAR_5[0] = 0xf0 | (char)(VAR_2 >> 18);
    VAR_5[1] = 0x80 | (char)((VAR_2 >> 12) & 0x3f);
    VAR_5[2] = 0x80 | (char)((VAR_2 >> 6) & 0x3f);
    VAR_5[3] = 0x80 | (char)(VAR_2 & 0x3f);
  }





  while ('\0' != *VAR_3) {
    size_t VAR_6 = 0;

    while (VAR_3[VAR_6] == VAR_5[VAR_6]) {
      VAR_6++;
    }

    if ('\0' == VAR_5[VAR_6]) {

      VAR_4 = VAR_3;
      VAR_3 += VAR_6;
    } else {
      VAR_3 += VAR_6;



      if ('\0' != *VAR_3) {
        do {
          VAR_3++;
        } while (0x80 == (0xc0 & *VAR_3));
      }
    }
  }


  return (void *)VAR_4;
}
