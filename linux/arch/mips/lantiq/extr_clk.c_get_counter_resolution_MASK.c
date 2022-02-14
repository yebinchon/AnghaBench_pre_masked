
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(void)
{
 u32 VAR_0;

 __asm__ __volatile__(
  ".set	push\n"
  ".set	mips32r2\n"
  "rdhwr	%0, $3\n"
  ".set pop\n"
  : "=&r" (VAR_0)
  :
  : "memory");

 return VAR_0;
}
