
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct kvm_device {TYPE_2__* kvm; } ;
struct TYPE_3__ {struct kvm_device* flic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_device *VAR_1, u32 VAR_2)
{
 if (!VAR_1)
  return -VAR_0;
 if (VAR_1->kvm->arch.flic)
  return -VAR_0;
 VAR_1->kvm->arch.flic = VAR_1;
 return 0;
}
