
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_vcpu_book3s {int* context_id; int proto_vsid_max; int proto_vsid_first; int proto_vsid_next; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct kvmppc_vcpu_book3s* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct kvmppc_vcpu_book3s *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 < 0)
  return -1;
 VAR_2->context_id[0] = VAR_3;

 VAR_2->proto_vsid_max = ((u64)(VAR_2->context_id[0] + 1)
      << VAR_0) - 1;
 VAR_2->proto_vsid_first = (u64)VAR_2->context_id[0] << VAR_0;
 VAR_2->proto_vsid_next = VAR_2->proto_vsid_first;

 FUNC_1(VAR_1);

 return 0;
}
