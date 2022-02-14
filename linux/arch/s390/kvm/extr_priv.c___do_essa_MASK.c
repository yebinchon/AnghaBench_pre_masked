
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* sie_block; } ;
struct kvm_vcpu {TYPE_7__* kvm; TYPE_5__ arch; TYPE_3__* run; } ;
struct kvm_memory_slot {scalar_t__ base_gfn; } ;
struct TYPE_14__ {int cmma_dirty_pages; } ;
struct TYPE_15__ {TYPE_6__ arch; int mm; } ;
struct TYPE_12__ {int cbrlo; } ;
struct TYPE_9__ {unsigned long* gprs; } ;
struct TYPE_10__ {TYPE_1__ regs; } ;
struct TYPE_11__ {TYPE_2__ s; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (TYPE_7__*,unsigned long) ;
 struct kvm_memory_slot* FUNC_2 (TYPE_7__*,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_memory_slot*) ;
 int FUNC_7 (int ,unsigned long,int const,unsigned long*,unsigned long*) ;
 unsigned long* FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_10(struct kvm_vcpu *VAR_7, const int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned long *VAR_18;






 FUNC_4(VAR_7, &VAR_9, &VAR_10);
 VAR_13 = VAR_7->run->s.regs.gprs[VAR_10] >> VAR_1;
 VAR_14 = FUNC_1(VAR_7->kvm, VAR_13);
 VAR_12 = (VAR_7->arch.sie_block->cbrlo & ~VAR_0) >> 3;

 if (FUNC_3(VAR_14))
  return FUNC_5(VAR_7, VAR_2);

 VAR_11 = FUNC_7(VAR_7->kvm->mm, VAR_14, VAR_8, &VAR_17, &VAR_16);
 if (VAR_11 < 0) {
  VAR_15 = VAR_8 ? 0x10 : 0;
  VAR_7->run->s.regs.gprs[VAR_9] = VAR_15;
  return 0;
 }
 VAR_15 = (VAR_16 & VAR_5) >> 22;






 if (VAR_17 & VAR_3) {
  VAR_15 |= 2;
  if (VAR_16 & VAR_6)
   VAR_15 |= 1;
 }
 if (VAR_16 & VAR_4)
  VAR_15 |= 0x20;
 VAR_7->run->s.regs.gprs[VAR_9] = VAR_15;






 if (VAR_11 > 0) {
  VAR_18 = FUNC_8(VAR_7->arch.sie_block->cbrlo & VAR_0);
  VAR_18[VAR_12] = VAR_13 << VAR_1;
 }

 if (VAR_8) {
  struct kvm_memory_slot *VAR_19 = FUNC_2(VAR_7->kvm, VAR_13);


  if (VAR_19 && !FUNC_9(VAR_13 - VAR_19->base_gfn, FUNC_6(VAR_19)))
   FUNC_0(&VAR_7->kvm->arch.cmma_dirty_pages);
 }

 return VAR_11;
}
