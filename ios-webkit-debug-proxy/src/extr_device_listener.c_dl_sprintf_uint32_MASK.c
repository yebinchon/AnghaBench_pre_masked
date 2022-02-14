
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;



char *FUNC_0(char *VAR_0, uint32_t VAR_1) {
  char *VAR_2 = VAR_0;
  int8_t VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    *VAR_2++ = (unsigned char)((VAR_1 >> (VAR_3<<3)) & 0xFF);
  }
  return VAR_2;
}
