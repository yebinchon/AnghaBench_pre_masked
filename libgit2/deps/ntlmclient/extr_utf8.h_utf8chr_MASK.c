
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_int32_t ;


 void* FUNC_0 (void const*,char*) ;

void *FUNC_1(const void *VAR_0, utf8_int32_t VAR_1) {
  char VAR_2[5] = {'\0', '\0', '\0', '\0', '\0'};

  if (0 == VAR_1) {


    const char *VAR_3 = (const char *)VAR_0;
    while ('\0' != *VAR_3) {
      VAR_3++;
    }
    return (void *)VAR_3;
  } else if (0 == ((utf8_int32_t)0xffffff80 & VAR_1)) {


    VAR_2[0] = (char)VAR_1;
  } else if (0 == ((utf8_int32_t)0xfffff800 & VAR_1)) {


    VAR_2[0] = 0xc0 | (char)(VAR_1 >> 6);
    VAR_2[1] = 0x80 | (char)(VAR_1 & 0x3f);
  } else if (0 == ((utf8_int32_t)0xffff0000 & VAR_1)) {


    VAR_2[0] = 0xe0 | (char)(VAR_1 >> 12);
    VAR_2[1] = 0x80 | (char)((VAR_1 >> 6) & 0x3f);
    VAR_2[2] = 0x80 | (char)(VAR_1 & 0x3f);
  } else {


    VAR_2[0] = 0xf0 | (char)(VAR_1 >> 18);
    VAR_2[1] = 0x80 | (char)((VAR_1 >> 12) & 0x3f);
    VAR_2[2] = 0x80 | (char)((VAR_1 >> 6) & 0x3f);
    VAR_2[3] = 0x80 | (char)(VAR_1 & 0x3f);
  }




  return FUNC_0(VAR_0, VAR_2);
}
