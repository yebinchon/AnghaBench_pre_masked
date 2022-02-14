
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int* hid; } ;


 TYPE_1__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 return (FUNC_0(VAR_0)->hid[5] & 0x80);
}
