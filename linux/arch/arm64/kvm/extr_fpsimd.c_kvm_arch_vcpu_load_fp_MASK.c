
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct kvm_vcpu *VAR_8)
{
 FUNC_0(!VAR_7->mm);

 VAR_8->arch.flags &= ~(VAR_1 |
         VAR_4 |
         VAR_3);
 VAR_8->arch.flags |= VAR_2;

 if (FUNC_2(VAR_5))
  VAR_8->arch.flags |= VAR_4;

 if (FUNC_1(VAR_6) & VAR_0)
  VAR_8->arch.flags |= VAR_3;
}
