
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_cpuid_param {int dummy; } ;
struct TYPE_2__ {scalar_t__ x86_vendor; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct kvm_cpuid_param *VAR_2)
{
 return VAR_1.x86_vendor == VAR_0;
}
