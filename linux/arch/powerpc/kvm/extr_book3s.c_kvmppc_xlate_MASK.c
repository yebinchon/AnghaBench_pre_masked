
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_pte {int eaddr; int raddr; int vpage; int may_read; int may_write; int may_execute; } ;
struct TYPE_3__ {int (* xlate ) (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;} ;
struct TYPE_4__ {int hflags; TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef enum xlate_readwrite { ____Placeholder_xlate_readwrite } xlate_readwrite ;
typedef enum xlate_instdata { ____Placeholder_xlate_instdata } xlate_instdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;

int FUNC_2(struct kvm_vcpu *VAR_9, ulong VAR_10, enum xlate_instdata VAR_11,
   enum xlate_readwrite VAR_12, struct kvmppc_pte *VAR_13)
{
 bool VAR_14 = (VAR_11 == VAR_7);
 bool VAR_15 = (VAR_12 == VAR_8);
 int VAR_16 = (FUNC_0(VAR_9) & (VAR_14 ? VAR_2 : VAR_3));
 int VAR_17;

 if (VAR_16) {
  VAR_17 = VAR_9->arch.mmu.xlate(VAR_9, VAR_10, VAR_13, VAR_14, VAR_15);
 } else {
  VAR_13->eaddr = VAR_10;
  VAR_13->raddr = VAR_10 & VAR_1;
  VAR_13->vpage = VAR_6 | VAR_10 >> 12;
  VAR_13->may_read = 1;
  VAR_13->may_write = 1;
  VAR_13->may_execute = 1;
  VAR_17 = 0;

  if ((FUNC_0(VAR_9) & (VAR_3 | VAR_2)) == VAR_2 &&
      !VAR_14) {
   if ((VAR_9->arch.hflags & VAR_0) &&
       ((VAR_10 & VAR_4) == VAR_5))
   VAR_13->raddr &= ~VAR_4;
  }
 }

 return VAR_17;
}
