
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_1,
      long VAR_2,
      ppc_cpu_t VAR_3,
      const char **VAR_4)
{
  if (VAR_2 > 7
      || (VAR_2 > 3 && (VAR_3 & VAR_0) == 0))
    *VAR_4 = FUNC_0("invalid sprg number");



  if (VAR_2 <= 3 || (VAR_1 & 0x100) != 0)
    VAR_2 |= 0x10;

  return VAR_1 | ((VAR_2 & 0x17) << 16);
}
