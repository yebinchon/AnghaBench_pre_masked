
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static long
FUNC_1(instr * VAR_1)
{
 while (!FUNC_0(*VAR_1))
  ++VAR_1;


 if ((*VAR_1 & VAR_0) == VAR_0)
  return -(((long)(*VAR_1) << 48) >> 48);
 else
  return (*VAR_1 >> 13) & 0xff;
}
