
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, gfn_t VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_0(VAR_1->kvm, VAR_2)) {
  FUNC_1(VAR_0, VAR_1);
  VAR_3 = 1;
 }

 return VAR_3;
}
