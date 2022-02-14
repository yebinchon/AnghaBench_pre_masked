
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,int ,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int *,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_3)
{
 gpa_t VAR_4;





 VAR_4 = FUNC_5(VAR_0);
 if (!FUNC_0(VAR_3) &&
     !FUNC_1(VAR_3, VAR_1, VAR_4, 0, ((void*)0))) {
  FUNC_4(VAR_4);
  return FUNC_3(VAR_3);
 }

 return FUNC_2(VAR_3, VAR_4, VAR_2, ((void*)0), 0);
}
