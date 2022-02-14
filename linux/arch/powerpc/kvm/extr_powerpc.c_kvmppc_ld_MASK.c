
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
struct kvmppc_pte {int raddr; int eaddr; int may_execute; int may_read; } ;
struct TYPE_9__ {int magic_page_pa; void* shared; } ;
struct TYPE_6__ {int ld; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_8__ {TYPE_2__* kvm_ops; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct TYPE_7__ {int (* load_from_eaddr ) (struct kvm_vcpu*,int*,void*,int) ;} ;


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
 scalar_t__ FUNC_0 (TYPE_5__*,int,void*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ,int ,struct kvmppc_pte*) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int*,void*,int) ;

int FUNC_6(struct kvm_vcpu *VAR_12, ulong *VAR_13, int VAR_14, void *VAR_15,
        bool VAR_16)
{
 ulong VAR_17 = VAR_12->arch.magic_page_pa & VAR_6 & VAR_8;
 struct kvmppc_pte VAR_18;
 int VAR_19 = -VAR_1;

 VAR_12->stat.ld++;

 if (VAR_12->kvm->arch.kvm_ops && VAR_12->kvm->arch.kvm_ops->load_from_eaddr)
  VAR_19 = VAR_12->kvm->arch.kvm_ops->load_from_eaddr(VAR_12, VAR_13, VAR_15,
             VAR_14);

 if ((!VAR_19) || (VAR_19 == -VAR_0))
  return VAR_19;

 VAR_19 = FUNC_3(VAR_12, *VAR_13, VAR_16 ? VAR_9 : VAR_10,
     VAR_11, &VAR_18);
 if (VAR_19)
  return VAR_19;

 *VAR_13 = VAR_18.raddr;

 if (!VAR_18.may_read)
  return -VAR_5;

 if (!VAR_16 && !VAR_18.may_execute)
  return -VAR_4;


 if (FUNC_2(VAR_12) && VAR_17 &&
     ((VAR_18.raddr & VAR_6 & VAR_8) == VAR_17) &&
     !(FUNC_1(VAR_12) & VAR_7)) {
  void *VAR_20 = VAR_12->arch.shared;
  VAR_20 += VAR_18.eaddr & 0xfff;
  FUNC_4(VAR_15, VAR_20, VAR_14);
  return VAR_2;
 }

 if (FUNC_0(VAR_12->kvm, VAR_18.raddr, VAR_15, VAR_14))
  return VAR_3;

 return VAR_2;
}
