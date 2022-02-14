
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int skey_enabled; TYPE_3__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* kvm; } ;
struct TYPE_7__ {int ictl; } ;
struct TYPE_5__ {int use_skf; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_4)
{
 int VAR_5;

 FUNC_4(VAR_4);

 if (VAR_4->arch.skey_enabled)
  return 0;

 VAR_5 = FUNC_3();
 FUNC_0(VAR_4, 3, "enabling storage keys for guest: %d", VAR_5);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(VAR_4, VAR_0))
  FUNC_1(VAR_4, VAR_0);
 if (!VAR_4->kvm->arch.use_skf)
  VAR_4->arch.sie_block->ictl |= VAR_1 | VAR_3 | VAR_2;
 else
  VAR_4->arch.sie_block->ictl &= ~(VAR_1 | VAR_3 | VAR_2);
 VAR_4->arch.skey_enabled = 1;
 return 0;
}
