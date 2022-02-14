
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* md5_hash_t ;



__attribute__((used)) static void FUNC_0 (char *VAR_0, md5_hash_t VAR_1) {
  static char VAR_2[16] = "0123456789abcdef";
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
    VAR_0[2*VAR_3] = VAR_2[(VAR_1[VAR_3] >> 4) & 15];
    VAR_0[2*VAR_3+1] = VAR_2[VAR_1[VAR_3] & 15];
  }
  VAR_0[32] = 0;
}
