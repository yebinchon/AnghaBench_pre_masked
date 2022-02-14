
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t* VAR_0) {
  if (VAR_0[0] < 0xc0) {
    if (VAR_0[0] >= 'a' && VAR_0[0] <= 'z') {
      VAR_0[0] ^= 32;
    }
    return 1;
  }

  if (VAR_0[0] < 0xe0) {
    VAR_0[1] ^= 32;
    return 2;
  }

  VAR_0[2] ^= 5;
  return 3;
}
