
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_device {TYPE_2__* kvm; } ;
struct TYPE_3__ {int * flic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_device*) ;

__attribute__((used)) static void FUNC_1(struct kvm_device *VAR_0)
{
 VAR_0->kvm->arch.flic = ((void*)0);
 FUNC_0(VAR_0);
}
