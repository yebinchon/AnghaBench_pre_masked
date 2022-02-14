
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int id; } ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_0, caddr_t VAR_1)
{
 struct info *VAR_2 = (struct info *)VAR_1;

 return (FUNC_0(VAR_0, &VAR_2->id));
}
