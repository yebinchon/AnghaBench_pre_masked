
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  FUNC_0(VAR_1 >= 0 && VAR_1 < 32);
  while (VAR_1-- > 0) {
    VAR_0 &= VAR_0-1;
  }
  FUNC_0(VAR_0);
  asm("bsf %1,%0\n\t"
        : "=&q"(VAR_2), "=&q"(VAR_3)
        : "1"(VAR_0)
        : "cc");
  return VAR_2;
}
