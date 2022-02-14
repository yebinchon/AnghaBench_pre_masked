
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmio_hpte_cache_entry {long mmio_update; unsigned int slb_base_pshift; unsigned int eaddr; unsigned long slb_v; } ;
struct TYPE_3__ {struct mmio_hpte_cache_entry* entry; } ;
struct TYPE_4__ {TYPE_1__ mmio_cache; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct mmio_hpte_cache_entry *FUNC_0(struct kvm_vcpu *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, long VAR_4)
{
 struct mmio_hpte_cache_entry *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = &VAR_1->arch.mmio_cache.entry[VAR_7];
  if (VAR_5->mmio_update == VAR_4) {
   VAR_6 = VAR_5->slb_base_pshift;
   if ((VAR_5->eaddr >> VAR_6) == (VAR_2 >> VAR_6) &&
       VAR_5->slb_v == VAR_3)
    return VAR_5;
  }
 }
 return ((void*)0);
}
