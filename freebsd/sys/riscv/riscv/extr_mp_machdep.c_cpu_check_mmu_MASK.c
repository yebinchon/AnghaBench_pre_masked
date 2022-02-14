
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static boolean_t
FUNC_1(u_int VAR_0, phandle_t VAR_1, u_int VAR_2, pcell_t *VAR_3)
{


 if (FUNC_0(VAR_1, "mmu-type") < 0)
  return (0);

 return (1);
}
