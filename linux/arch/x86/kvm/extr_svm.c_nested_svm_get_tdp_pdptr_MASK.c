
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int nested_cr3; } ;
struct vcpu_svm {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int *,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_5(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_4(VAR_0);
 u64 VAR_3 = VAR_2->nested.nested_cr3;
 u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, FUNC_1(FUNC_0(VAR_3)), &VAR_4,
           FUNC_3(VAR_3) + VAR_1 * 8, 8);
 if (VAR_5)
  return 0;
 return VAR_4;
}
