
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_3__* kvm; } ;
struct kvmppc_vcpu_e500 {TYPE_2__ vcpu; } ;
struct kvm_book3e_206_tlb_entry {int mas2; } ;
struct TYPE_4__ {int lpid; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct kvmppc_vcpu_e500 *VAR_0,
  int VAR_1, int VAR_2, struct kvm_book3e_206_tlb_entry *VAR_3)
{
 u32 VAR_4;

 if (VAR_1 == 0) {
  VAR_4 = FUNC_3(VAR_3->mas2);
  FUNC_2(VAR_3, VAR_4, VAR_0->vcpu.kvm->arch.lpid);
 } else {
  FUNC_2(VAR_3,
      FUNC_1(1) |
      FUNC_0(FUNC_4(VAR_2)),
      VAR_0->vcpu.kvm->arch.lpid);
 }
}
