
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct kvmppc_slb {int origv; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 int VAR_0 ;
 struct kvmppc_slb* FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, gva_t VAR_2,
           ulong *VAR_3)
{
 struct kvmppc_slb *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_4) {
  *VAR_3 = VAR_4->origv;
  return 0;
 }
 *VAR_3 = 0;
 return -VAR_0;
}
