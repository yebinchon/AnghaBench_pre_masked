
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(void)
{
 unsigned int VAR_0;

 __asm__ __volatile__(
      "sahf\n\t"
      "div %b2\n\t"
      "lahf"
      : "=a" (VAR_0)
      : "0" (5), "q" (2)
      : "cc");


 return (unsigned char) (VAR_0 >> 8) == 0x02;
}
