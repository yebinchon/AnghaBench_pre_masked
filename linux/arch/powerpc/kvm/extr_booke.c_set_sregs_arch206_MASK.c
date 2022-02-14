
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ivpr; int decar; int mcsrr1; int mcsrr0; } ;
struct kvm_vcpu {scalar_t__ vcpu_id; TYPE_1__ arch; } ;
struct TYPE_6__ {int features; scalar_t__ pir; int ivpr; int decar; int mcsrr1; int mcsrr0; } ;
struct TYPE_5__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_2,
                             struct kvm_sregs *VAR_3)
{
 if (!(VAR_3->u.e.features & VAR_1))
  return 0;

 if (VAR_3->u.e.pir != VAR_2->vcpu_id)
  return -VAR_0;

 VAR_2->arch.mcsrr0 = VAR_3->u.e.mcsrr0;
 VAR_2->arch.mcsrr1 = VAR_3->u.e.mcsrr1;
 VAR_2->arch.decar = VAR_3->u.e.decar;
 VAR_2->arch.ivpr = VAR_3->u.e.ivpr;

 return 0;
}
