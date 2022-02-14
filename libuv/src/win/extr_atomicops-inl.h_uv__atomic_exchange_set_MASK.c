
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char FUNC_0(char volatile* VAR_0) {
  const char VAR_1 = 1;
  char VAR_2;
  __asm__ __volatile__ ("lock xchgb %0, %1\n\t"
                        : "=r"(VAR_2), "=m"(*VAR_0)
                        : "0"(VAR_1), "m"(*VAR_0)
                        : "memory");
  return VAR_2;
}
