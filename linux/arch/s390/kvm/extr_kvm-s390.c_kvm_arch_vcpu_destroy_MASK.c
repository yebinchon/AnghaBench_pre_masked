
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sie_block; int gmap; } ;
struct kvm_vcpu {TYPE_1__ arch; TYPE_3__* kvm; int vcpu_id; } ;
struct TYPE_5__ {scalar_t__ use_cmma; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct kvm_vcpu *VAR_1)
{
 FUNC_0(VAR_1, 3, "%s", "free cpu");
 FUNC_10(VAR_1->vcpu_id);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
 if (!FUNC_5(VAR_1->kvm))
  FUNC_9(VAR_1);

 if (FUNC_5(VAR_1->kvm))
  FUNC_2(VAR_1->arch.gmap);

 if (VAR_1->kvm->arch.use_cmma)
  FUNC_7(VAR_1);
 FUNC_1((unsigned long)(VAR_1->arch.sie_block));

 FUNC_8(VAR_1);
 FUNC_3(VAR_0, VAR_1);
}
