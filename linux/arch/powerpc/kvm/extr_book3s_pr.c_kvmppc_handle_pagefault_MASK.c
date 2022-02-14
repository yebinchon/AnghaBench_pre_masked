
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u64 ;
struct kvmppc_pte {int may_execute; int may_read; int may_write; int raddr; int eaddr; int vpage; int wimg; int page_size; int member_0; } ;
struct TYPE_4__ {int (* xlate ) (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;scalar_t__ (* is_dcbz32 ) (struct kvm_vcpu*) ;int (* esid_to_vsid ) (struct kvm_vcpu*,int,int*) ;} ;
struct TYPE_6__ {int fault_dsisr; int hflags; int paddr_accessed; int vaddr_accessed; TYPE_1__ mmu; } ;
struct TYPE_5__ {int mmio_exits; int sp_storage; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__ stat; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int const FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvmppc_pte*,int) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvmppc_pte*) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvmppc_pte*) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,int) ;
 int FUNC_11 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;
 int FUNC_12 (struct kvm_vcpu*,int,int*) ;
 scalar_t__ FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*) ;

int FUNC_15(struct kvm_run *VAR_23, struct kvm_vcpu *VAR_24,
       ulong VAR_25, int VAR_26)
{
 bool VAR_27 = (VAR_26 == VAR_2);
 bool VAR_28 = 0;
 int VAR_29 = VAR_14;
 int VAR_30;
 int VAR_31 = 0;
 struct kvmppc_pte VAR_32 = { 0 };
 bool VAR_33 = (FUNC_5(VAR_24) & 129) ? 1 : 0;
 bool VAR_34 = (FUNC_5(VAR_24) & 128) ? 1 : 0;
 u64 VAR_35;

 VAR_30 = VAR_27 ? VAR_33 : VAR_34;
 if (VAR_27 && (VAR_24->arch.fault_dsisr & VAR_3))
  VAR_28 = 1;


 if (VAR_30) {
  VAR_31 = VAR_24->arch.mmu.xlate(VAR_24, VAR_25, &VAR_32, VAR_27, VAR_28);
 } else {
  VAR_32.may_execute = 1;
  VAR_32.may_read = 1;
  VAR_32.may_write = 1;
  VAR_32.raddr = VAR_25 & VAR_12;
  VAR_32.eaddr = VAR_25;
  VAR_32.vpage = VAR_25 >> 12;
  VAR_32.page_size = VAR_13;
  VAR_32.wimg = VAR_10;
 }

 switch (FUNC_5(VAR_24) & (129|128)) {
 case 0:
  VAR_32.vpage |= ((u64)VAR_20 << (VAR_17 - 12));
  break;
 case 129:
  if (!VAR_27 &&
      (VAR_24->arch.hflags & VAR_1) &&
      ((VAR_32.raddr & VAR_18) == VAR_19))
   VAR_32.raddr &= ~VAR_18;

 case 128:
  VAR_24->arch.mmu.esid_to_vsid(VAR_24, VAR_25 >> VAR_17, &VAR_35);

  if ((FUNC_5(VAR_24) & (129|128)) == 129)
   VAR_32.vpage |= ((u64)VAR_21 << (VAR_17 - 12));
  else
   VAR_32.vpage |= ((u64)VAR_22 << (VAR_17 - 12));
  VAR_32.vpage |= VAR_35;

  if (VAR_35 == -1)
   VAR_31 = -VAR_6;
  break;
 }

 if (VAR_24->arch.mmu.is_dcbz32(VAR_24) &&
    (!(VAR_24->arch.hflags & VAR_0))) {





  VAR_32.may_execute = !VAR_27;
 }

 if (VAR_31 == -VAR_8 || VAR_31 == -VAR_9) {

  u64 VAR_36;

  if (VAR_31 == -VAR_9)
   VAR_36 = VAR_5;
  else
   VAR_36 = VAR_4;
  if (VAR_27) {
   VAR_36 |= VAR_24->arch.fault_dsisr & VAR_3;
   FUNC_1(VAR_24, VAR_25, VAR_36);
  } else {
   FUNC_2(VAR_24, VAR_36);
  }
 } else if (VAR_31 == -VAR_6) {

  FUNC_9(VAR_24, FUNC_4(VAR_24));
  FUNC_0(VAR_24, VAR_26 + 0x80);
 } else if (FUNC_10(VAR_24, VAR_32.raddr)) {
  if (VAR_27 && !(VAR_24->arch.fault_dsisr & VAR_4)) {





   FUNC_7(VAR_24, &VAR_32);
  }

  if (FUNC_6(VAR_24, &VAR_32, VAR_28) == -VAR_7) {

   VAR_23->exit_reason = VAR_11;
   return VAR_15;
  }
  if (VAR_27)
   VAR_24->stat.sp_storage++;
  else if (VAR_24->arch.mmu.is_dcbz32(VAR_24) &&
    (!(VAR_24->arch.hflags & VAR_0)))
   FUNC_8(VAR_24, &VAR_32);
 } else {

  VAR_24->stat.mmio_exits++;
  VAR_24->arch.paddr_accessed = VAR_32.raddr;
  VAR_24->arch.vaddr_accessed = VAR_32.eaddr;
  VAR_29 = FUNC_3(VAR_23, VAR_24);
  if ( VAR_29 == VAR_16 )
   VAR_29 = VAR_15;
 }

 return VAR_29;
}
