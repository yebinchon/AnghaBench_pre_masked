
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction_ptff; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0)
{
 VAR_0->stat.instruction_ptff++;


 FUNC_0(VAR_0, 3);
 return 0;
}
