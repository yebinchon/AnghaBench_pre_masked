
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int regs_dirty; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {int* pdptrs; } ;
typedef int pdpte ;
typedef unsigned long gfn_t ;


 int FUNC_0 (int*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_mmu*,unsigned long,int*,unsigned int,int,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_6, struct kvm_mmu *VAR_7, unsigned long VAR_8)
{
 gfn_t VAR_9 = VAR_8 >> VAR_0;
 unsigned VAR_10 = ((VAR_8 & (VAR_1-1)) >> 5) << 2;
 int VAR_11;
 int VAR_12;
 u64 VAR_13[FUNC_0(VAR_7->pdptrs)];

 VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_9, VAR_13,
          VAR_10 * sizeof(u64), sizeof(VAR_13),
          VAR_2|VAR_3);
 if (VAR_12 < 0) {
  VAR_12 = 0;
  goto out;
 }
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_13); ++VAR_11) {
  if ((VAR_13[VAR_11] & VAR_4) &&
      (VAR_13[VAR_11] & FUNC_4(VAR_6))) {
   VAR_12 = 0;
   goto out;
  }
 }
 VAR_12 = 1;

 FUNC_3(VAR_7->pdptrs, VAR_13, sizeof(VAR_7->pdptrs));
 FUNC_1(VAR_5,
    (unsigned long *)&VAR_6->arch.regs_avail);
 FUNC_1(VAR_5,
    (unsigned long *)&VAR_6->arch.regs_dirty);
out:

 return VAR_12;
}
