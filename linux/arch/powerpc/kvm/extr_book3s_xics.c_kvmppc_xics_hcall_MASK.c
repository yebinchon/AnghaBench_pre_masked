
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xics {scalar_t__ real_mode; } ;
struct TYPE_4__ {int icp; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ arch; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;




 int VAR_0 ;


 int VAR_1 ;


 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;

int FUNC_10(struct kvm_vcpu *VAR_2, u32 VAR_3)
{
 struct kvmppc_xics *VAR_4 = VAR_2->kvm->arch.xics;
 unsigned long VAR_5;
 int VAR_6 = VAR_1;


 if (!VAR_4 || !VAR_2->arch.icp)
  return VAR_0;


 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_7(VAR_2);
  FUNC_8(VAR_2, 4, VAR_5);
  FUNC_8(VAR_2, 5, FUNC_0());
  return VAR_6;
 case 130:
  VAR_6 = FUNC_6(VAR_2, FUNC_2(VAR_2, 4));
  return VAR_6;
 }


 if (VAR_4->real_mode && FUNC_1(VAR_2->kvm))
  return FUNC_9(VAR_2, VAR_3);

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_7(VAR_2);
  FUNC_8(VAR_2, 4, VAR_5);
  break;
 case 133:
  FUNC_3(VAR_2, FUNC_2(VAR_2, 4));
  break;
 case 132:
  VAR_6 = FUNC_4(VAR_2, FUNC_2(VAR_2, 4));
  break;
 case 131:
  VAR_6 = FUNC_5(VAR_2, FUNC_2(VAR_2, 4),
      FUNC_2(VAR_2, 5));
  break;
 }

 return VAR_6;
}
