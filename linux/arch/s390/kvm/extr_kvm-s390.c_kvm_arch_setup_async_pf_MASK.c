
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pfault_token; int pfault_select; int pfault_compare; TYPE_3__* gmap; TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ arch; int kvm; } ;
struct kvm_arch_async_pf {int pfault_token; } ;
typedef int hva_t ;
struct TYPE_11__ {int gmap_addr; } ;
struct TYPE_12__ {TYPE_5__ thread; } ;
struct TYPE_9__ {int pfault_enabled; } ;
struct TYPE_7__ {int mask; } ;
struct TYPE_8__ {int* gcr; TYPE_1__ gpsw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int,struct kvm_arch_async_pf*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_4)
{
 hva_t VAR_5;
 struct kvm_arch_async_pf VAR_6;
 int VAR_7;

 if (VAR_4->arch.pfault_token == VAR_1)
  return 0;
 if ((VAR_4->arch.sie_block->gpsw.mask & VAR_4->arch.pfault_select) !=
     VAR_4->arch.pfault_compare)
  return 0;
 if (FUNC_4(VAR_4))
  return 0;
 if (FUNC_2(VAR_4, 0))
  return 0;
 if (!(VAR_4->arch.sie_block->gcr[0] & VAR_0))
  return 0;
 if (!VAR_4->arch.gmap->pfault_enabled)
  return 0;

 VAR_5 = FUNC_0(VAR_4->kvm, FUNC_1(VAR_3->thread.gmap_addr));
 VAR_5 += VAR_3->thread.gmap_addr & ~VAR_2;
 if (FUNC_5(VAR_4, VAR_4->arch.pfault_token, &VAR_6.pfault_token, 8))
  return 0;

 VAR_7 = FUNC_3(VAR_4, VAR_3->thread.gmap_addr, VAR_5, &VAR_6);
 return VAR_7;
}
