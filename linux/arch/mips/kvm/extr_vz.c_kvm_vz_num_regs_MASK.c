
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maar; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_4__ {int kscratch_mask; } ;
struct TYPE_6__ {TYPE_1__ guest; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm_vcpu *VAR_13)
{
 unsigned long VAR_14;

 VAR_14 = FUNC_0(VAR_9);
 if (VAR_8)
  ++VAR_14;
 if (VAR_1)
  ++VAR_14;
 if (VAR_2)
  ++VAR_14;
 if (VAR_3)
  VAR_14 += FUNC_0(VAR_10);
 if (VAR_7)
  VAR_14 += FUNC_0(VAR_12);
 if (VAR_5)
  VAR_14 += FUNC_0(VAR_11);
 if (VAR_6 && !VAR_4)
  VAR_14 += 1 + FUNC_0(VAR_13->arch.maar);
 VAR_14 += FUNC_1(VAR_0[0].guest.kscratch_mask);

 return VAR_14;
}
