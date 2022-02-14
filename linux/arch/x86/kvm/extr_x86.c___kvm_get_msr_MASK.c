
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct msr_data {int host_initiated; int data; int index; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_msr ) (struct kvm_vcpu*,struct msr_data*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct msr_data*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, u32 VAR_2, u64 *VAR_3,
    bool VAR_4)
{
 struct msr_data VAR_5;
 int VAR_6;

 VAR_5.index = VAR_2;
 VAR_5.host_initiated = VAR_4;

 VAR_6 = VAR_0->get_msr(VAR_1, &VAR_5);
 if (!VAR_6)
  *VAR_3 = VAR_5.data;
 return VAR_6;
}
