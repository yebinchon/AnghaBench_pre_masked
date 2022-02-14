
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*) ;

unsigned FUNC_2 (void) {
  if (VAR_0[VAR_2] == ',') {
    VAR_2 ++;
  }
  unsigned VAR_3,VAR_4,VAR_5,VAR_6;
  int VAR_7;
  if (!VAR_1) {
    FUNC_0 (FUNC_1 (VAR_0 + VAR_2, "\"%u.%u.%u.%u\"%n", &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7) == 4);
  } else if (VAR_1 == 2) {
    FUNC_0 (FUNC_1 (VAR_0 + VAR_2, "%u.%u.%u.%u%n", &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7) == 4);
  } else {
    FUNC_0 (0);
  }
  FUNC_0 (0 <= VAR_3 && VAR_3 < 256);
  FUNC_0 (0 <= VAR_4 && VAR_4 < 256);
  FUNC_0 (0 <= VAR_5 && VAR_5 < 256);
  FUNC_0 (0 <= VAR_6 && VAR_6 < 256);
  VAR_2 += VAR_7;
  FUNC_0 (!VAR_0[VAR_2] || VAR_0[VAR_2] == ',');
  return (VAR_3 << 24) + (VAR_4 << 16) + (VAR_5 << 8) + VAR_6;
}
