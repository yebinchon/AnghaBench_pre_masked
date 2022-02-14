
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (char*,char*,int) ;

size_t FUNC_3(char *VAR_0, const char *VAR_1, ssize_t VAR_2,
    ssize_t VAR_3, ssize_t VAR_4) {
  if (VAR_2 <= 0) {
    if (VAR_0) {
      *VAR_0 = '\0';
    }
    return 0;
  }

  char *VAR_5 = VAR_0;
  size_t VAR_6 = 0;



  size_t VAR_7 = 0;
  size_t VAR_8 = 0;

  size_t VAR_9;
  if (VAR_3 >= 0) {
    VAR_9 = (VAR_3 > 6 ? ((VAR_3 - 2) >> 2) : 1);
  } else {
    size_t VAR_10 = 1;
    size_t VAR_11 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
      unsigned char VAR_12 = VAR_1[VAR_7++];
      VAR_11++;
      if (VAR_12 == '\n') {
        if (VAR_11 > VAR_10) {
          VAR_10 = VAR_11;
        }
        if (VAR_4 >= 0 && ++VAR_8 > VAR_4) {
          break;
        }
        VAR_11 = 0;
      }
    }
    VAR_9 = VAR_10;
  }

  VAR_7 = 0;
  VAR_8 = 0;
  while (1) {
    size_t VAR_13;
    size_t VAR_14 = VAR_9;
    for (VAR_13 = VAR_7; VAR_13 < VAR_2 && VAR_14; ) {
      unsigned char VAR_15 = VAR_1[VAR_13++];
      static const char* VAR_16 = "0123456789ABCDEF";
      if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
      if (VAR_5) { *VAR_5++ = (VAR_16[(VAR_15 >> 4) & 0xF]); } VAR_6++;
      if (VAR_5) { *VAR_5++ = (VAR_16[VAR_15 & 0xF]); } VAR_6++;
      VAR_14--;
      if (VAR_15 == '\n') {
        break;
      }
    }
    size_t VAR_17 = VAR_14;
    for (VAR_17 = VAR_14; VAR_17 > 0; VAR_17--) {
      if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
      if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
      if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
    }
    if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
    if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
    while (VAR_7 < VAR_13) {
      unsigned char VAR_18 = VAR_1[VAR_7++];
      if (VAR_5) { *VAR_5++ = (VAR_18 < 32 || VAR_18 > 126 ? '.' : VAR_18); } VAR_6++;
    }
    if (VAR_7 >= VAR_2) {
      break;
    }
    if (VAR_4 >= 0 && ++VAR_8 > VAR_4) {
      for (VAR_17 = VAR_14; VAR_17 > 0; VAR_17--) {
        if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
      }
      if (VAR_5) { *VAR_5++ = (' '); } VAR_6++;
      if (VAR_5) { *VAR_5++ = ('+'); } VAR_6++;
      if (VAR_5) {
        size_t VAR_19 = FUNC_2(VAR_5, "%zd", VAR_2 - VAR_7);
        VAR_5 += VAR_19;
        VAR_6 += VAR_19;
      } else {
        VAR_6 += (int)(FUNC_1(VAR_2 - VAR_7) + 0.5) + 1;
      }
      break;
    }
    if (VAR_5) { *VAR_5++ = ('\n'); } VAR_6++;
  }
  if (VAR_5) {
    *VAR_5++ = '\0';
  }
  return VAR_6;
}
