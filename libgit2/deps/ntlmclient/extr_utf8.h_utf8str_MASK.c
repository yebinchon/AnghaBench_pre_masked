
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;

void *FUNC_0(const void *VAR_1, const void *VAR_2) {
  const char *VAR_3 = (const char *)VAR_1;



  if ('\0' == *((const char *)VAR_2)) {
    return (void *)VAR_1;
  }

  while ('\0' != *VAR_3) {
    const char *VAR_4 = VAR_3;
    const char *VAR_5 = (const char *)VAR_2;

    while (*VAR_3 == *VAR_5 && (*VAR_3 != '\0' && *VAR_5 != '\0')) {
      VAR_5++;
      VAR_3++;
    }

    if ('\0' == *VAR_5) {


      return (void *)VAR_4;
    } else {


      if ('\0' != *VAR_3) {
        do {
          VAR_3++;
        } while (0x80 == (0xc0 & *VAR_3));
      }
    }
  }


  return VAR_0;
}
