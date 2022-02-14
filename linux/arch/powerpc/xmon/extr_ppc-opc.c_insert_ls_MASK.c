
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

  if (((VAR_1 >> 1) & 0x3ff) == 598)
    {
      long VAR_5 = (VAR_3 & VAR_0) ? 2 : 1;
      if (VAR_2 > VAR_5)
 {
   *VAR_4 = FUNC_0("illegal L operand value");
   return VAR_1;
 }
    }

  return VAR_1 | ((VAR_2 & 0x3) << 21);
}
