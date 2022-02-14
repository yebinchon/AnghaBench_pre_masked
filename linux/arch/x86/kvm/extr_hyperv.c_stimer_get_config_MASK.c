
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int as_uint64; } ;
struct kvm_vcpu_hv_stimer {TYPE_1__ config; } ;



__attribute__((used)) static int FUNC_0(struct kvm_vcpu_hv_stimer *VAR_0, u64 *VAR_1)
{
 *VAR_1 = VAR_0->config.as_uint64;
 return 0;
}
