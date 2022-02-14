
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int pcpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct kvmppc_vcore *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->pcpu;


 FUNC_1();
 for (; VAR_1; VAR_1 >>= 1, ++VAR_2)
  if (VAR_1 & 1)
   FUNC_0(VAR_2);
}
