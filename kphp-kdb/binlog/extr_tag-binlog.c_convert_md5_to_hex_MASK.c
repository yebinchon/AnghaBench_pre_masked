
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_0 (char *VAR_1, unsigned char *VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
    VAR_1[2*VAR_3] = VAR_0[(VAR_2[VAR_3] >> 4) & 15];
    VAR_1[2*VAR_3+1] = VAR_0[VAR_2[VAR_3] & 15];
  }
  VAR_1[32] = 0;
}
