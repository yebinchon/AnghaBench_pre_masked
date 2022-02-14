
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int * pae_root; } ;
struct TYPE_2__ {scalar_t__ (* get_tdp_level ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int) ;
 TYPE_1__* VAR_5 ;
 int * FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_7, struct kvm_mmu *VAR_8)
{
 struct page *VAR_9;
 int VAR_10;
 if (VAR_6 && VAR_5->get_tdp_level(VAR_7) > VAR_3)
  return 0;

 VAR_9 = FUNC_0(VAR_1 | VAR_4);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->pae_root = FUNC_1(VAR_9);
 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10)
  VAR_8->pae_root[VAR_10] = VAR_2;

 return 0;
}
