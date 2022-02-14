
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int hpa_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1, hpa_t VAR_2)
{
 if (!FUNC_0(VAR_1)) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_1, 1);
 }
}
