
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; } ;
struct TYPE_4__ {scalar_t__ vm86_active; } ;
struct TYPE_5__ {TYPE_1__ rmode; } ;


 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_segment*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static u64 FUNC_3(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_segment VAR_2;

 if (FUNC_0(VAR_0)->rmode.vm86_active) {
  FUNC_1(VAR_0, &VAR_2, VAR_1);
  return VAR_2.base;
 }
 return FUNC_2(FUNC_0(VAR_0), VAR_1);
}
