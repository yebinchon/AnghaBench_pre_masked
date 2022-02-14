
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, uint8_t* VAR_1,
    uint8_t* VAR_2) {
  if (VAR_0 == 16) {
    *VAR_1 = 0;
    *VAR_2 = 1;
  } else if (VAR_0 == 17) {
    *VAR_1 = 1;
    *VAR_2 = 7;
  } else if (VAR_0 > 17) {
    *VAR_1 = (uint8_t)(((VAR_0 - 17) << 1) | 1);
    *VAR_2 = 4;
  } else {
    *VAR_1 = (uint8_t)(((VAR_0 - 8) << 4) | 1);
    *VAR_2 = 7;
  }
}
