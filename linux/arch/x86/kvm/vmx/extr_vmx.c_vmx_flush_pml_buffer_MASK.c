
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct vcpu_vmx {int pml_pg; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int* FUNC_2 (int ) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_4)
{
 struct vcpu_vmx *VAR_5 = FUNC_3(VAR_4);
 u64 *VAR_6;
 u16 VAR_7;

 VAR_7 = FUNC_4(VAR_0);


 if (VAR_7 == (VAR_3 - 1))
  return;


 if (VAR_7 >= VAR_3)
  VAR_7 = 0;
 else
  VAR_7++;

 VAR_6 = FUNC_2(VAR_5->pml_pg);
 for (; VAR_7 < VAR_3; VAR_7++) {
  u64 VAR_8;

  VAR_8 = VAR_6[VAR_7];
  FUNC_0(VAR_8 & (VAR_2 - 1));
  FUNC_1(VAR_4, VAR_8 >> VAR_1);
 }


 FUNC_5(VAR_0, VAR_3 - 1);
}
