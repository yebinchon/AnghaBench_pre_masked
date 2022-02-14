
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct msr_data {int index; int host_initiated; int data; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* set_msr ) (struct kvm_vcpu*,struct msr_data*) ;} ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*,struct msr_data*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1, u32 VAR_2, u64 VAR_3,
    bool VAR_4)
{
 struct msr_data VAR_5;

 switch (VAR_2) {
 case 133:
 case 132:
 case 129:
 case 134:
 case 128:
  if (FUNC_1(VAR_3, VAR_1))
   return 1;
  break;
 case 131:
 case 130:
  VAR_3 = FUNC_0(VAR_3, FUNC_3(VAR_1));
 }

 VAR_5.data = VAR_3;
 VAR_5.index = VAR_2;
 VAR_5.host_initiated = VAR_4;

 return VAR_0->set_msr(VAR_1, &VAR_5);
}
