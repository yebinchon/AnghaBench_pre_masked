
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smap_andnot_wp; scalar_t__ cr0_wp; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;



__attribute__((used)) static inline bool FUNC_0(struct kvm_mmu_page *VAR_0)
{
 return VAR_0->role.cr0_wp && VAR_0->role.smap_andnot_wp;
}
