
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,char*,int*,int*) ;

unsigned FUNC_2 (void) {
  if (VAR_0[VAR_2] == ',') {
    VAR_2 ++;
  }
  int VAR_3, VAR_4;
  if (!VAR_1) {
    FUNC_0 (FUNC_1 (VAR_0 + VAR_2, "\"%u\"%n", &VAR_3, &VAR_4) == 1);
  } else {
    FUNC_0 (FUNC_1 (VAR_0 + VAR_2, "%u%n", &VAR_3, &VAR_4) == 1);
  }
  VAR_2 += VAR_4;
  FUNC_0 (!VAR_0[VAR_2] || VAR_0[VAR_2] == ',' || VAR_0[VAR_2] == 10 || VAR_0[VAR_2] == 13);
  return VAR_3;
}
