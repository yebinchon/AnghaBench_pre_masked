
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned long count_hz; scalar_t__ count_dyn_bias; int count_period; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 VAR_1->arch.count_hz = VAR_2;
 VAR_1->arch.count_period = FUNC_0((u64)VAR_0 << 32, VAR_2);
 VAR_1->arch.count_dyn_bias = 0;


 FUNC_1(VAR_1, 0);
}
