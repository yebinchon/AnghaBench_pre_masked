
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_security {struct ib_qp_security* ports_pkeys; int security; } ;


 int FUNC_0 (struct ib_qp_security*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ib_qp_security *VAR_0)
{
 FUNC_1(VAR_0->security);
 FUNC_0(VAR_0->ports_pkeys);
 FUNC_0(VAR_0);
}
