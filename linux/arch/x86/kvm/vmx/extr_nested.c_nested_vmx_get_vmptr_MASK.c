
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_exception {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ,int,int,int *) ;
 int FUNC_1 (struct kvm_vcpu*,struct x86_exception*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,int *,int,struct x86_exception*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_2, gpa_t *VAR_3)
{
 gva_t VAR_4;
 struct x86_exception VAR_5;

 if (FUNC_0(VAR_2, FUNC_4(VAR_0),
    FUNC_3(VAR_1), 0,
    sizeof(*VAR_3), &VAR_4))
  return 1;

 if (FUNC_2(VAR_2, VAR_4, VAR_3, sizeof(*VAR_3), &VAR_5)) {
  FUNC_1(VAR_2, &VAR_5);
  return 1;
 }

 return 0;
}
