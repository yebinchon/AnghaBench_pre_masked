
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

const char* FUNC_1(const char* VAR_4, const char* VAR_5, int* VAR_6) {
  FUNC_0(VAR_4 <= VAR_5);
  if (VAR_4 == VAR_5) {
    return 0;
  }
  int VAR_7 = -1;
  unsigned char VAR_8 = (unsigned char)VAR_4[0];
  int VAR_9 = VAR_2[VAR_8];
  if ((VAR_8 & 0x80) == 0) {

    VAR_7 = VAR_8;
    VAR_9 = 1;
  } else if (VAR_9 == 0 || VAR_9 == VAR_0) {

    VAR_9 = 1;
  } else if (VAR_4 + VAR_9 > VAR_5) {

    VAR_9 = VAR_5 - VAR_4;
  } else {
    VAR_7 = ((unsigned)VAR_4[0]) & VAR_1[VAR_8];
    for (int VAR_10=1; VAR_10<VAR_9; VAR_10++) {
      unsigned VAR_11 = (unsigned char)VAR_4[VAR_10];
      if (VAR_2[VAR_11] != VAR_0){

        VAR_7 = -1;
        VAR_9 = VAR_10;
        break;
      }
      VAR_7 = (VAR_7 << 6) | (VAR_11 & 0x3f);
    }
    if (VAR_7 < VAR_3[VAR_9]) {

      VAR_7 = -1;
    }
    if (0xD800 <= VAR_7 && VAR_7 <= 0xDFFF) {

      VAR_7 = -1;
    }
    if (VAR_7 > 0x10FFFF) {

      VAR_7 = -1;
    }
  }
  FUNC_0(VAR_9 > 0);
  *VAR_6 = VAR_7;
  return VAR_4 + VAR_9;
}
