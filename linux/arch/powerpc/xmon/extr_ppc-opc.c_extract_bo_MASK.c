
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int FUNC_0 (long,int ,int) ;

__attribute__((used)) static long
FUNC_1 (unsigned long VAR_0,
     ppc_cpu_t VAR_1,
     int *VAR_2)
{
  long VAR_3;

  VAR_3 = (VAR_0 >> 21) & 0x1f;
  if (!FUNC_0 (VAR_3, VAR_1, 1))
    *VAR_2 = 1;
  return VAR_3;
}
