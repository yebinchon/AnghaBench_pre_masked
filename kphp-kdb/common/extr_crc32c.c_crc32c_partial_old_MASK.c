
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0 (const void *VAR_1, int VAR_2, unsigned VAR_3) {
  const char *VAR_4 = VAR_1;
  for (; VAR_2 > 0; VAR_2--) {
    VAR_3 = VAR_0[(VAR_3 ^ *VAR_4++) & 0xff] ^ (VAR_3 >> 8);
  }
  return VAR_3;
}
