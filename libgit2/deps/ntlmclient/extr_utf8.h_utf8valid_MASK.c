
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;

void *FUNC_0(const void *VAR_1) {
  const char *VAR_2 = (const char *)VAR_1;

  while ('\0' != *VAR_2) {
    if (0xf0 == (0xf8 & *VAR_2)) {


      if ((0x80 != (0xc0 & VAR_2[1])) || (0x80 != (0xc0 & VAR_2[2])) ||
          (0x80 != (0xc0 & VAR_2[3]))) {
        return (void *)VAR_2;
      }


      if (0x80 == (0xc0 & VAR_2[4])) {
        return (void *)VAR_2;
      }




      if ((0 == (0x07 & VAR_2[0])) && (0 == (0x30 & VAR_2[1]))) {
        return (void *)VAR_2;
      }


      VAR_2 += 4;
    } else if (0xe0 == (0xf0 & *VAR_2)) {


      if ((0x80 != (0xc0 & VAR_2[1])) || (0x80 != (0xc0 & VAR_2[2]))) {
        return (void *)VAR_2;
      }


      if (0x80 == (0xc0 & VAR_2[3])) {
        return (void *)VAR_2;
      }




      if ((0 == (0x0f & VAR_2[0])) && (0 == (0x20 & VAR_2[1]))) {
        return (void *)VAR_2;
      }


      VAR_2 += 3;
    } else if (0xc0 == (0xe0 & *VAR_2)) {


      if (0x80 != (0xc0 & VAR_2[1])) {
        return (void *)VAR_2;
      }


      if (0x80 == (0xc0 & VAR_2[2])) {
        return (void *)VAR_2;
      }




      if (0 == (0x1e & VAR_2[0])) {
        return (void *)VAR_2;
      }


      VAR_2 += 2;
    } else if (0x00 == (0x80 & *VAR_2)) {

      VAR_2 += 1;
    } else {

      return (void *)VAR_2;
    }
  }

  return VAR_0;
}
