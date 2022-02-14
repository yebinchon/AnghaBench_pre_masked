
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long) ;

__attribute__((used)) static int
FUNC_2 (long VAR_2, ppc_cpu_t VAR_3, int VAR_4)
{
  int VAR_5 = FUNC_1 (VAR_2);
  int VAR_6 = FUNC_0 (VAR_2);



  if (VAR_4 && VAR_3 == ~(ppc_cpu_t) VAR_1)
    return VAR_5 || VAR_6;
  if ((VAR_3 & VAR_0) == 0)
    return VAR_5;
  else
    return VAR_6;
}
