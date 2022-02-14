
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portmap {int pm_port; int pm_prot; int pm_vers; int pm_prog; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

bool_t
FUNC_1(XDR *VAR_1, struct portmap *VAR_2)
{

 if (FUNC_0(VAR_1, &VAR_2->pm_prog) &&
  FUNC_0(VAR_1, &VAR_2->pm_vers) &&
  FUNC_0(VAR_1, &VAR_2->pm_prot))
  return (FUNC_0(VAR_1, &VAR_2->pm_port));
 return (VAR_0);
}
