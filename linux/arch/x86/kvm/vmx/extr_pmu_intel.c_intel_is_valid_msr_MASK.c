
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int version; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_pmu*,int) ;
 int FUNC_1 (struct kvm_pmu*,int,int ) ;
 struct kvm_pmu* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_2, u32 VAR_3)
{
 struct kvm_pmu *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 131:
 case 128:
 case 130:
 case 129:
  VAR_5 = VAR_4->version > 1;
  break;
 default:
  VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0) ||
   FUNC_1(VAR_4, VAR_3, VAR_1) ||
   FUNC_0(VAR_4, VAR_3);
  break;
 }

 return VAR_5;
}
