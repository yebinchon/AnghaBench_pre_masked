
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_book3s {scalar_t__ hpte_cache_count; } ;
struct kvm_vcpu {int dummy; } ;
struct hpte_cache {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hpte_cache* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct kvmppc_vcpu_book3s* FUNC_2 (struct kvm_vcpu*) ;

struct hpte_cache *FUNC_3(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_vcpu_book3s *VAR_4 = FUNC_2(VAR_3);
 struct hpte_cache *VAR_5;

 if (VAR_4->hpte_cache_count == VAR_1)
  FUNC_1(VAR_3);

 VAR_5 = FUNC_0(VAR_2, VAR_0);

 return VAR_5;
}
