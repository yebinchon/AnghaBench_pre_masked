
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long n_max_mmu_pages; } ;
struct kvm {TYPE_1__ arch; } ;



__attribute__((used)) static unsigned long FUNC_0(struct kvm *VAR_0)
{
 return VAR_0->arch.n_max_mmu_pages;
}
