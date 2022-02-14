
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct powerpc_intr {int priv; int intline; int * pic; } ;


 int FUNC_0 (int *,int ,int ) ;
 struct powerpc_intr* FUNC_1 (int ) ;

void
FUNC_2(u_int VAR_0)
{
 struct powerpc_intr *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0) || VAR_1->pic == ((void*)0))
  return;

 FUNC_0(VAR_1->pic, VAR_1->intline, VAR_1->priv);
}
