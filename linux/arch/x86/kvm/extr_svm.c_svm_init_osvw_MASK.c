
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; unsigned long long status; } ;
struct TYPE_5__ {TYPE_1__ osvw; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int x86; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_3)
{




 VAR_3->arch.osvw.length = (VAR_1 >= 3) ? (VAR_1) : 3;
 VAR_3->arch.osvw.status = VAR_2 & ~(6ULL);
 if (VAR_1 == 0 && VAR_0.x86 == 0x10)
  VAR_3->arch.osvw.status |= 1;
}
