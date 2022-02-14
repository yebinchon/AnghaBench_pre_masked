
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {scalar_t__ pgoff; int page; } ;
struct TYPE_2__ {int sie_block; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

vm_fault_t FUNC_3(struct kvm_vcpu *VAR_2, struct vm_fault *VAR_3)
{
 return VAR_1;
}
