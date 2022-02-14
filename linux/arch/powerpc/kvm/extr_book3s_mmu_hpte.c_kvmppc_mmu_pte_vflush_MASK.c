
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (char*,struct kvm_vcpu*,int,int) ;

void FUNC_5(struct kvm_vcpu *VAR_0, u64 VAR_1, u64 VAR_2)
{
 FUNC_4("v", VAR_0, VAR_1, VAR_2);
 VAR_1 &= VAR_2;

 switch(VAR_2) {
 case 0xfffffffffULL:
  FUNC_3(VAR_0, VAR_1);
  break;





 case 0xffffff000ULL:
  FUNC_2(VAR_0, VAR_1);
  break;
 default:
  FUNC_0(1);
  return;
 }
}
