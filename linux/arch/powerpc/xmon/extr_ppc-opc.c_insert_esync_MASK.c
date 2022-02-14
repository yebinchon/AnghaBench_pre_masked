
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_2,
       long VAR_3,
       ppc_cpu_t VAR_4,
       const char **VAR_5)
{
  unsigned long VAR_6 = (VAR_2 >> 21) & 0x03;

  if (VAR_3 == 0)
    {
      if (((VAR_4 & VAR_0) != 0 && VAR_6 > 1)
   || ((VAR_4 & VAR_1) != 0 && VAR_6 > 2))
        *VAR_5 = FUNC_0("illegal L operand value");
      return VAR_2;
    }

  if ((VAR_6 & ~0x1)
      || (((VAR_3 >> 1) & 0x1) ^ VAR_6) == 0)
        *VAR_5 = FUNC_0("incompatible L operand value");

  return VAR_2 | ((VAR_3 & 0xf) << 16);
}
