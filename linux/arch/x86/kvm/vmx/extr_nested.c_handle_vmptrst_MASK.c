
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_3__ {int hv_evmcs; int current_vmptr; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,unsigned long,int ,int,int,int *) ;
 int FUNC_1 (struct kvm_vcpu*,struct x86_exception*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,void*,int,struct x86_exception*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 TYPE_2__* FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3 = FUNC_8(VAR_0);
 u32 VAR_4 = FUNC_7(VAR_1);
 gpa_t VAR_5 = FUNC_5(VAR_2)->nested.current_vmptr;
 struct x86_exception VAR_6;
 gva_t VAR_7;

 if (!FUNC_3(VAR_2))
  return 1;

 if (FUNC_6(FUNC_5(VAR_2)->nested.hv_evmcs))
  return 1;

 if (FUNC_0(VAR_2, VAR_3, VAR_4,
    1, sizeof(gpa_t), &VAR_7))
  return 1;

 if (FUNC_2(VAR_2, VAR_7, (void *)&VAR_5,
     sizeof(gpa_t), &VAR_6)) {
  FUNC_1(VAR_2, &VAR_6);
  return 1;
 }
 return FUNC_4(VAR_2);
}
