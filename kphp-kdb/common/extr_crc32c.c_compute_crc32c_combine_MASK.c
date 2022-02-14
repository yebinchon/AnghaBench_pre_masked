
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*) ;
 unsigned int FUNC_1 (unsigned int*,unsigned int) ;

unsigned FUNC_2 (unsigned VAR_0, unsigned VAR_1, int VAR_2) {
  static int VAR_3 = 0;
  static unsigned VAR_4[1024];
  int VAR_5;

  if (VAR_2 <= 0) {
    return VAR_0;
  }
  if (!VAR_3) {
    VAR_4[0] = 0x82F63B78UL;
    for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
      VAR_4[VAR_5+1] = 1U << VAR_5;
    }
    for (VAR_5 = 1; VAR_5 < 32; VAR_5++) {
      FUNC_0 (VAR_4 + (VAR_5 << 5), VAR_4 + ((VAR_5 - 1) << 5));
    }
    VAR_3 = 1;
  }

  unsigned int *VAR_6 = VAR_4 + 64;
  do {
    VAR_6 += 32;
    if (VAR_2 & 1) {
      VAR_0 = FUNC_1 (VAR_6, VAR_0);
    }
    VAR_2 >>= 1;
  } while (VAR_2);
  return VAR_0 ^ VAR_1;
}
