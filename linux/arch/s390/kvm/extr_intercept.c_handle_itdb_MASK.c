
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_s390_itdb {int dummy; } ;
struct TYPE_5__ {int per_flags; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_6__ {scalar_t__ itdba; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (struct kvm_s390_itdb*,int ,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ,struct kvm_s390_itdb*,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 struct kvm_s390_itdb *VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_3) || !FUNC_0(VAR_3))
  return 0;
 if (VAR_2->thread.per_flags & VAR_0)
  return 0;
 VAR_4 = (struct kvm_s390_itdb *)VAR_3->arch.sie_block->itdba;
 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_4, sizeof(*VAR_4));
 if (VAR_5)
  return VAR_5;
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 return 0;
}
