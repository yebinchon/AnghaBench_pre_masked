
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int,int) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int,int ) ;
 struct kvmppc_vcpu_e500* FUNC_3 (struct kvm_vcpu*) ;

int FUNC_4(struct kvm_vcpu *VAR_1, int VAR_2, gva_t VAR_3)
{
 struct kvmppc_vcpu_e500 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 == 0 || VAR_2 == 1) {
  FUNC_1(VAR_4, 0, VAR_5, VAR_2);
  FUNC_1(VAR_4, 1, VAR_5, VAR_2);
 } else if (VAR_2 == 3) {
  FUNC_2(VAR_4, VAR_5, VAR_3);
 }

 return VAR_0;
}
