
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu_page {scalar_t__ unsync; scalar_t__ unsync_children; int spt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_mmu_page*,int*) ;
 int FUNC_4 (int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct kvm_mmu_page*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_8, u64 *VAR_9,
        struct kvm_mmu_page *VAR_10)
{
 u64 VAR_11;

 FUNC_0(VAR_2 != VAR_0);

 VAR_11 = FUNC_1(VAR_10->spt) | VAR_5 | VAR_0 |
        VAR_6 | VAR_7 | VAR_4;

 if (FUNC_5(VAR_10))
  VAR_11 |= VAR_1;
 else
  VAR_11 |= VAR_3;

 FUNC_4(VAR_9, VAR_11);

 FUNC_3(VAR_8, VAR_10, VAR_9);

 if (VAR_10->unsync_children || VAR_10->unsync)
  FUNC_2(VAR_9);
}
