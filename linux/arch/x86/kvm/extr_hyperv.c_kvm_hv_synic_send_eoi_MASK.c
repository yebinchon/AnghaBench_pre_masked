
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv_synic {int sint; } ;
struct kvm_vcpu {int vcpu_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu_hv_synic*,int) ;
 int FUNC_4 (int ,int) ;
 struct kvm_vcpu_hv_synic* FUNC_5 (struct kvm_vcpu*) ;

void FUNC_6(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_vcpu_hv_synic *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;

 FUNC_4(VAR_0->vcpu_id, VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->sint); VAR_3++)
  if (FUNC_2(FUNC_3(VAR_2, VAR_3)) == VAR_1)
   FUNC_1(VAR_0, VAR_3);
}
