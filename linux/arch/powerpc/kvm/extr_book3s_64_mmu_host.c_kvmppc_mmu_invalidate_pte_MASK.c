
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct hpte_cache {int pagesize; int host_vpn; int slot; } ;
struct TYPE_2__ {int (* hpte_invalidate ) (int ,int ,int ,int ,int ,int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;

void FUNC_1(struct kvm_vcpu *VAR_2, struct hpte_cache *VAR_3)
{
 VAR_1.hpte_invalidate(VAR_3->slot, VAR_3->host_vpn,
         VAR_3->pagesize, VAR_3->pagesize,
         VAR_0, 0);
}
