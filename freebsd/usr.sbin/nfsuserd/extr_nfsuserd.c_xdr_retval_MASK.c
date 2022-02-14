
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {long retval; } ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int *,long*) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_0, caddr_t VAR_1)
{
 struct info *VAR_2 = (struct info *)VAR_1;
 long VAR_3;

 VAR_3 = VAR_2->retval;
 return (FUNC_0(VAR_0, &VAR_3));
}
