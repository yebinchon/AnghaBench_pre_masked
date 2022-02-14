
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(void)
{
 uint64_t VAR_0;

 __asm __volatile("rdtime %0" : "=r" (VAR_0));

 return (VAR_0);
}
