
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0(const char *VAR_0)
{
 register unsigned long VAR_1 asm("0") = 0;

 asm volatile ("0: srst  %0,%1\n"
        "   jo    0b"
        : "+d" (VAR_1), "+a" (VAR_0) : : "cc", "memory");
 return (char *) VAR_1;
}
