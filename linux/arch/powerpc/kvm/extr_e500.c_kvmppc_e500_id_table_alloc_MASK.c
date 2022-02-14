
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_id_table {int dummy; } ;
struct kvmppc_vcpu_e500 {void* idt; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static void *FUNC_1(struct kvmppc_vcpu_e500 *VAR_1)
{
 VAR_1->idt = FUNC_0(sizeof(struct vcpu_id_table), VAR_0);
 return VAR_1->idt;
}
