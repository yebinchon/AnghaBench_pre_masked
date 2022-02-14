
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (int VAR_0) {
  int VAR_1, VAR_2;
  asm("bsr %1,%0\n\t"
    : "=&q" (VAR_1), "=&q" (VAR_2)
    : "1" (VAR_0)
    : "cc");
  return VAR_1;
}
