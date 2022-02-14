
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;

__attribute__((used)) static long
FUNC_0 (unsigned long VAR_1,
       ppc_cpu_t VAR_2,
       int *VAR_3)
{
  unsigned long VAR_4 = (VAR_1 >> 16) & 0x1f;



  if ((VAR_4 - 0x10 > 3 && (VAR_2 & VAR_0) == 0)
      || (VAR_4 - 0x10 > 7 && (VAR_1 & 0x100) != 0)
      || VAR_4 <= 3
      || (VAR_4 & 8) != 0)
    *VAR_3 = 1;
  return VAR_4 & 7;
}
