
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1, u32 VAR_2, u64 VAR_3)
{
 if (VAR_0->get_cpl(VAR_1) != 0 ||
     FUNC_0(VAR_1, VAR_2, VAR_3)) {
  FUNC_1(VAR_1, 0);
  return 1;
 }
 return 0;
}
