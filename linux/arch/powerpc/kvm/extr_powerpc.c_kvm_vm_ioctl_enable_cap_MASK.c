
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_enable_cap {int cap; unsigned long* args; scalar_t__ flags; } ;
struct TYPE_4__ {TYPE_1__* kvm_ops; int enabled_hcalls; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_3__ {int (* set_smt_mode ) (struct kvm*,unsigned long,unsigned long) ;int (* enable_nested ) (struct kvm*) ;} ;


 int VAR_0 ;



 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (struct kvm*,unsigned long,unsigned long) ;
 int FUNC_5 (struct kvm*) ;

int FUNC_6(struct kvm *VAR_2,
       struct kvm_enable_cap *VAR_3)
{
 int VAR_4;

 if (VAR_3->flags)
  return -VAR_0;

 switch (VAR_3->cap) {
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
