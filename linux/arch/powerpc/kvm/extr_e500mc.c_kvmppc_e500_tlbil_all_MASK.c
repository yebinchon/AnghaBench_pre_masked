
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct kvmppc_vcpu_e500 *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(VAR_3);
 FUNC_3(VAR_1, VAR_0 | FUNC_0(&VAR_2->vcpu));
 asm volatile("tlbilxlpid");
 FUNC_3(VAR_1, 0);
 FUNC_1(VAR_3);
}
