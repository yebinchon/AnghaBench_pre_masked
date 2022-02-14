
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int FUNC_0 (unsigned long) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (long,int ,int ) ;

__attribute__((used)) static unsigned long
FUNC_3 (unsigned long VAR_0,
    long VAR_1,
    ppc_cpu_t VAR_2,
    const char **VAR_3)
{
  if (!FUNC_2 (VAR_1, VAR_2, 0))
    *VAR_3 = FUNC_1("invalid conditional option");
  else if (FUNC_0 (VAR_0) == 19 && (VAR_0 & 0x400) && ! (VAR_1 & 4))
    *VAR_3 = FUNC_1("invalid counter access");
  return VAR_0 | ((VAR_1 & 0x1f) << 21);
}
