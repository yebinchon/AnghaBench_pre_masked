
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kvmppc_slb {unsigned long origv; } ;
struct kvmppc_pte {int eaddr; unsigned long vpage; int may_execute; int raddr; int may_write; int may_read; } ;
struct TYPE_9__ {int msr; } ;
struct TYPE_10__ {int amr; TYPE_4__ shregs; } ;
struct kvm_vcpu {TYPE_5__ arch; struct kvm* kvm; } ;
struct TYPE_7__ {TYPE_1__* rev; scalar_t__ virt; } ;
struct TYPE_8__ {unsigned long vrma_slb_v; TYPE_2__ hpt; } ;
struct kvm {TYPE_3__ arch; } ;
typedef int gva_t ;
typedef int __be64 ;
struct TYPE_6__ {unsigned long guest_rpte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (struct kvm*) ;
 long FUNC_7 (struct kvm*,int,unsigned long,int) ;
 struct kvmppc_slb* FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (unsigned long,unsigned long,int) ;
 int FUNC_10 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_16, gva_t VAR_17,
   struct kvmppc_pte *VAR_18, bool VAR_19, bool VAR_20)
{
 struct kvm *VAR_21 = VAR_16->kvm;
 struct kvmppc_slb *VAR_22;
 unsigned long VAR_23;
 unsigned long VAR_24, VAR_25;
 unsigned long VAR_26, VAR_27, VAR_28;
 __be64 *VAR_29;
 long int VAR_30;
 int VAR_31 = VAR_16->arch.shregs.msr & (VAR_19 ? VAR_11 : VAR_12);

 if (FUNC_6(VAR_16->kvm))
  return FUNC_10(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);


 if (VAR_31) {
  VAR_22 = FUNC_8(VAR_16, VAR_17);
  if (!VAR_22)
   return -VAR_1;
  VAR_23 = VAR_22->origv;
 } else {

  VAR_23 = VAR_16->kvm->arch.vrma_slb_v;
 }

 FUNC_11();

 VAR_30 = FUNC_7(VAR_21, VAR_17, VAR_23,
      VAR_10 | VAR_7);
 if (VAR_30 < 0) {
  FUNC_12();
  return -VAR_2;
 }
 VAR_29 = (__be64 *)(VAR_21->arch.hpt.virt + (VAR_30 << 4));
 VAR_26 = VAR_27 = FUNC_0(VAR_29[0]) & ~VAR_9;
 if (FUNC_1(VAR_0))
  VAR_26 = FUNC_3(VAR_26, FUNC_0(VAR_29[1]));
 VAR_28 = VAR_21->arch.hpt.rev[VAR_30].guest_rpte;

 FUNC_13(VAR_29, VAR_27);
 FUNC_12();

 VAR_18->eaddr = VAR_17;
 VAR_18->vpage = ((VAR_26 & VAR_8) << 4) | ((VAR_17 >> 12) & 0xfff);


 VAR_24 = VAR_28 & (VAR_6 | VAR_5);
 VAR_25 = (VAR_16->arch.shregs.msr & VAR_13) ? VAR_14 : VAR_15;
 VAR_25 &= VAR_23;


 VAR_18->may_read = FUNC_4(VAR_24, VAR_25);
 VAR_18->may_write = FUNC_5(VAR_24, VAR_25);
 VAR_18->may_execute = VAR_18->may_read && !(VAR_28 & (VAR_4 | VAR_3));


 if (VAR_19 && VAR_31) {
  int VAR_32 = FUNC_2(VAR_28, VAR_16->arch.amr);
  if (VAR_32 & 1)
   VAR_18->may_read = 0;
  if (VAR_32 & 2)
   VAR_18->may_write = 0;
 }


 VAR_18->raddr = FUNC_9(VAR_26, VAR_28, VAR_17);
 return 0;
}
