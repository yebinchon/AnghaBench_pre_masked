
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int cr14; } ;
struct TYPE_16__ {TYPE_6__ mchk; } ;
struct TYPE_17__ {TYPE_7__ irq; } ;
struct TYPE_18__ {TYPE_8__ local_int; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_9__ arch; TYPE_5__* kvm; } ;
struct TYPE_11__ {int cr14; } ;
struct TYPE_12__ {TYPE_2__ mchk; } ;
struct TYPE_13__ {TYPE_3__ float_int; } ;
struct TYPE_14__ {TYPE_4__ arch; } ;
struct TYPE_10__ {int* gcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,unsigned long*) ;
 unsigned long FUNC_1 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_6(struct kvm_vcpu *VAR_15)
{
 unsigned long VAR_16;

 VAR_16 = FUNC_2(VAR_15);
 if (!VAR_16)
  return 0;

 if (FUNC_3(VAR_15))
  VAR_16 &= ~VAR_9;
 if (FUNC_4(VAR_15))
  VAR_16 &= ~VAR_11;
 else
  VAR_16 = FUNC_1(VAR_15, VAR_16);
 if (!(VAR_15->arch.sie_block->gcr[0] & VAR_3))
  FUNC_0(VAR_8, &VAR_16);
 if (!(VAR_15->arch.sie_block->gcr[0] & VAR_2))
  FUNC_0(VAR_7, &VAR_16);
 if (!(VAR_15->arch.sie_block->gcr[0] & VAR_0))
  FUNC_0(VAR_5, &VAR_16);
 if (!(VAR_15->arch.sie_block->gcr[0] & VAR_1))
  FUNC_0(VAR_6, &VAR_16);
 if (!(VAR_15->arch.sie_block->gcr[0] & VAR_4))
  FUNC_0(VAR_10, &VAR_16);
 if (FUNC_5(VAR_15))
  VAR_16 &= ~VAR_12;




 if (!(VAR_15->arch.sie_block->gcr[14] &
    (VAR_15->kvm->arch.float_int.mchk.cr14 |
    VAR_15->arch.local_int.irq.mchk.cr14)))
  FUNC_0(VAR_13, &VAR_16);





 FUNC_0(VAR_14, &VAR_16);

 return VAR_16;
}
