
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_book3s_shadow_vcpu {int * sr; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvmppc_book3s_shadow_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 int VAR_2;
 struct kvmppc_book3s_shadow_vcpu *VAR_3 = FUNC_2(VAR_1);

 FUNC_1("MMU: flushing all segments (%d)\n", FUNC_0(VAR_3->sr));
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->sr); VAR_2++)
  VAR_3->sr[VAR_2] = VAR_0;

 FUNC_3(VAR_3);
}
