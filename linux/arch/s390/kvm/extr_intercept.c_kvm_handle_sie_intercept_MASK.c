
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct TYPE_4__ {int exit_io_request; int exit_external_request; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__ stat; int kvm; } ;
struct TYPE_5__ {int icptcode; int icptstatus; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;

int FUNC_11(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 if (FUNC_7(VAR_1->kvm))
  return -VAR_0;

 switch (VAR_1->arch.sie_block->icptcode) {
 case 137:
  VAR_1->stat.exit_external_request++;
  return 0;
 case 135:
  VAR_1->stat.exit_io_request++;
  return 0;
 case 136:
  VAR_2 = FUNC_1(VAR_1);
  break;
 case 131:
  return FUNC_4(VAR_1);
 case 138:
  return FUNC_0(VAR_1);
 case 128:
  return FUNC_9(VAR_1);
 case 129:
  return FUNC_6(VAR_1);
 case 130:
  return FUNC_5(VAR_1);
 case 133:
  VAR_2 = FUNC_2(VAR_1);
  break;
 case 132:
  VAR_2 = FUNC_3(VAR_1);
  break;
 case 134:
  VAR_2 = FUNC_10(VAR_1);
  break;
 default:
  return -VAR_0;
 }


 if (VAR_1->arch.sie_block->icptstatus & 0x02 &&
     (!VAR_2 || VAR_2 == -VAR_0))
  VAR_3 = FUNC_8(VAR_1);
 return VAR_3 ? VAR_3 : VAR_2;
}
