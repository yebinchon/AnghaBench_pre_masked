
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char const*,char*,int) ;

int FUNC_1 (const unsigned char *const VAR_9, int VAR_10) {
  const unsigned int *VAR_11 = (const unsigned int *) VAR_9;
  switch (VAR_9[0]) {
    case 0:
      if (VAR_10 >= 12) {
        if (VAR_11[0] == 0x14000000 && VAR_11[1] == 0x70797466 && VAR_11[2] == 0x20207471) {
          return VAR_2;
        }
        if (!(VAR_11[0] & 0x00ffffff) && VAR_11[1] == 0x70797466 && (VAR_11[2] & 0x00ffffff) == 0x0034706d) {
          return VAR_4;
        }
      }
      break;
    case '%':
      if (VAR_10 >= 4 && !FUNC_0 (&VAR_9[1], "PDF", 3)) {
        return VAR_5;
      }
      break;
    case 'I':
      if (VAR_10 >= 3 && !FUNC_0 (&VAR_9[1], "D3", 2)) {
        return VAR_3;
      }
      break;
    case 'G':
      if (VAR_10 >= 5 && !FUNC_0 (&VAR_9[1], "IF", 2)) {
        return VAR_0;
      }
      break;
    case 'R':
      if (VAR_10 >= 4 && !FUNC_0 (&VAR_9[1], "IFF", 3)) {
        if (VAR_10 >= 12 && !FUNC_0 (&VAR_9[8], "WEBP", 4)) {
          return VAR_8;
        }
        return VAR_3;
      }
      break;
    case 0x89:
      if (VAR_10 >= 4 && !FUNC_0 (&VAR_9[1], "PNG", 3)) {
        return VAR_6;
      }
      break;
    case 0xff:
      if (VAR_10 >= 2 && VAR_9[1] == 0xd8) {
        return VAR_1;
      }
      if (VAR_10 >= 2 && VAR_9[1] >= 0xe0) {
        return VAR_3;
      }
      break;
  }
  return VAR_7;
}
