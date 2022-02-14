
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_pte {int raddr; int eaddr; int may_write; } ;
struct TYPE_9__ {int magic_page_pa; void* shared; } ;
struct TYPE_6__ {int st; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_8__ {TYPE_2__* kvm_ops; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct TYPE_7__ {int (* store_to_eaddr ) (struct kvm_vcpu*,int*,void*,int) ;} ;


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
 scalar_t__ FUNC_0 (TYPE_5__*,int,void*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ,int ,struct kvmppc_pte*) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int*,void*,int) ;

int FUNC_6(struct kvm_vcpu *VAR_11, ulong *VAR_12, int VAR_13, void *VAR_14,
       bool VAR_15)
{
 ulong VAR_16 = VAR_11->arch.magic_page_pa & VAR_5 & VAR_7;
 struct kvmppc_pte VAR_17;
 int VAR_18 = -VAR_1;

 VAR_11->stat.st++;

 if (VAR_11->kvm->arch.kvm_ops && VAR_11->kvm->arch.kvm_ops->store_to_eaddr)
  VAR_18 = VAR_11->kvm->arch.kvm_ops->store_to_eaddr(VAR_11, VAR_12, VAR_14,
           VAR_13);

 if ((!VAR_18) || (VAR_18 == -VAR_0))
  return VAR_18;

 VAR_18 = FUNC_3(VAR_11, *VAR_12, VAR_15 ? VAR_8 : VAR_9,
    VAR_10, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 *VAR_12 = VAR_17.raddr;

 if (!VAR_17.may_write)
  return -VAR_4;


 if (FUNC_2(VAR_11) && VAR_16 &&
     ((VAR_17.raddr & VAR_5 & VAR_7) == VAR_16) &&
     !(FUNC_1(VAR_11) & VAR_6)) {
  void *VAR_19 = VAR_11->arch.shared;
  VAR_19 += VAR_17.eaddr & 0xfff;
  FUNC_4(VAR_19, VAR_14, VAR_13);
  return VAR_2;
 }

 if (FUNC_0(VAR_11->kvm, VAR_17.raddr, VAR_14, VAR_13))
  return VAR_3;

 return VAR_2;
}
