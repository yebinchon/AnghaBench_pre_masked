
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline__ unsigned long long FUNC_0(void)
{
  unsigned VAR_0, VAR_1;
  __asm__ __volatile__ ("rdtsc" : "=a"(VAR_1), "=d"(VAR_0));
  return ( (unsigned long long)VAR_1)|( ((unsigned long long)VAR_0)<<32 );
}
