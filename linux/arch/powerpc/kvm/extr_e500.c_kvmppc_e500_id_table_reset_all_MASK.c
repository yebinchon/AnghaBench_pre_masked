
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_id_table {int dummy; } ;
struct kvmppc_vcpu_e500 {int idt; } ;


 int FUNC_0 (struct kvmppc_vcpu_e500*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_vcpu_e500 *VAR_0)
{
 FUNC_1(VAR_0->idt, 0, sizeof(struct vcpu_id_table));


 FUNC_0(VAR_0);
}
