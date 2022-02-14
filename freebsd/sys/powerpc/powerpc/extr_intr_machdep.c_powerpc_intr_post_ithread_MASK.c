
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_intr {int priv; int intline; int pic; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct powerpc_intr *VAR_1 = VAR_0;

 FUNC_0(VAR_1->pic, VAR_1->intline, VAR_1->priv);
}
