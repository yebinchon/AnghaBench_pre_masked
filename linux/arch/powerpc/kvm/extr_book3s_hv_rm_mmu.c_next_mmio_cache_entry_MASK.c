
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmio_hpte_cache_entry {int dummy; } ;
struct TYPE_3__ {unsigned int index; struct mmio_hpte_cache_entry* entry; } ;
struct TYPE_4__ {TYPE_1__ mmio_cache; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct mmio_hpte_cache_entry *
   FUNC_0(struct kvm_vcpu *VAR_1)
{
 unsigned int VAR_2 = VAR_1->arch.mmio_cache.index;

 VAR_1->arch.mmio_cache.index++;
 if (VAR_1->arch.mmio_cache.index == VAR_0)
  VAR_1->arch.mmio_cache.index = 0;

 return &VAR_1->arch.mmio_cache.entry[VAR_2];
}
