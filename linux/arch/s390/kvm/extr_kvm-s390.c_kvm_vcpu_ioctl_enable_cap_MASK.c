
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_enable_cap {int cap; scalar_t__ flags; } ;
struct TYPE_4__ {int css_support; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;

 int FUNC_0 (TYPE_2__*,int,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
         struct kvm_enable_cap *VAR_2)
{
 int VAR_3;

 if (VAR_2->flags)
  return -VAR_0;

 switch (VAR_2->cap) {
 case 128:
  if (!VAR_1->kvm->arch.css_support) {
   VAR_1->kvm->arch.css_support = 1;
   FUNC_0(VAR_1->kvm, 3, "%s", "ENABLE: CSS support");
   FUNC_1(VAR_1->kvm);
  }
  VAR_3 = 0;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
