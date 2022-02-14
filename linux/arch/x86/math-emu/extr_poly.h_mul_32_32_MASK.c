
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(const unsigned long VAR_0,
          const unsigned long VAR_1)
{
 int VAR_2;
 asm volatile ("mull %2; movl %%edx,%%eax":"=a" (VAR_2)
        :"0"(VAR_0), "g"(VAR_1)
        :"dx");
 return VAR_2;
}
