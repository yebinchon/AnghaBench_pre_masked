
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int msr; } ;
struct TYPE_8__ {int trap; int fault_dsisr; TYPE_2__ shregs; int fault_dar; int mce_evt; } ;
struct TYPE_5__ {int ext_intr_exits; int dec_exits; int sum_exits; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_3__* kvm; TYPE_1__ stat; } ;
struct kvm_run {int dummy; } ;
struct TYPE_7__ {int srcu; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct kvm_run *VAR_6, struct kvm_vcpu *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_7->stat.sum_exits++;
 if (VAR_7->arch.shregs.msr & VAR_3) {
  FUNC_7("KVM trap in HV mode while nested!\n");
  FUNC_7("trap=0x%x | pc=0x%lx | msr=0x%llx\n",
    VAR_7->arch.trap, FUNC_4(VAR_7),
    VAR_7->arch.shregs.msr);
  FUNC_2(VAR_7);
  return VAR_5;
 }
 switch (VAR_7->arch.trap) {

 case 137:
  VAR_7->stat.dec_exits++;
  VAR_8 = VAR_4;
  break;
 case 139:
  VAR_7->stat.ext_intr_exits++;
  VAR_8 = VAR_5;
  break;
 case 133:
 case 131:
  VAR_7->stat.ext_intr_exits++;
  VAR_8 = VAR_4;
  break;

 case 138:
 case 129:
 case 128:
  VAR_8 = VAR_4;
  break;
 case 130:

  VAR_8 = VAR_5;

  FUNC_6(&VAR_7->arch.mce_evt, 0, 1);
  break;






 case 134:
  VAR_9 = FUNC_8(&VAR_7->kvm->srcu);
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  FUNC_9(&VAR_7->kvm->srcu, VAR_9);
  break;
 case 132:
  VAR_7->arch.fault_dar = FUNC_4(VAR_7);
  VAR_7->arch.fault_dsisr = FUNC_3(VAR_7) &
      VAR_1;
  if (VAR_7->arch.shregs.msr & VAR_2)
   VAR_7->arch.fault_dsisr |= VAR_0;
  VAR_9 = FUNC_8(&VAR_7->kvm->srcu);
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  FUNC_9(&VAR_7->kvm->srcu, VAR_9);
  break;
 case 136:
  VAR_7->arch.trap = 0;
  VAR_8 = VAR_4;
  if (!FUNC_10())
   FUNC_5(VAR_7, 0);
  break;
 default:
  VAR_8 = VAR_5;
  break;
 }

 return VAR_8;
}
