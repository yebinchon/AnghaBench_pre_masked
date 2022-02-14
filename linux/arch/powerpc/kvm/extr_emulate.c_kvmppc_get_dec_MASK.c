
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ dec_jiffies; scalar_t__ dec; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



u32 FUNC_0(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = VAR_1 - VAR_0->arch.dec_jiffies;






 return VAR_0->arch.dec - VAR_2;
}
