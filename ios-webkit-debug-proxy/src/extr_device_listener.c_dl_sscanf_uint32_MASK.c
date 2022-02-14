
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
typedef int int8_t ;



uint32_t FUNC_0(const char *VAR_0) {
  uint32_t VAR_1 = 0;
  const char *VAR_2 = VAR_0;
  int8_t VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    VAR_1 |= ((((unsigned char) *VAR_2++) & 0xFF) << (VAR_3<<3));
  }
  return VAR_1;
}
