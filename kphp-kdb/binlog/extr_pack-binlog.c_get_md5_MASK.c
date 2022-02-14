
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

const char *FUNC_0 (unsigned char VAR_1[16]) {
  static char VAR_2[33];
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
    VAR_2[2*VAR_3] = VAR_0[(VAR_1[VAR_3] >> 4) & 15];
    VAR_2[2*VAR_3+1] = VAR_0[VAR_1[VAR_3] & 15];
  }
  VAR_2[32] = 0;
  return VAR_2;
}
