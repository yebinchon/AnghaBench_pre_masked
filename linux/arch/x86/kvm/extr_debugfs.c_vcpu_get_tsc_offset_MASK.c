
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tsc_offset; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct kvm_vcpu *VAR_2 = (struct kvm_vcpu *) VAR_0;
 *VAR_1 = VAR_2->arch.tsc_offset;
 return 0;
}
